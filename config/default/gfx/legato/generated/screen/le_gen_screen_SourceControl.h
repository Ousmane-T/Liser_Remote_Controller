#ifndef LE_GEN_SCREEN_SOURCECONTROL_H
#define LE_GEN_SCREEN_SOURCECONTROL_H

#include "gfx/legato/legato.h"
#include "app.h"
#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SourceControl_Panel_0;
extern leLabelWidget* SourceControl_LabelWidget_0;
extern leGroupBoxWidget* SourceControl_GroupBoxWidget_0;
extern leButtonWidget* SourceControl_ButtonWidget_2;
extern leButtonWidget* SourceControl_ButtonWidget_3;
extern leButtonWidget* SourceControl_ButtonWidget_4;
extern leGroupBoxWidget* SourceControl_GroupBoxWidget_4;
extern leButtonWidget* SourceControl_ButtonWidget_5;
extern leRectangleWidget* SourceControl_RectangleWidget_0;
extern leButtonWidget* SourceControl_ButtonWidget_0;
extern leButtonWidget* SourceControl_ButtonWidget_1;
extern leWidget* SourceControl_PanelWidget_0;
extern leButtonWidget* SourceControl_ButtonWidget_6;
extern leButtonWidget* SourceControl_ButtonWidget_7;
extern leWidget* SourceControl_PanelWidget_1;
extern leLabelWidget* SourceControl_CurrentTittle_1;
extern leLabelWidget* SourceControl_CurrentTittle;
extern leLabelWidget* SourceControl_CurrentTittle_3;
extern leButtonWidget* SourceControl_ButtonWidget_8;
extern leTextFieldWidget* SourceControl_TextFieldWidget_0;
extern leTextFieldWidget* SourceControl_TextFieldWidget_1;
extern leLabelWidget* SourceControl_CurrentTittle_0;
extern leLabelWidget* SourceControl_CurrentTittle_2;
extern leLabelWidget* SourceControl_CurrentTittle_3_0;
extern leButtonWidget* SourceControl_ButtonWidget_9;
extern leTextFieldWidget* SourceControl_TextFieldWidget_2;
extern leTextFieldWidget* SourceControl_TextFieldWidget_3;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SourceControl(void); // called when Legato is initialized
leResult screenShow_SourceControl(void); // called when screen is shown
void screenHide_SourceControl(void); // called when screen is hidden
void screenDestroy_SourceControl(void); // called when Legato is destroyed
void screenUpdate_SourceControl(void); // called when Legato is updating

leWidget* screenGetRoot_SourceControl(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SOURCECONTROL_H
