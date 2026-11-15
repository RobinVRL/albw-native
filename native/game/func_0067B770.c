/* USA 0067B770 (EU 0067B748)  animation curve handler data_00714BB0[2][0]: Hermite, float keys {frame, value, slope in, slope out}
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067B770(int param_1, float t)
{
    return ch_interp_flt(4, 1, param_1, t);
}
