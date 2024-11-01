#ifndef LEGATO_INIT_SCHEME_H
#define LEGATO_INIT_SCHEME_H

#include "gfx/legato/legato.h"

extern const leScheme WhiteScheme;
extern const leScheme RedScheme;
extern const leScheme GreenScheme;
extern const leScheme BlueScheme;
extern const leScheme BlackBackground;
extern const leScheme lightBlackBackground;
extern const leScheme validateButton;
extern const leScheme deleteButton;
extern const leScheme Tvalidate;
extern const leScheme texfield;
extern const leScheme RadioButton;
extern const leScheme progressBar;
extern const leScheme transparent;
extern const leScheme bluenumber;
extern const leScheme wheelScheme;
extern const leScheme selector;
extern const leScheme running;
extern const leScheme stopped;
extern const leScheme panel_blue_background;
extern const leScheme textField_blue_background;

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

void legato_initialize_schemes(void);

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LEGATO_INIT_SCHEME_H
