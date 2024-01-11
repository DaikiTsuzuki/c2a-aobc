#pragma section REPRO
/**
* @file   b_dot.c
* @brief  Bdot則による目標出力磁気モーメント計算アプリ
*/

#include "bdot.h"

#include <src_core/TlmCmd/common_cmd_packet_util.h>
#include <src_user/Library/vector3.h>
#include <src_user/Library/matrix33.h>
#include <src_user/Library/math_constants.h>
#include <src_user/Applications/UserDefined/AOCS/aocs_manager.h>
#include <src_user/Applications/DriverInstances/di_mtq_seiren.h>

// Satellite parameters
#include <src_user/Settings/SatelliteParameters/attitude_control_parameters.h>

static Bdot        bdot_;
const  Bdot* const bdot = &bdot_;

/**
 * @brief  Bdot則各種パラメータ初期化関数
 * @param  void
 * @return void
 */
static void APP_BDOT_init_(void);

/**
 * @brief  Bdot則による目標出力磁気モーメント計算関数
 * @param  void
 * @return void
 * @note   ここでは目標出力磁気モーメントの計算を行い，実際のMTQ出力指令はAPP_MTQ_SEIREN_CONTROLLERで行う
 */
static void APP_BDOT_exec_(void);

/**
 * @brief  磁場ベクトル時間微分計算関数
 * @param  void
 * @return void
 */
static AOCS_ERROR APP_BDOT_calculate_mag_vec_time_derivative_(void);

/**
 * @brief  MTQ目標磁気モーメント計算関数
 * @param  void
 * @return void
 * @note   MTQの出力がOFFのときに呼び出され，MTQの出力をONにする役割を持つ
 */
static void APP_BDOT_calculate_target_mtq_output_(void);

AppInfo APP_BDOT_create_app(void)
{
  return AI_create_app_info("Bdot", APP_BDOT_init_, APP_BDOT_exec_);
}

static void APP_BDOT_init_(void)
{
  VECTOR3_copy(bdot_.control_gain, ATTITUDE_CONTROL_PARAMETERS_bdot_control_gain);
  bdot_.minimum_time_derivative_step_ms = ATTITUDE_CONTROL_PARAMETERS_bdot_minimum_time_derivative_step_ms;

  bdot_.time_derivative_variables.previous_obc_time = TMGR_get_master_clock();
  bdot_.time_derivative_variables.current_obc_time = TMGR_get_master_clock();
  VECTOR3_initialize(bdot_.time_derivative_variables.mag_vec_before_nT, 0.0);
  VECTOR3_initialize(bdot_.time_derivative_variables.mag_vec_after_nT, 0.0);
  VECTOR3_initialize(bdot_.time_derivative_variables.mag_vec_time_derivative_nT_s, 0.0);
}

void APP_BDOT_exec_(void)
{
  // 磁気モーメント目標値を計算し、AOCS MANAGERにセットする
  APP_BDOT_calculate_target_mtq_output_();
  // 実際にMTQの出力を行うのは、MTQ_SEIREN_CONTROLLERの中になる
}

void APP_BDOT_calculate_target_mtq_output_(void)
{
  AOCS_ERROR ret;
  ret = APP_BDOT_calculate_mag_vec_time_derivative_();

  // 時間微分の計算をしていないなら，磁気モーメント目標値の値が無意味になるため，以降の処理はすべてスキップする
  if (ret != AOCS_ERROR_OK) return;

  float mag_moment_target_Am2[PHYSICAL_CONST_THREE_DIM];
  VECTOR3_hadamard_product(mag_moment_target_Am2, bdot->control_gain, bdot_.time_derivative_variables.mag_vec_time_derivative_nT_s);

  AOCS_MANAGER_set_mag_moment_target_body_Am2(mag_moment_target_Am2);
}

AOCS_ERROR APP_BDOT_calculate_mag_vec_time_derivative_(void)
{
  // 磁気センサの観測が開始していない場合，磁場ベクトルが0となっているので，その場合はすぐにリターンする
  if (VECTOR3_norm(aocs_manager->mag_vec_est_body_nT) < MATH_CONST_NORMAL_CHECK_THRESHOLD) return AOCS_ERROR_OTHERS;

  bdot_.time_derivative_variables.current_obc_time = TMGR_get_master_clock();
  VECTOR3_copy(bdot_.time_derivative_variables.mag_vec_after_nT, aocs_manager->mag_vec_est_body_nT);

  // 時間微分のインターバルが一定以下の場合は，姿勢レートの変化が不十分とみなし，磁場の時間微分を計算しない
  if (OBCT_diff_in_msec(&(bdot->time_derivative_variables.previous_obc_time), &(bdot->time_derivative_variables.current_obc_time))
    < bdot->minimum_time_derivative_step_ms)
  {
    return AOCS_ERROR_OTHERS;
  }

  VECTOR3_time_derivative(bdot_.time_derivative_variables.mag_vec_time_derivative_nT_s,
                          bdot_.time_derivative_variables.mag_vec_after_nT,
                          bdot_.time_derivative_variables.mag_vec_before_nT,
                          OBCT_get_total_cycle_in_sec(&(bdot_.time_derivative_variables.current_obc_time)),
                          OBCT_get_total_cycle_in_sec(&(bdot_.time_derivative_variables.previous_obc_time)));

  bdot_.time_derivative_variables.previous_obc_time = bdot_.time_derivative_variables.current_obc_time;
  VECTOR3_copy(bdot_.time_derivative_variables.mag_vec_before_nT, aocs_manager->mag_vec_est_body_nT);

  return AOCS_ERROR_OK;
}

AOCS_ERROR APP_BDOT_set_control_gain(float* control_gain)
{
  AOCS_ERROR ret = AOCS_ERROR_OK;

  for (int i = 0; i < PHYSICAL_CONST_THREE_DIM; i++)
  {
    if (control_gain[i] > 0.0f) ret = AOCS_ERROR_RANGE_OVER;
    bdot_.control_gain[i] = control_gain[i];
  }

  return ret;
}

CCP_CmdRet Cmd_APP_BDOT_SET_CONTROL_GAIN(const CommonCmdPacket* packet)
{
  const uint8_t* param = CCP_get_param_head(packet);

  float control_gain[PHYSICAL_CONST_THREE_DIM];

  for (int i = 0; i < PHYSICAL_CONST_THREE_DIM; i++)
  {
    ENDIAN_memcpy(&control_gain[i], param + i * sizeof(float), sizeof(float));
    // control_gainのアサーションはB_DOT_set_control_gainで行われるので，ここではアサーションをかけない
  }

  AOCS_ERROR ret;
  ret = APP_BDOT_set_control_gain(control_gain);

  if (ret != AOCS_ERROR_OK)
  {
    return CCP_make_cmd_ret_without_err_code(CCP_EXEC_ILLEGAL_PARAMETER);
  }

  return CCP_make_cmd_ret_without_err_code(CCP_EXEC_SUCCESS);
}

CCP_CmdRet Cmd_APP_BDOT_SET_TIMING(const CommonCmdPacket* packet)
{
  const uint8_t* param = CCP_get_param_head(packet);

  uint32_t minimum_time_derivative_step_ms = CCP_get_param_from_packet(packet, 0, uint32_t);
  bdot_.minimum_time_derivative_step_ms = minimum_time_derivative_step_ms;

  return CCP_make_cmd_ret_without_err_code(CCP_EXEC_SUCCESS);
}

#pragma section
