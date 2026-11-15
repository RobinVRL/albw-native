/* USA 0067B558 (EU 0067B530)  animation curve handler data_00714BB0[2][2]: Hermite, 6-byte keys (u8 frame, u16 value, 12-bit slopes in / out)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067B558(int param_1, float t)
{
    return ch_interp_int(CH_B6, 1, param_1, t);
}
