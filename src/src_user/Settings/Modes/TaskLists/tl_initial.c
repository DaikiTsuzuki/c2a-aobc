/**
* @file   tl_initial.c
* @brief  初期モードのタスクリスト
*/
#pragma section REPRO
#include "tl_initial.h"

#include <src_user/Applications/app_registry.h>
#include <src_user/TlmCmd/block_command_definitions.h>

#include <src_core/TlmCmd/block_command_loader.h>

void BCL_load_initial_mode(void)
{
	// CDH必須アプリ
	BCL_tool_register_combine(0, BC_AC_CDH_UPDATE); // 23step以上

	// AOCS必須アプリ
	BCL_tool_register_combine(25, BC_AC_BASIC_SENSOR_UPDATE);  // 7step以上
	BCL_tool_register_app(35, AR_APP_AOCS_MM_FINE_THREE_AXIS); // 1step以上

	// 精三軸制御アプリ
	BCL_tool_register_combine(36, BC_AC_RM3100_UPDATE); // 4step以上

	BCL_tool_register_combine(41, BC_AC_STIM210_UPDATE); // 1step以上

	BCL_tool_register_combine(45, BC_AC_MTQ_UPDATE);  // 1step以上, MTQ駆動時間カウンタを20 [Hz]周期にするため入れている

	BCL_tool_register_combine(47, BC_AC_SUN_VECTOR_UPDATE); // 合計4step以上必要ある？
	BCL_tool_register_combine(51, BC_AC_INERTIAL_REF_UPDATE); // 11step以上

	BCL_tool_register_combine(63, BC_AC_STT_UPDATE); // 4step以上
	BCL_tool_register_app(68, AR_APP_FINE_THREE_AXIS_DETERMINATION); // 1step以上

	BCL_tool_register_combine(75, BC_AC_OEM7600_UPDATE); // 1step以上

	BCL_tool_register_app(80, AR_APP_THREE_AXIS_CONTROL_RW); // 1step以上
	BCL_tool_register_app(84, AR_APP_UNLOADING); // 1step以上

	BCL_tool_register_combine(85, BC_AC_RW_UPDATE); // 10step以上
	BCL_tool_register_combine(95, BC_AC_MTQ_UPDATE); // 1step以上
}

#pragma section