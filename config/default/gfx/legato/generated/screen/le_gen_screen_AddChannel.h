#ifndef LE_GEN_SCREEN_ADDCHANNEL_H
#define LE_GEN_SCREEN_ADDCHANNEL_H
#include "app.h"
#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* AddChannel_Panel_Channel;
extern leLabelWidget* AddChannel_TitleChannel;
extern leButtonWidget* AddChannel_HomeButton;
extern leButtonWidget* AddChannel_BackButtonChanne;
extern leGroupBoxWidget* AddChannel_Channel_part1;
extern leGroupBoxWidget* AddChannel_Channel_part2;
extern leRectangleWidget* AddChannel_RectangleWidget_0;
extern leLabelWidget* AddChannel_Channel;
extern leLabelWidget* AddChannel_ModeTitle;
extern leLabelWidget* AddChannel_CurrentTittle;
extern leLabelWidget* AddChannel_TriggerTittle;
extern leLabelWidget* AddChannel_LabelWidget_channel;
extern leLabelWidget* AddChannel_LabelWidget_mode;
extern leLabelWidget* AddChannel_LabelWidget_trigger;
extern leWidget* AddChannel_PanelWidget_current;
extern leLabelWidget* AddChannel_LabelWidget_unite;
extern leLabelWidget* AddChannel_LabelWidget_current;
extern leListWidget* AddChannel_ListWidget_0;
extern leListWidget* AddChannel_ListWidget_1;
extern leListWidget* AddChannel_ListWidget_2;
extern leListWidget* AddChannel_ListWidget_3;
extern leCheckBoxWidget* AddChannel_CheckBoxWidget_0;
extern leCheckBoxWidget* AddChannel_CheckBoxWidget_1;
extern leWidget* AddChannel_PanelWidget_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_2;
extern leLabelWidget* AddChannel_SartTitle;
extern leWidget* AddChannel_PanelWidget_0_4;
extern leLabelWidget* AddChannel_frequencyTitle;
extern leLabelWidget* AddChannel_TimeOnTitle;
extern leLabelWidget* AddChannel_pulsefeqTitle;
extern leLabelWidget* AddChannel_NumSeqTitle;
extern leLabelWidget* AddChannel_delayBetTitle;
extern leWidget* AddChannel_PanelWidget_0_0;
extern leWidget* AddChannel_PanelWidget_0_1;
extern leWidget* AddChannel_PanelWidget_0_2;
extern leWidget* AddChannel_PanelWidget_0_3;
extern leWidget* AddChannel_PanelWidget_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_2;
extern leTextFieldWidget* AddChannel_TextFieldWidget_3;
extern leTextFieldWidget* AddChannel_TextFieldWidget_4;
extern leTextFieldWidget* AddChannel_TextFieldWidget_5;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_5;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_4;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_3;
extern leLabelWidget* AddChannel_LabelWidget_1;
extern leLabelWidget* AddChannel_LabelWidget_1_0;
extern leLabelWidget* AddChannel_LabelWidget_1_0_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_2;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_3;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_4;
extern leLabelWidget* AddChannel_LabelWidget_1_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_2;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_3;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_4;
extern leLabelWidget* AddChannel_LabelWidget_1_1_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_5;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_13;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_12;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_14;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_7;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_8;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_9;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_10;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_11;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_2;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_3;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_4;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_0;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_1;
extern leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_2;
extern leLabelWidget* AddChannel_LabelWidget_1_2;
extern leLabelWidget* AddChannel_LabelWidget_1_3;
extern leLabelWidget* AddChannel_LabelWidget_1_2_0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_AddChannel(void); // called when Legato is initialized
leResult screenShow_AddChannel(void); // called when screen is shown
void screenHide_AddChannel(void); // called when screen is hidden
void screenDestroy_AddChannel(void); // called when Legato is destroyed
void screenUpdate_AddChannel(void); // called when Legato is updating

leWidget* screenGetRoot_AddChannel(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_ADDCHANNEL_H
