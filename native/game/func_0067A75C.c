/* USA 0067A75C (EU 0067A734)  animation curve handler data_00714BB0[0][4]: step, 6-byte keys (u16 frame / 32, u16 value)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067A75C(int param_1, float t)
{
    return ch_step_int(CH_H6, param_1, t);
}
