/* USA 00230AD8 (EU 00230AD8): second entry of 00230ADC (a single `mov r0, r0` that falls
 * through into it), used by the vtables 006D3C64 / 006EE3D8.
 * Route: area-change actor calc (see func_00230ADC.c).
 * Bug: the Ghidra body is a copy of 00230ADC with the same lost `this` in the state dispatch.
 * Verified: EU 00230AD8 = `mov r0, r0`, next instruction is 00230ADC.  Confidence: high. */
int func_00230ADC(char *self);

int func_00230AD8(char *self)
{
    return func_00230ADC(self);
}
