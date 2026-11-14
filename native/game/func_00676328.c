/* USA 00676328: nn::os::MessageQueue (ring buffer of words). Native fix of the generated Ghidra text:
 * __aeabi_uidivmod (00110710) returns quotient (r0) and remainder (r1) - the ring index is the
 * remainder, `uVar >> 0x20` - but the signature table declared it `int`, so on i386 the index
 * was the sign of the quotient (0 / -1): messages were stored at and read from wrong slots
 * (a sound-driver reply read as NULL). Declared 64-bit here. Rest unchanged. Confidence: high.
 * Systemic: build_decomp SIG_OVERRIDES (00110710, 001104E4), 50 + 44 callers. */
#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);  /* __aeabi_uidivmod: quotient | remainder << 32 */
extern int func_003CD868(int *param_1,int param_2);

// USA 00676328 <- EU 00676300 (Ghidra, non-matching)

undefined4 func_00676328(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = param_1 + 5;
  func_0010C0C0(piVar1);
  if ((uint)param_1[10] < (uint)param_1[8]) {
    uVar2 = func_00110710(param_1[10] + param_1[9],param_1[8]);
    *(undefined4 *)(*param_1 + (int)((ulonglong)uVar2 >> 0x20) * 4) = param_2;
    param_1[10] = param_1[10] + 1;
    if (0 < param_1[0xb]) {
      func_003CD868(param_1 + 1,1);
    }
    func_0010C160(piVar1);
    return 1;
  }
  func_0010C160(piVar1);
  return 0;
}

