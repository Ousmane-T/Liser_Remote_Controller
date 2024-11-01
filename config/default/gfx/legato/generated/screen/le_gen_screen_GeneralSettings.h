#ifndef LE_GEN_SCREEN_GENERALSETTINGS_H
#define LE_GEN_SCREEN_GENERALSETTINGS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* GeneralSettings_Panel_0;
extern leLabelWidget* GeneralSettings_LabelWidget_0;
extern leGroupBoxWidget* GeneralSettings_GroupBoxWidget_0;
extern leLabelWidget* GeneralSettings_LabelLanguage;
extern leLabelWidget* GeneralSettings_LabelWidget_2_0;
extern leLabelWidget* GeneralSettings_LabelWidget_2_1;
extern leWidget* GeneralSettings_PanelWidget_0;
extern leListWheelWidget* GeneralSettings_ListWheelWidget_0;
extern leRectangleWidget* GeneralSettings_RectangleWidget_0;
extern leButtonWidget* GeneralSettings_ButtonBackGeneral;
extern leLabelWidget* GeneralSettings_ScreenbrightLabel;
extern leLabelWidget* GeneralSettings_UIDlabel;
extern leLabelWidget* GeneralSettings_FirmwareLabel;
extern leLabelWidget* GeneralSettings_LanguageLabel;
extern leButtonWidget* GeneralSettings_ButtonValidateSettings;
extern leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2;
extern leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2_0;
extern leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2_1;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_GeneralSettings(void); // called when Legato is initialized
leResult screenShow_GeneralSettings(void); // called when screen is shown
void screenHide_GeneralSettings(void); // called when screen is hidden
void screenDestroy_GeneralSettings(void); // called when Legato is destroyed
void screenUpdate_GeneralSettings(void); // called when Legato is updating

leWidget* screenGetRoot_GeneralSettings(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_GENERALSETTINGS_H
