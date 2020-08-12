#pragma once

#include "defines.h"

//////////////////////////////////////////////////////////////////////////////
// sensor types

//////////////////////////////////////////////////////////////////////////////
// HIL_MODE                                 OPTIONAL


#ifndef FLIPPER_1_SERVO
	#define FLIPPER_1_SERV0 8
#endif

#ifndef FLIPPER_2_SERVO
	#define FLIPPER_2_SERVO 4
#endif

#ifndef SPEED_MODE
  #define SPEED_MODE 1
#endif

#ifndef SPEED_LOW_THR
  #define SPEED_LOW_THR 30
#endif


#ifndef HIL_MODE
  #define HIL_MODE HIL_MODE_DISABLED
#endif

#ifndef MAV_SYSTEM_ID
  #define MAV_SYSTEM_ID    1
#endif

#ifndef ARM_DELAY_MS
  #define ARM_DELAY_MS  2000
#endif

//////////////////////////////////////////////////////////////////////////////
// FrSky telemetry support
//

#ifndef FRSKY_TELEM_ENABLED
  #define FRSKY_TELEM_ENABLED ENABLED
#endif


#ifndef CH7_OPTION
  #define CH7_OPTION CH7_SAVE_WP
#endif

//////////////////////////////////////////////////////////////////////////////
// MODE
// MODE_CHANNEL
//
#ifndef MODE_CHANNEL
  #define MODE_CHANNEL    8
#endif
#if (MODE_CHANNEL != 5) && (MODE_CHANNEL != 6) && (MODE_CHANNEL != 7) && (MODE_CHANNEL != 8)
  #error XXX
  #error XXX You must set MODE_CHANNEL to 5, 6, 7 or 8
  #error XXX
#endif


//////////////////////////////////////////////////////////////////////////////
//  VISUAL ODOMETRY
#ifndef VISUAL_ODOMETRY_ENABLED
# define VISUAL_ODOMETRY_ENABLED ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
// STARTUP BEHAVIOUR
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// GROUND_START_DELAY
//
#ifndef GROUND_START_DELAY
  #define GROUND_START_DELAY    0
#endif

//////////////////////////////////////////////////////////////////////////////
// MOUNT (ANTENNA OR CAMERA)
//
#ifndef MOUNT
  #define MOUNT ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
// CAMERA control
//
#ifndef CAMERA
  #define CAMERA ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
// GRIPPER control
//
#ifndef GRIPPER_ENABLED
 # define GRIPPER_ENABLED ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
// RALLY POINTS
//
#ifndef AP_RALLY
 #define AP_RALLY ENABLED
#endif

//////////////////////////////////////////////////////////////////////////////
// NAVL1
//
#ifndef NAVL1
  #define NAVL1_PERIOD    8
#endif

//////////////////////////////////////////////////////////////////////////////
// CRUISE_SPEED default
//
#ifndef CRUISE_SPEED
  #define CRUISE_SPEED    2  // in m/s
#endif

//////////////////////////////////////////////////////////////////////////////
// Logging control
//
#ifndef LOGGING_ENABLED
  #define LOGGING_ENABLED ENABLED
#endif

#define DEFAULT_LOG_BITMASK    0xffff


//////////////////////////////////////////////////////////////////////////////
// Developer Items
//

// if RESET_SWITCH_CH is not zero, then this is the PWM value on
// that channel where we reset the control mode to the current switch
// position (to for example return to switched mode after failsafe or
// fence breach)
#ifndef RESET_SWITCH_CHAN_PWM
  #define RESET_SWITCH_CHAN_PWM    1750
#endif

#ifndef ADVANCED_FAILSAFE
  #define ADVANCED_FAILSAFE DISABLED
#endif

#ifndef STATS_ENABLED
 # define STATS_ENABLED ENABLED
#endif

#ifndef OSD_ENABLED
 #define OSD_ENABLED DISABLED
#endif

