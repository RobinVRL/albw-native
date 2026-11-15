/* USA 0067A868 (EU 0067A840)  animation curve handler data_00714BB0[0][1]: step, 8-byte keys (u32 frame:12 value:20)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067A868(int param_1, float t)
{
    return ch_step_int(CH_P8, param_1, t);
}
