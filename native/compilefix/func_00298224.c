/* USA 00298224 (EU 00298200): `mov r0, #1; bx lr` - returns 1.
 * Before the EU/USA map fix (BOOT_LOG 119) this file held a compilefix of the Ghidra text the old
 * map named 00298224: the body at EU 002982D0..00298364 (behind the literal-pool word 0x0003DBC0
 * at 002982CC), which the corrected map names USA 002982F4 and which now builds from its corrected
 * dump (build/ghidra_mapfix/func_002982F4.c). Confidence: high (two instructions). */
int func_00298224(void) { return 1; }
