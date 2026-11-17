/* USA 001D4AD8: tail call 001D4854(this, 1, 1.0f) (EU 001D4AD8: vldr s0 = 1.0, mov r1, #1, b 001D4854; r0 = this
 * passes through). The matched source (src/work5/agent3) declared the callee as a free (int, float) function and
 * dropped `this`: the callee got this = 1 and its float from an unrelated stack slot (CLASS float argument order,
 * tools/proto_mismatch_scan.py). 001D4854 (Ghidra) takes (this, int, float). */
#include <stdint.h>
void func_001D4854(int self, int a, float f);
void func_001D4AD8(int self) { func_001D4854(self, 1, 1.0f); }
