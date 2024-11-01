/* 
 * File:   common.h
 * Author: ousmane
 *
 * Created on October 5, 2024, 6:01 PM
 */

#ifndef COMMON_H
#define	COMMON_H

typedef enum {
    MODE_OFF,
    MODE_CW,
    MODE_EXT_TTL,
    MODE_EXT_ANA, 
    MODE_SQUARE_SEQ
}ChannelMode;

typedef enum {
    TRIG_MODE_MANUAL,
    TRIG_INPUT_BNC,
    GATED_INPUT_BNC
}TriggerMode;

typedef enum {
    CURRENT_MODE_NORMAL,
    CURRENT_MODE_LOWPOWER,
    CURRENT_MODE_OVERDRIVE
}CurrentMode;

typedef enum {
    ON,
    OFF
}TTLOutput;

typedef enum {
    YES,
    NO
}REPEATABLE;

typedef enum {
    START_ALL,
    STOP_ALL
}START_STOP_ALL;

typedef enum {
    START_LED,
    STOP_LED
}START_STOP_CHANNEL_LED;

#define CH_MODE_ID                  0x001
#define CURRENT_MODE_ID             0x002
#define TRIGGER_TYPE_ID             0x003
#define OUTPUT_STATE_ID             0x004
#define REPEAT_ID                   0x005
#define START_STOP_ALL_ID           0x006
#define START_STOP_CHANNEL_LED_ID   0x007

#endif	/* COMMON_H */

