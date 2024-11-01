#ifndef LE_GEN_SCREEN_TIMESERIES_H
#define LE_GEN_SCREEN_TIMESERIES_H

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
extern leWidget* TimeSeries_Panel_0;
extern leLabelWidget* TimeSeries_LabelWidget_2;
extern leGroupBoxWidget* TimeSeries_GroupBoxWidget_0;
extern leGroupBoxWidget* TimeSeries_GroupBoxWidget_1;
extern leRectangleWidget* TimeSeries_RectangleWidget_0;
extern leButtonWidget* TimeSeries_ButtonWidget_1;
extern leTextFieldWidget* TimeSeries_TextFieldWidget_0;
extern leTextFieldWidget* TimeSeries_TextFieldWidget_1;
extern leLabelWidget* TimeSeries_LabelWidget_3;
extern leLabelWidget* TimeSeries_LabelWidget_4;
extern leLabelWidget* TimeSeries_NumOfSerisLabel;
extern leLabelWidget* TimeSeries_TDlabel;
extern leLabelWidget* TimeSeries_LabelWidget_0_1;
extern leLabelWidget* TimeSeries_TimeOnLabel;
extern leLabelWidget* TimeSeries_LabelWidget_0_0_0;
extern leLabelWidget* TimeSeries_LabelWidget_0_0_1;
extern leLabelWidget* TimeSeries_LabelWidget_0_0_2;
extern leWidget* TimeSeries_NumOfSerisPanel;
extern leLabelWidget* TimeSeries_LabelWidget_1_1;
extern leLabelWidget* TimeSeries_LabelWidget_1_2;
extern leWidget* TimeSeries_PanelWidget_0_4_1;
extern leWidget* TimeSeries_PanelWidget_0_4_0;
extern leLabelWidget* TimeSeries_LabelWidget_1;
extern leLabelWidget* TimeSeries_LabelWidget_1_0;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield1;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield2;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield3;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield4;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield5;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_6;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_11;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_10;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_9;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_8;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_7;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_0;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_1;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_2;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_3;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_4;
extern leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_5;
extern leLabelWidget* TimeSeries_LabelWidget_0;
extern leProgressBarWidget* TimeSeries_ProgressBarWidget_0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TimeSeries(void); // called when Legato is initialized
leResult screenShow_TimeSeries(void); // called when screen is shown
void screenHide_TimeSeries(void); // called when screen is hidden
void screenDestroy_TimeSeries(void); // called when Legato is destroyed
void screenUpdate_TimeSeries(void); // called when Legato is updating

leWidget* screenGetRoot_TimeSeries(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TIMESERIES_H
