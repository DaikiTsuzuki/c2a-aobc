/**
 * @file
 * @brief  コマンド定義
 * @note   このコードは自動生成されています！
 */
#ifndef COMMAND_DEFINITIONS_H_
#define COMMAND_DEFINITIONS_H_

typedef enum
{
  Cmd_CODE_NOP = 0x0000,
  Cmd_CODE_TMGR_SET_TIME = 0x0001,
  Cmd_CODE_AM_REGISTER_APP = 0x0002,
  Cmd_CODE_AM_INITIALIZE_APP = 0x0003,
  Cmd_CODE_AM_EXECUTE_APP = 0x0004,
  Cmd_CODE_AM_SET_PAGE_FOR_TLM = 0x0005,
  Cmd_CODE_AM_CLEAR_APP_INFO = 0x0006,
  Cmd_CODE_MM_SET_MODE_LIST = 0x0007,
  Cmd_CODE_MM_SET_TRANSITION_TABLE = 0x0008,
  Cmd_CODE_MM_START_TRANSITION = 0x0009,
  Cmd_CODE_MM_FINISH_TRANSITION = 0x000A,
  Cmd_CODE_TDSP_SET_TASK_LIST = 0x000B,
  Cmd_CODE_TLCD_CLEAR_ALL_TIMELINE = 0x000C,
  Cmd_CODE_TLCD_CLEAR_TIMELINE_AT = 0x000D,
  Cmd_CODE_TLCD_DEPLOY_BLOCK = 0x000E,
  Cmd_CODE_TLCD_CLEAR_ERR_LOG = 0x000F,
  Cmd_CODE_TLCD_SET_SOE_FLAG = 0x0010,
  Cmd_CODE_TLCD_SET_LOUT_FLAG = 0x0011,
  Cmd_CODE_TLCD_SET_ID_FOR_TLM = 0x0012,
  Cmd_CODE_TLCD_SET_PAGE_FOR_TLM = 0x0013,
  Cmd_CODE_GENERATE_TLM = 0x0014,
  Cmd_CODE_TG_GENERATE_TLM = 0x0015,
  Cmd_CODE_TG_GENERATE_HP_TLM = 0x0016,
  Cmd_CODE_TG_GENERATE_RT_TLM = 0x0017,
  Cmd_CODE_TG_GENERATE_ST_TLM = 0x0018,
  Cmd_CODE_BCT_CLEAR_BLOCK = 0x0019,
  Cmd_CODE_BCT_SET_BLOCK_POSITION = 0x001A,
  Cmd_CODE_BCT_COPY_BCT = 0x001B,
  Cmd_CODE_BCT_OVERWRITE_CMD = 0x001C,
  Cmd_CODE_BCT_FILL_NOP = 0x001D,
  Cmd_CODE_BCE_ACTIVATE_BLOCK = 0x001E,
  Cmd_CODE_BCE_ACTIVATE_BLOCK_BY_ID = 0x001F,
  Cmd_CODE_BCE_INACTIVATE_BLOCK_BY_ID = 0x0020,
  Cmd_CODE_BCE_ROTATE_BLOCK = 0x0021,
  Cmd_CODE_BCE_COMBINE_BLOCK = 0x0022,
  Cmd_CODE_BCE_TIMELIMIT_COMBINE_BLOCK = 0x0023,
  Cmd_CODE_BCE_RESET_ROTATOR_INFO = 0x0024,
  Cmd_CODE_BCE_RESET_COMBINER_INFO = 0x0025,
  Cmd_CODE_BCE_SET_ROTATE_INTERVAL = 0x0026,
  Cmd_CODE_EL_INIT = 0x0027,
  Cmd_CODE_EL_CLEAR_LOG_ALL = 0x0028,
  Cmd_CODE_EL_CLEAR_LOG_BY_ERR_LEVEL = 0x0029,
  Cmd_CODE_EL_CLEAR_STATISTICS = 0x002A,
  Cmd_CODE_EL_CLEAR_TLOG = 0x002B,
  Cmd_CODE_EL_CLEAR_CLOG = 0x002C,
  Cmd_CODE_EL_RECORD_EVENT = 0x002D,
  Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM = 0x002E,
  Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM = 0x002F,
  Cmd_CODE_EL_INIT_LOGGING_SETTINGS = 0x0030,
  Cmd_CODE_EL_ENABLE_LOGGING = 0x0031,
  Cmd_CODE_EL_DISABLE_LOGGING = 0x0032,
  Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE = 0x0033,
  Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE = 0x0034,
  Cmd_CODE_EH_INIT = 0x0035,
  Cmd_CODE_EH_CLEAR_ALL_RULE = 0x0036,
  Cmd_CODE_EH_LOAD_DEFAULT_RULE = 0x0037,
  Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM = 0x0038,
  Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM = 0x0039,
  Cmd_CODE_EH_REGISTER_RULE = 0x003A,
  Cmd_CODE_EH_DELETE_RULE = 0x003B,
  Cmd_CODE_EH_INIT_RULE = 0x003C,
  Cmd_CODE_EH_INIT_RULE_FOR_MULTI_LEVEL = 0x003D,
  Cmd_CODE_EH_ACTIVATE_RULE = 0x003E,
  Cmd_CODE_EH_INACTIVATE_RULE = 0x003F,
  Cmd_CODE_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0040,
  Cmd_CODE_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0041,
  Cmd_CODE_EH_SET_RULE_COUNTER = 0x0042,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER = 0x0043,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT = 0x0044,
  Cmd_CODE_EH_CLEAR_LOG = 0x0045,
  Cmd_CODE_EH_SET_MAX_RESPONSE_NUM = 0x0046,
  Cmd_CODE_EH_SET_MAX_CHECK_EVENT_NUM = 0x0047,
  Cmd_CODE_EH_SET_MAX_MULTI_LEVEL_NUM = 0x0048,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM = 0x0049,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM = 0x004A,
  Cmd_CODE_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM = 0x004B,
  Cmd_CODE_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM = 0x004C,
  Cmd_CODE_EH_MATCH_EVENT_COUNTER_TO_EL = 0x004D,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP = 0x004E,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x004F,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP = 0x0050,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP = 0x0051,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0052,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0053,
  Cmd_CODE_EVENT_UTIL_ENABLE_EH_EXEC = 0x0054,
  Cmd_CODE_EVENT_UTIL_DISABLE_EH_EXEC = 0x0055,
  Cmd_CODE_EVENT_UTIL_EXEC_EH = 0x0056,
  Cmd_CODE_TF_INIT = 0x0057,
  Cmd_CODE_CA_INIT = 0x0058,
  Cmd_CODE_TF_REGISTER_TLM = 0x0059,
  Cmd_CODE_CA_REGISTER_CMD = 0x005A,
  Cmd_CODE_TF_SET_PAGE_FOR_TLM = 0x005B,
  Cmd_CODE_CA_SET_PAGE_FOR_TLM = 0x005C,
  Cmd_CODE_GSCD_CLEAR_ERR_LOG = 0x005D,
  Cmd_CODE_RTCD_CLEAR_ERR_LOG = 0x005E,
  Cmd_CODE_DCU_ABORT_CMD = 0x005F,
  Cmd_CODE_DCU_DOWN_ABORT_FLAG = 0x0060,
  Cmd_CODE_DCU_CLEAR_LOG = 0x0061,
  Cmd_CODE_DI_FM25V10_WRITE_BYTE = 0x0064,
  Cmd_CODE_DI_FM25V10_READ_BYTE = 0x0065,
  Cmd_CODE_DI_FM25V10_MANAGE_STATUS = 0x0066,
  Cmd_CODE_APP_NVM_MANAGER_WRITE_BYTES = 0x0067,
  Cmd_CODE_APP_NVM_MANAGER_READ_BYTES = 0x0068,
  Cmd_CODE_APP_NVM_PARTITION_WRITE_BYTES = 0x0069,
  Cmd_CODE_APP_NVM_PARTITION_READ_BYTES = 0x006A,
  Cmd_CODE_APP_AOCS_DR_SET_WRITE = 0x006B,
  Cmd_CODE_APP_AOCS_DR_READ = 0x006C,
  Cmd_CODE_APP_PSC_CONTROL_5V_PORT = 0x006E,
  Cmd_CODE_APP_PSC_CONTROL_UNREG_PORT = 0x006F,
  Cmd_CODE_DI_INA260_INIT = 0x0070,
  Cmd_CODE_DI_INA260_SET_OVER_CURRENT_PROTECTION = 0x0071,
  Cmd_CODE_APP_CURRENT_ANOMALY_SET_HW_OC_EL_THRESHOLD = 0x0072,
  Cmd_CODE_APP_CURRENT_ANOMALY_SET_SW_OVER_CURRENT_PROTECTION = 0x0073,
  Cmd_CODE_DI_RM3100_INIT = 0x0076,
  Cmd_CODE_DI_MPU9250_INIT = 0x0077,
  Cmd_CODE_DI_MTQ_SEIREN_OUTPUT = 0x0078,
  Cmd_CODE_DI_STIM210_INIT = 0x0079,
  Cmd_CODE_DI_STIM210_SET_MODE = 0x007A,
  Cmd_CODE_DI_STIM210_SET_NORMAL_MODE_FORMAT = 0x007B,
  Cmd_CODE_DI_STIM210_SET_GYRO_OUTPUT = 0x007C,
  Cmd_CODE_DI_STIM210_SET_SAMPLE_RATE = 0x007D,
  Cmd_CODE_DI_STIM210_SET_TERMINATION_MODE = 0x007E,
  Cmd_CODE_DI_STIM210_SET_LOW_PASS_FILTER = 0x007F,
  Cmd_CODE_DI_OEM7600_ONOFF_ANTENNA_POWER = 0x0080,
  Cmd_CODE_DI_OEM7600_SOFTWARE_RESET = 0x0081,
  Cmd_CODE_DI_OEM7600_SET_TLM_CONTENTS = 0x0082,
  Cmd_CODE_DI_OEM7600_SET_RESET_GPIO_HIGHLOW = 0x0083,
  Cmd_CODE_DI_RW0003_INIT = 0x0084,
  Cmd_CODE_DI_RW0003_SET_IDLE = 0x0085,
  Cmd_CODE_DI_RW0003_DRIVE_TORQUE = 0x0086,
  Cmd_CODE_DI_RW0003_DRIVE_SPEED = 0x0087,
  Cmd_CODE_DI_SAGITTA_BOOT = 0x0088,
  Cmd_CODE_DI_SAGITTA_SET_UNIX_TIME_US = 0x0089,
  Cmd_CODE_DI_SAGITTA_SET_PARAMETER = 0x008A,
  Cmd_CODE_DI_SAGITTA_CHANGE_PARAMETER = 0x008B,
  Cmd_CODE_DI_SAGITTA_READ_PARAMETER = 0x008C,
  Cmd_CODE_DI_RM3100_SET_FRAME_TRANSFORMATION_QUATERNION_C2B = 0x008D,
  Cmd_CODE_DI_MPU9250_SET_FRAME_TRANSFORMATION_QUATERNION_C2B = 0x008E,
  Cmd_CODE_DI_NANOSSOC_D60_SET_FRAME_TRANSFORMATION_QUATERNION_C2B = 0x008F,
  Cmd_CODE_DI_STIM210_SET_FRAME_TRANSFORMATION_QUATERNION_C2B = 0x0090,
  Cmd_CODE_DI_SAGITTA_SET_FRAME_TRANSFORMATION_QUATERNION_C2B = 0x0091,
  Cmd_CODE_DI_RW0003_SET_ROTATION_DIRECTION_VECTOR = 0x0092,
  Cmd_CODE_DI_MTQ_SEIREN_SET_MAGNETIC_MOMENT_DIRECTION_VECTOR = 0x0093,
  Cmd_CODE_DI_MPU9250_SET_ANG_VEL_BIAS_COMPO_RAD_S = 0x0094,
  Cmd_CODE_DI_MPU9250_SET_MAG_BIAS_COMPO_NT = 0x0095,
  Cmd_CODE_DI_RM3100_SET_MAG_BIAS_COMPO_NT = 0x0096,
  Cmd_CODE_DI_STIM210_SET_ANG_VEL_BIAS_COMPO_RAD_S = 0x0097,
  Cmd_CODE_DI_MPU9250_SET_ANG_VEL_BIAS_TEMP_CALIB = 0x0098,
  Cmd_CODE_DI_MPU9250_SET_ANG_VEL_SF_TEMP_CALIB = 0x0099,
  Cmd_CODE_DI_STIM210_SET_ANG_VEL_BIAS_TEMP_CALIB = 0x009A,
  Cmd_CODE_DI_STIM210_SET_ANG_VEL_SF_TEMP_CALIB = 0x009B,
  Cmd_CODE_APP_MAG_SELECTOR_SET_STATE = 0x009C,
  Cmd_CODE_APP_GYRO_SELECTOR_SET_STATE = 0x009D,
  Cmd_CODE_SUN_SENSOR_SELECTOR_SET_INTENSITY_THRESHOLD = 0x009E,
  Cmd_CODE_APP_TEMPERATURE_ANOMALY_SET_THRESHOLD = 0x009F,
  Cmd_CODE_APP_MAGNETIC_EXCLUSIVE_CONTROL_TIMER_SET_ENABLE = 0x00A0,
  Cmd_CODE_APP_MAGNETIC_EXCLUSIVE_CONTROL_TIMER_SET_DURATION = 0x00A1,
  Cmd_CODE_APP_MTQ_SEIREN_CONTROLLER_SET_OUTPUT_RATIO = 0x00A2,
  Cmd_CODE_APP_MPU9250_FILTER_SET_ZFILTER_PARAM = 0x00A3,
  Cmd_CODE_APP_MPU9250_FILTER_SET_SPIKE_FILTER_PARAM = 0x00A4,
  Cmd_CODE_APP_STIM210_FILTER_SET_ZFILTER_PARAM = 0x00A5,
  Cmd_CODE_APP_STIM210_FILTER_SET_SPIKE_FILTER_PARAM = 0x00A6,
  Cmd_CODE_APP_RM3100_FILTER_SET_ZFILTER_PARAM = 0x00A7,
  Cmd_CODE_APP_RM3100_FILTER_SET_SPIKE_FILTER_PARAM = 0x00A8,
  Cmd_CODE_APP_RW0003_FILTER_SET_SPIKE_FILTER_PARAM = 0x00A9,
  Cmd_CODE_APP_OEM7600_FILTER_SET_SPIKE_FILTER_PARAM = 0x00AA,
  Cmd_CODE_APP_SAGITTA_FILTER_SET_SPIKE_FILTER_PARAM = 0x00AB,
  Cmd_CODE_APP_NANOSSOC_D60_FILTER_SET_SPIKE_FILTER_PARAM = 0x00AC,
  Cmd_CODE_APP_AOCS_MM_SET_AUTO_MODE_TRANSITION = 0x00B2,
  Cmd_CODE_APP_AOCS_MM_SET_ANG_VEL_THRESHOLD = 0x00B3,
  Cmd_CODE_APP_AOCS_MM_SET_SUN_ANGLE_THRESHOLD = 0x00B4,
  Cmd_CODE_APP_AOCS_MM_SET_THREE_AXIS_THRESHOLD = 0x00B5,
  Cmd_CODE_APP_AOCS_MM_SET_INVISIBLE_THRESHOLD = 0x00B6,
  Cmd_CODE_APP_RTAD_SET_METHOD = 0x00B7,
  Cmd_CODE_APP_RTAD_SET_QMETHOD_SUN_VEC_WEIGHT = 0x00B8,
  Cmd_CODE_APP_FTAD_SET_METHOD = 0x00B9,
  Cmd_CODE_STT_GYRO_EKF_SET_GYRO_RANDOM_NOISE_STANDARD_DEVIATION = 0x00BA,
  Cmd_CODE_STT_GYRO_EKF_SET_GYRO_RANDOM_WALK_STANDARD_DEVIATION = 0x00BB,
  Cmd_CODE_STT_GYRO_EKF_SET_STT_ERROR_STANDARD_DEVIATION = 0x00BC,
  Cmd_CODE_STT_GYRO_EKF_RESET_ESTIMATION = 0x00BD,
  Cmd_CODE_STT_GYRO_EKF_ENABLE_ESTIMATED_ATTITUDE = 0x00BE,
  Cmd_CODE_STT_GYRO_EKF_SET_INITIAL_COVARIANCE_MATRIX = 0x00BF,
  Cmd_CODE_STT_GYRO_EKF_SET_PROCESS_NOISE_MATRIX = 0x00C0,
  Cmd_CODE_APP_BDOT_SET_CONTROL_GAIN = 0x00C1,
  Cmd_CODE_APP_BDOT_SET_TIMING = 0x00C2,
  Cmd_CODE_APP_SUN_POINTING_SET_GAIN = 0x00C3,
  Cmd_CODE_APP_SUN_POINTING_SAVE_GAIN = 0x00C4,
  Cmd_CODE_APP_SUN_POINTING_SET_FEEDBACK_LIMIT_PARAMS = 0x00C5,
  Cmd_CODE_APP_SUN_POINTING_SET_LPF_PARAMS = 0x00C6,
  Cmd_CODE_APP_SUN_POINTING_SET_ANTI_INTOXICATION_PARAMS = 0x00C7,
  Cmd_CODE_APP_TAC_MTQ_SET_GAIN = 0x00C8,
  Cmd_CODE_APP_TAC_MTQ_SAVE_GAIN = 0x00C9,
  Cmd_CODE_APP_TAC_MTQ_SET_FEEDBACK_LIMIT_PARAMS = 0x00CA,
  Cmd_CODE_APP_TAC_MTQ_SET_LPF_PARAMS = 0x00CB,
  Cmd_CODE_APP_TAC_MTQ_SET_ANTI_INTOXICATION_PARAMS = 0x00CC,
  Cmd_CODE_APP_TAC_RW_SET_GAIN = 0x00CD,
  Cmd_CODE_APP_TAC_RW_SAVE_GAIN = 0x00CE,
  Cmd_CODE_APP_UNLOADING_SET_ENABLE = 0x00CF,
  Cmd_CODE_APP_UNLOADING_SET_ANGULAR_VELOCITY_THRESHOLD = 0x00D0,
  Cmd_CODE_APP_UNLOADING_SET_CONTROL_GAIN = 0x00D1,
  Cmd_CODE_APP_TARGET_ATT_CALC_SET_MODE = 0x00D2,
  Cmd_CODE_APP_TARGET_ATT_CALC_ENABLE = 0x00D3,
  Cmd_CODE_APP_TAFO_SET_MAIN_TARGET_DIRECTION = 0x00D4,
  Cmd_CODE_APP_TAFO_SET_SUB_TARGET_DIRECTION = 0x00D5,
  Cmd_CODE_APP_TAFO_SET_OFFSET_ANGLE_AND_AXIS = 0x00D6,
  Cmd_CODE_APP_TAFO_SET_TARGET_LLA = 0x00D7,
  Cmd_CODE_APP_QI_SET_NEXT_TARGET_QUATERNION = 0x00D8,
  Cmd_CODE_APP_QI_SET_PREV_TARGET_QUATERNION = 0x00D9,
  Cmd_CODE_APP_QI_SET_NEXT_TARGET_QUATERNION_JDAY = 0x00DA,
  Cmd_CODE_APP_QI_RESET_TARGET_QUATERNION = 0x00DB,
  Cmd_CODE_APP_TIME_SPACE_CALC_SET_OFFSET_TIME = 0x00DC,
  Cmd_CODE_APP_AOCS_MANAGER_SET_MASS = 0x00DE,
  Cmd_CODE_APP_AOCS_MANAGER_SET_INERTIA_TENSOR = 0x00DF,
  Cmd_CODE_APP_AOCS_MANAGER_SET_RMM = 0x00E0,
  Cmd_CODE_APP_AOCS_MANAGER_SET_TARGET_QUATERNION = 0x00E1,
  Cmd_CODE_APP_AOCS_MANAGER_SET_TARGET_QUATERNION_FROM_CURRENT_ATTITUDE = 0x00E2,
  Cmd_CODE_APP_AOCS_MANAGER_SET_LIMIT_MANEUVER_ANGLE = 0x00E3,
  Cmd_CODE_APP_AOCS_MANAGER_SET_LIMIT_ANGULAR_VELOCITY = 0x00E4,
  Cmd_CODE_APP_AOCS_MANAGER_SET_REFERENCE_TIME = 0x00E5,
  Cmd_CODE_APP_AOCS_MANAGER_SET_CONSTANT_TORQUE = 0x00E6,
  Cmd_CODE_APP_AOCS_MANAGER_SET_CONSTANT_TORQUE_PERMISSION = 0x00E7,
  Cmd_CODE_APP_AOCS_MANAGER_SET_MAX_IN_TORQUE = 0x00E8,
  Cmd_CODE_APP_AOCS_MANAGER_SET_MAX_EXT_TORQUE = 0x00E9,
  Cmd_CODE_APP_ORBIT_CALC_SET_METHOD = 0x00F1,
  Cmd_CODE_APP_ORBIT_CALC_SET_GPSR_UPDATE = 0x00F2,
  Cmd_CODE_APP_KOP_SET_ORBIT_ELEMENTS = 0x00F3,
  Cmd_CODE_APP_KOP_SAVE_ORBIT_ELEMENTS = 0x00F4,
  Cmd_CODE_APP_SGP4_SET_TLE_LINE1 = 0x00F5,
  Cmd_CODE_APP_SGP4_SET_TLE_LINE2 = 0x00F6,
  Cmd_CODE_APP_SGP4_SAVE_TLE = 0x00F7,
  Cmd_CODE_APP_GPSROP_SET_ORBIT_ELEMENTS_THRESHOLD = 0x00F8,
  Cmd_CODE_APP_SUN_POINTING_SET_TARGET = 0x00F9,
  Cmd_CODE_DI_OEM7600_SET_UART_BAUDRATE = 0x00FA,

  Cmd_CODE_MAX
} CMD_CODE;

#endif
