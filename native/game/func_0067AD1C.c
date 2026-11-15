/* USA 0067AD1C (EU 0067ACF4)  animation curve handler data_00714BB0[1][4]: linear, 6-byte keys (u16 frame / 32, u16 value)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067AD1C(int param_1, float t)
{
    return ch_interp_int(CH_H6, 0, param_1, t);
}
