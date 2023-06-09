/**
 * @file   gps_time.c
 * @brief  GPS時刻構造体と定数の定義
 */

#include "gps_time.h"


GPS_TIME_OF_WEEK GPS_TIME_OF_WEEK_create_gps_time(const uint16_t week_number, const uint32_t msec_of_week)
{
  GPS_TIME_OF_WEEK gps_time;
  gps_time.week_number  = week_number;
  gps_time.msec_of_week = msec_of_week;

  return gps_time;
}
