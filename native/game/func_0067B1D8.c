/* USA 0067B1D8 (EU 0067B1B0)  animation curve handler data_00714BB0[2][5]: Hermite, 4-byte keys (u8 frame, 12-bit value, 12-bit slope)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067B1D8(int param_1, float t)
{
    return ch_interp_int(CH_B4, 1, param_1, t);
}
