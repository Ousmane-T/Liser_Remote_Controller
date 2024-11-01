/* 
 * File:   command_ids.h
 * Author: ousmane
 *
 * Created on October 5, 2024, 11:25 AM
 */

#ifndef COMMAND_IDS_H
#define	COMMAND_IDS_H

/* COMMANDS FOR CHANNELS */

/*COMMANDS FOR CHANNELS INITIALIZATION*/

#define CMD_SET_CH_MODE             0x09
#define CMD_SET_CH_CURRENT_MODE     0x0A
#define CMD_SET_CH_LED_CURRENT      0x0B

/*COMMANDS REGARDING EXTERNAL TTL*/ 

#define CMD_SET_TTL_INFO_1          0x0C
#define CMD_SET_TTL_INFO_2          0x0D
#define CMD_SET_TTL_INFO_3          0x0E
#define CMD_SET_TTL_INFO_4          OxOF

/*COMMANDS FOR TRIGGERING PARAMETERS*/

#define CMD_SET_CH_TTL_OUTPUT       0x50
#define CMD_SET_CH_TRIG_TYPE        0x53
#define CMD_SET_CH_TRIG_REPEATABLE  0x54

/*COMMANDS FOR START/STOP EACH CHANNEL OR ALL CHANNELS*/
#define CMD_STARTSTOP_LED           0x40
#define CMD_STARTSTOP_ALL           0x41



#endif	/* COMMAND_IDS_H */

