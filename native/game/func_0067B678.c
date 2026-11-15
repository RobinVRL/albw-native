/* USA 0067B678 (EU 0067B650)  animation curve handler data_00714BB0[2][1]: Hermite, 8-byte keys (u32 frame:12 value:20, s16 slopes in / out)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067B678(int param_1, float t)
{
    return ch_interp_int(CH_P8, 1, param_1, t);
}
