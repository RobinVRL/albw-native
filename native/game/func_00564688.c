/* USA 00564688 (EU 00564660): stereo-camera parallax of a camera:
 *   (this->+0x48 / (*DAT_00564694)->+8) * DAT_0056469c * slider
 * slider = 3D LED byte (0x1FF81084) ? DAT_005646a0 : 3D slider float (0x1FF81080).
 * Native: the shared page does not exist; the slider comes from albw_3d_slider (native/sdk/
 * system.c, 0 = no parallax, single image). Confidence: high. */
#include "ghidra_types.h"

extern int DAT_00564694;
extern float DAT_0056469c;
extern float albw_3d_slider(float keep);

float func_00564688(int param_1)
{
    float slider = albw_3d_slider(0.0f);
    return (*(float *)(param_1 + 0x48) / *(float *)(DAT_00564694 + 8)) * DAT_0056469c * slider;
}
