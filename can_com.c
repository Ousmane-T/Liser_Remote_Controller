#include "can_com.h"

uint8_t transmitBuffer[BUFFER_SIZE];

void sendCANCommand(uint8_t command, uint32_t canID, unsigned int channelNumber, uint8_t parameter) {
    transmitBuffer[0] = command;
    transmitBuffer[1] = channelNumber;
    transmitBuffer[2] = parameter;
    transmitCANMessage(canID, transmitBuffer, sizeof(transmitBuffer));  
}

void transmitCANMessage(uint32_t canID, uint8_t *data, uint8_t length) {
    uint8_t fifoNumber = 0;
    CAN_MSG_TX_ATTRIBUTE msgAttr = CAN_MSG_TX_DATA_FRAME;
    CAN2_MessageTransmit(canID, length, data, fifoNumber, msgAttr);
}

void liserSetChannelMode(unsigned int channelNumber, ChannelMode channelMode) {
    sendCANCommand(CMD_SET_CH_MODE, CH_MODE_ID, channelNumber, channelMode);
}

void liserSetChannelCurrentMode(unsigned int channelNumber, CurrentMode currentMode) {
    sendCANCommand(CMD_SET_CH_CURRENT_MODE, CURRENT_MODE_ID, channelNumber, currentMode);
}

void liserSetChannelTriggerType(unsigned int channelNumber, TriggerMode triggerMode) {
    sendCANCommand(CMD_SET_CH_TRIG_TYPE, TRIGGER_TYPE_ID, channelNumber, triggerMode);
}

void liserSetTTLOutputState(unsigned int channelNumber, TTLOutput state) {
    sendCANCommand(CMD_SET_CH_TTL_OUTPUT, OUTPUT_STATE_ID, channelNumber, state);
}

void liserSetChannelRepeatability(unsigned int channelNumber, REPEATABLE value) {
    sendCANCommand(CMD_SET_CH_TRIG_REPEATABLE, REPEAT_ID, channelNumber, value);
}

void liserStartOrStopALL(START_STOP_ALL value){
    sendCANCommand(CMD_STARTSTOP_ALL, START_STOP_ALL_ID, 0, value);
}
void liserStartOrStopChannelLED(unsigned int channelNumber, START_STOP_CHANNEL_LED value){
    sendCANCommand(CMD_STARTSTOP_LED, START_STOP_CHANNEL_LED_ID, channelNumber, value);
    
}