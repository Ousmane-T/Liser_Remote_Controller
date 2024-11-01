/* 
 * File:   can_com.h
 * Author: ousmane
 *
 * Created on October 5, 2024, 2:30 PM
 */

#ifndef CAN_COM_H
#define	CAN_COM_H

#include "command_ids.h"
#include <stdint.h>
#include "common.h"
#include "config/default/peripheral/can/plib_can2.h"
#include "config/default/peripheral/can/plib_can_common.h"

 
#define BUFFER_SIZE 3

extern uint8_t transmitBuffer[];


void transmitCANMessage(uint32_t canID, uint8_t *data, uint8_t length);
void sendCANCommand(uint8_t command, uint32_t canID, unsigned int channelNumber, uint8_t value);

void liserSetChannelMode(unsigned int channelNumber, ChannelMode channelMode);
void liserSetChannelCurrentMode(unsigned int channelNumber, CurrentMode currentMode);
void liserSetChannelTriggerType(unsigned int channelNumber, TriggerMode triggerMode);
void liserSetTTLOutputState(unsigned int channelNumber, TTLOutput state);
void liserSetChannelRepeatability(unsigned int channelNumber, REPEATABLE value);
void liserStartOrStopALL(START_STOP_ALL value);
void liserStartOrStopChannelLED(unsigned int channelNumber, START_STOP_CHANNEL_LED value);

#endif	/* CAN_COM_H */

