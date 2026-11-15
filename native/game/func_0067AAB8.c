/* USA 0067AAB8 (EU 0067AA90)  animation curve handler data_00714BB0[1][6]: linear, float keys {frame, value}
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067AAB8(int param_1, float t)
{
    return ch_interp_flt(2, 0, param_1, t);
}
