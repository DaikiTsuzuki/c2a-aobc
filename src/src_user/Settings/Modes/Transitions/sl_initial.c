/**
* @file   sl_initial.c
* @brief  初期モードのシーケンスリスト
*/
#pragma section REPRO
#include "sl_initial.h"

#include <src_user/TlmCmd/block_command_definitions.h>
#include <src_user/TlmCmd/command_definitions.h>
#include <src_user/Applications/UserDefined/Power/power_switch_control.h>
#include <src_user/Applications/DriverInstances/di_ina260.h>
#include <src_user/Applications/UserDefined/AOCS/aocs_manager.h>

#include <src_core/Applications/timeline_command_dispatcher_id_define.h>
#include <src_core/TlmCmd/block_command_loader.h>
#include <src_core/System/TimeManager/obc_time.h>

void BCL_load_start_up_to_initial(void)
{
	cycle_t bc_cycle = OBCT_sec2cycle(1);
	// 自動モード遷移OFF
	BCL_tool_prepare_param_uint8(0);
	BCL_tool_register_cmd(bc_cycle, Cmd_CODE_APP_AOCS_MM_SET_AUTO_MODE_TRANSITION);
	bc_cycle++;


	// HK出力開始
	BCL_tool_register_deploy(bc_cycle, BC_HK_CYCLIC_TLM, TLCD_ID_DEPLOY_TLM);
	bc_cycle += OBCT_sec2cycle(1);

	// INA ON
	BCL_tool_register_deploy(bc_cycle, BC_POWER_ON_INA260, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(5);

	// INA set over current Limit
	BCL_tool_register_deploy(bc_cycle, BC_SET_INA260_OC_LIMIT, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(5);


	// MPU9250 ON
	BCL_tool_register_deploy(bc_cycle, BC_POWER_ON_MPU9250, TLCD_ID_DEPLOY_BC); // 5.5sec
	bc_cycle += OBCT_sec2cycle(7);

	// RM3100 ON
	BCL_tool_register_deploy(bc_cycle, BC_POWER_ON_RM3100, TLCD_ID_DEPLOY_BC); // 8.5sec
	bc_cycle += OBCT_sec2cycle(10);

	// MTQ ON
	BCL_tool_register_deploy(bc_cycle, BC_POWER_ON_MTQ, TLCD_ID_DEPLOY_BC); // 4.5sec
	bc_cycle += OBCT_sec2cycle(5);

	// NanoSSOC-D60 ON
	BCL_tool_register_deploy(bc_cycle, BC_POWER_ON_NANOSSOC_D60, TLCD_ID_DEPLOY_BC); // 6.5sec
	bc_cycle += OBCT_sec2cycle(10);


	uint32_t timing_sec = bc_cycle;

	// STT ON
	BCL_tool_prepare_param_uint8(TLCD_ID_DEPLOY_BC);
	BCL_tool_prepare_param_uint16(BC_POWER_ON_SAGITTA);
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_TLCD_DEPLOY_BLOCK); // 34.5sec
	timing_sec += 35;


	// RW X ON
	timing_sec++;
	BCL_tool_prepare_param_uint8(TLCD_ID_DEPLOY_BC);
	BCL_tool_prepare_param_uint16(BC_POWER_ON_RWX);
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_TLCD_DEPLOY_BLOCK);

	// RW Y ON
	timing_sec += 10;
	BCL_tool_prepare_param_uint8(TLCD_ID_DEPLOY_BC);
	BCL_tool_prepare_param_uint16(BC_POWER_ON_RWY);
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_TLCD_DEPLOY_BLOCK);

	// RW Z ON
	timing_sec += 10;
	BCL_tool_prepare_param_uint8(TLCD_ID_DEPLOY_BC);
	BCL_tool_prepare_param_uint16(BC_POWER_ON_RWZ);
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_TLCD_DEPLOY_BLOCK);

	// STIM ON
	BCL_tool_prepare_param_uint8(TLCD_ID_DEPLOY_BC);
	BCL_tool_prepare_param_uint16(BC_POWER_ON_STIM210);
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_TLCD_DEPLOY_BLOCK); // 14sec
	timing_sec += 14;


	// モード遷移完了
	BCL_tool_register_cmd(OBCT_sec2cycle(timing_sec), Cmd_CODE_MM_FINISH_TRANSITION);
}

void BCL_load_bdot_to_initial(void)
{
	cycle_t bc_cycle = OBCT_sec2cycle(1);

	// MTQ OFF
	BCL_tool_register_deploy(bc_cycle, BC_POWER_OFF_MTQ, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(3);

	// INA Reset
	BCL_tool_register_deploy(bc_cycle, BC_RESET_INA260, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(5);

	// MPU9250 reset
	BCL_tool_register_deploy(bc_cycle, BC_RESET_MPU9250, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(15);

	// RM3100 reset
	BCL_tool_register_deploy(bc_cycle, BC_RESET_RM3100, TLCD_ID_DEPLOY_BC);
	bc_cycle += OBCT_sec2cycle(18);
	BCL_tool_register_cmd(bc_cycle, Cmd_CODE_MM_FINISH_TRANSITION);
}

#pragma section