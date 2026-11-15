/* USA 0067AF10 (EU 0067AEE8)  animation curve handler data_00714BB0[1][2]: linear, 6-byte keys (u8 frame, u16 value)
 * (curve, float t) -> float. Shared body and key formats in curve_handler.h.
 * Bug fixed: the Ghidra source did not return the float it computed (BOOT_LOG 90 [3d]).
 * CLASS float results of indirect-call targets. From the EU machine code. High. */
#include "curve_handler.h"

float func_0067AF10(int param_1, float t)
{
    return ch_interp_int(CH_B6, 0, param_1, t);
}
