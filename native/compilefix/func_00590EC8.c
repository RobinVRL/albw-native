/* USA 00590EC8 (EU 00590EA0): powf(x, y) of the C runtime (armcc's single-precision pow).
 * Evidence: two float arguments, a 16-entry log2 table indexed by the top 4 mantissa bits
 * (0.0625 = 1/16, table at EU 0059135C), log-series constants 1/3 and 0.20008, 32/ln2 split as
 * 46.171875 - 0.0056337 for the exp2 reconstruction; callers use it as pow(base, exponent)
 * (00409940: sound curve). Native C runtime replacement, like fmodf (func_00590DEC.c, stop 72):
 * the converted Ghidra text (kept as func_00590EC8.c.ghidra-broken, not built) had float<->int
 * value conversions where the ARM uses the float bits and read its table through the raw 3DS
 * address 0x59135C + 0x132530, which crashed the first sound effect triggered on the title
 * (boot stop 95c). Confidence: high (function), libm rounding may differ in the last ulp. */
#include <math.h>

float func_00590EC8(float x, float y)
{
    return powf(x, y);
}
