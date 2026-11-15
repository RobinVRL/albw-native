/* USA 0067B35C (EU 0067B334)  animation curve handler data_00714BB0[2][4]: Hermite, 6-byte keys (u16 frame / 32, u16 value, s16 slope)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067B35C(int param_1, float t)
{
    return ch_interp_int(CH_H6, 1, param_1, t);
}
