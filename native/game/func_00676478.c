/* USA 00676478: nn::os::MessageQueue (ring buffer of words). Native fix of the generated Ghidra text:
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

// USA 00676478 <- EU 00676450 (Ghidra, non-matching)

undefined4 func_00676478(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = param_1 + 5;
  func_0010C0C0(piVar3);
  uVar1 = param_1[8];
  if ((uint)param_1[10] < uVar1) {
    uVar4 = func_00110710((param_1[9] + uVar1) - 1,uVar1);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    param_1[9] = iVar2;
    *(undefined4 *)(*param_1 + iVar2 * 4) = param_2;
    param_1[10] = param_1[10] + 1;
    if (0 < param_1[0xb]) {
      func_003CD868(param_1 + 1,1);
    }
    func_0010C160(piVar3);
    return 1;
  }
  func_0010C160(piVar3);
  return 0;
}

