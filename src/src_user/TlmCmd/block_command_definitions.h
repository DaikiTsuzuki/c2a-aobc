/**
 * @file
 * @brief  ブロックコマンド定義
 * @note   このコードは自動生成されています！
 */
#ifndef BLOCK_COMMAND_DEFINITIONS_H_
#define BLOCK_COMMAND_DEFINITIONS_H_

// 登録されるBlockCommandTableのblock番号を規定
typedef enum
{

  // Block Cmds for Mode Transition (シーケンスリスト)
  // ./src_user/Settings/Modes/Transitions/ で定義
  BC_SL_START_UP_TO_INITIAL = 0,
  BC_SL_INITIAL_TO_BDOT = 1,
  BC_SL_NOP  = 2,
  BC_SL_BDOT_TO_ROUGH_SUN_POINTING = 3,
  BC_SL_ROUGH_SUN_POINTING_TO_ROUGH_THREE_AXIS = 4,
  BC_SL_ROUGH_THREE_AXIS_TO_ROUGH_THREE_AXIS_RW = 5,
  BC_SL_ROUGH_THREE_AXIS_RW_TO_FINE_THREE_AXIS = 6,
  BC_SL_ANY_TO_BDOT = 7,
  BC_SL_BDOT_TO_INITIAL = 8,

  // Block Cmds for TaskList (タスクリスト)
  // ./src_user/Settings/Modes/TaskLists/ で定義
  BC_TL_START_UP = 10,
  BC_TL_INITIAL = 11,
  BC_TL_BDOT = 12,
  BC_TL_ROUGH_SUN_POINTING = 13,
  BC_TL_ROUGH_THREE_AXIS = 14,
  BC_TL_ROUGH_THREE_AXIS_RW = 15,
  BC_TL_FINE_THREE_AXIS = 16,
  BC_TL_GPSR_RANGE_OBSERVE = 17,

  // Block Cmds for Composition (App Rotator, Combiner)
  // ./src_user/Settings/Modes/TaskLists/Elements/ で定義
  // BC_AR_DEBUG_DISPLAY_INI
  // BC_AR_DEBUG_DISPLAY_MINIMUM
  // BC_AR_DRIVERS_UPDATE_INI
  BC_AC_CDH_UPDATE = 19,
  BC_AC_INERTIAL_REF_UPDATE = 20,
  BC_AC_SUN_VECTOR_UPDATE = 21,
  BC_AC_MTQ_UPDATE = 22,
  BC_AC_BASIC_SENSOR_UPDATE = 23,
  BC_AC_RW_UPDATE = 24,
  BC_AC_RM3100_UPDATE = 25,
  BC_AC_STIM210_UPDATE = 26,
  BC_AC_OEM7600_UPDATE = 27,
  BC_AC_STT_UPDATE = 28,

  // ==== 各系領域 ====
  // ./C2A/TlmCmd/NormalBlockCommandDefinition/で定義
  // イベントハンドラはBC_EH_など，接頭辞を適切につけること！

  // AOCS
  BC_STT_SYNCHRONOUS_TLM = 29,
  BC_HK_CYCLIC_TLM = 30,
  BC_SELECT_RM3100_ON_AOBC = 31,
  BC_SELECT_RM3100_EXTERNAL = 32,
  BC_SET_SAGITTA_PARAMETER = 33,
  BC_READ_SAGITTA_PARAMETER = 34,

  // POWER
  BC_POWER_ON_MPU9250 = 35,
  BC_POWER_ON_RM3100 = 36,
  BC_POWER_ON_NANOSSOC_D60 = 37,
  BC_POWER_ON_STIM210 = 38,
  BC_POWER_ON_SAGITTA = 39,
  BC_POWER_ON_OEM7600 = 40,
  BC_POWER_ON_MTQ = 41,
  BC_POWER_ON_RWX = 42,
  BC_POWER_ON_RWY = 43,
  BC_POWER_ON_RWZ = 44,
  BC_POWER_ON_INA260 = 45,
  BC_SET_INA260_OC_LIMIT = 46,
  BC_POWER_OFF_MPU9250 = 47,
  BC_POWER_OFF_RM3100 = 48,
  BC_POWER_OFF_NANOSSOC_D60 = 49,
  BC_POWER_OFF_STIM210 = 50,
  BC_POWER_OFF_SAGITTA = 51,
  BC_POWER_OFF_OEM7600 = 52,
  BC_POWER_OFF_MTQ = 53,
  BC_POWER_OFF_RWX = 54,
  BC_POWER_OFF_RWY = 55,
  BC_POWER_OFF_RWZ = 56,
  BC_POWER_OFF_INA260 = 57,
  BC_RESET_MPU9250 = 58,
  BC_RESET_RM3100 = 59,
  BC_RESET_NANOSSOC_D60 = 60,
  BC_RESET_STIM210 = 61,
  BC_RESET_SAGITTA = 62,
  BC_RESET_OEM7600 = 63,
  BC_RESET_MTQ = 64,
  BC_RESET_RWX = 65,
  BC_RESET_RWY = 66,
  BC_RESET_RWZ = 67,
  BC_RESET_INA260 = 68,

  // Anomaly
  BC_ACTIVATE_INA260_EH = 70,
  BC_ACTIVATE_NANOSSOC_D60_EH = 71,
  BC_INACTIVATE_NANOSSOC_D60_EH = 72,
  BC_ACTIVATE_STIM210_EL_EH = 73,
  BC_INACTIVATE_STIM210_EL_EH = 74,
  BC_ACTIVATE_SAGITTA_EL_EH = 75,
  BC_INACTIVATE_SAGITTA_EL_EH = 76,
  BC_ACTIVATE_OEM7600_EL_EH = 77,
  BC_INACTIVATE_OEM7600_EL_EH = 78,

  // ==== 地上からupする“のみ”領域 ====
  // C2Aでは使用しない
  // ADCS:

  // others 全体のテレメとかを登録
  // システム試験TLM:

  // BCT MAX : 80

  BC_ID_MAX    // BCT 自体のサイズは BCT_MAX_BLOCKS で規定
} BC_DEFAULT_ID;

void BC_load_defaults(void);

#endif
