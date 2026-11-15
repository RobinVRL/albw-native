/* USA 0067AE04 (EU 0067ADDC)  animation curve handler data_00714BB0[1][3]: linear, float keys {frame, value, slope}
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067AE04(int param_1, float t)
{
    return ch_interp_flt(3, 0, param_1, t);
}
