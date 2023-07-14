/**
 * @file
 * @brief  テレメトリ定義
 * @note   このコードは自動生成されています！
 */
#ifndef TELEMETRY_DEFINITIONS_H_
#define TELEMETRY_DEFINITIONS_H_

typedef enum
{
  Tlm_CODE_AOBC_OBC = 0x90,
  Tlm_CODE_AOBC_TL = 0x91,
  Tlm_CODE_AOBC_BL = 0x92,
  Tlm_CODE_AOBC_CA = 0x93,
  Tlm_CODE_AOBC_TF = 0x94,
  Tlm_CODE_AOBC_DCU = 0x95,
  Tlm_CODE_AOBC_MM = 0x97,
  Tlm_CODE_AOBC_AM = 0x98,
  Tlm_CODE_AOBC_APP_TIME = 0x99,
  Tlm_CODE_AOBC_EL = 0x9a,
  Tlm_CODE_AOBC_EL_TLOG = 0x9b,
  Tlm_CODE_AOBC_EL_CLOG = 0x9c,
  Tlm_CODE_AOBC_EH = 0x9d,
  Tlm_CODE_AOBC_EH_RULE = 0x9e,
  Tlm_CODE_AOBC_EH_LOG = 0x9f,
  Tlm_CODE_AOBC_EH_INDEX = 0xa0,
  Tlm_CODE_AOBC_GIT_REV = 0xa1,
  Tlm_CODE_AOBC_HK_GEN = 0xb0,
  Tlm_CODE_AOBC_HK_COMPO = 0xb1,
  Tlm_CODE_AOBC_HK_ALGO = 0xb2,
  Tlm_CODE_AOBC_COMPONENTS = 0xb3,
  Tlm_CODE_AOBC_POWER = 0xb4,
  Tlm_CODE_AOBC_FRAME_TRANSFORMATION = 0xb5,
  Tlm_CODE_AOBC_CONTROL = 0xb6,
  Tlm_CODE_AOBC_BIAS = 0xb7,
  Tlm_CODE_AOBC_TEMP_CALIB = 0xb8,
  Tlm_CODE_AOBC_TARGET_QUATERNION1 = 0xb9,
  Tlm_CODE_AOBC_TARGET_QUATERNION2 = 0xba,
  Tlm_CODE_AOBC_NON_VOLATILE = 0xbb,
  Tlm_CODE_AOBC_ORBIT = 0xbc,
  Tlm_CODE_AOBC_AOCS_MANAGER = 0xbd,
  Tlm_CODE_AOBC_SUN_POINTING = 0xbe,
  Tlm_CODE_AOBC_THREE_AXIS_MTQ = 0xbf,
  Tlm_CODE_AOBC_THREE_AXIS_RW = 0xc0,
  Tlm_CODE_AOBC_FILTERS = 0xc1,
  Tlm_CODE_AOBC_ANOMALY = 0xc2,
  Tlm_CODE_AOBC_APP_TIME_2 = 0xc3,
  Tlm_CODE_AOBC_SAGITTA_SET1 = 0xc4,
  Tlm_CODE_AOBC_SAGITTA_SET2 = 0xc5,
  Tlm_CODE_AOBC_SAGITTA_READ1 = 0xc6,
  Tlm_CODE_AOBC_SAGITTA_READ2 = 0xc7,
  Tlm_CODE_AOBC_ATTITUDE_DETERMINATION1 = 0xc8,
  Tlm_CODE_AOBC_ATTITUDE_DETERMINATION2 = 0xc9,
  Tlm_CODE_AOBC_GPSR_RANGE_P1 = 0xca,
  Tlm_CODE_AOBC_GPSR_RANGE_P2 = 0xcb,
  Tlm_CODE_AOBC_ORBIT2 = 0xcc,
  Tlm_CODE_AOBC_FILTERS_2 = 0xcd,
  Tlm_CODE_AOBC_DR_ALGORITHM = 0xce,
  Tlm_CODE_AOBC_DEBUG = 0xcf,

  TLM_CODE_MAX
} TLM_CODE;

#endif
