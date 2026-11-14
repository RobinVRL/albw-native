/* USA 0067660C: nn::os::MessageQueue (ring buffer of words). Native fix of the generated Ghidra text:
 * __aeabi_uidivmod (00110710) returns quotient (r0) and remainder (r1) - the ring index is the
 * remainder, `uVar >> 0x20` - but the signature table declared it `int`, so on i386 the index
 * was the sign of the quotient (0 / -1): messages were stored at and read from wrong slots
 * (a sound-driver reply read as NULL). Declared 64-bit here. Rest unchanged. Confidence: high.
 * Systemic: build_decomp SIG_OVERRIDES (00110710, 001104E4), 50 + 44 callers. */
#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);  /* __aeabi_uidivmod: quotient | remainder << 32 */
extern int func_003CD7B4(int *param_1);
extern int func_003CD868(int *param_1,int param_2);

// USA 0067660C <- EU 006765E4 (Ghidra, non-matching)

void func_0067660C(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = param_1 + 5;
    func_0010C0C0(piVar2);
    if ((uint)param_1[10] < (uint)param_1[8]) break;
    func_0010C160(piVar2);
    func_003CD7B4(param_1 + 3);
  }
  uVar3 = func_00110710(param_1[9] + param_1[10],param_1[8]);
  *(undefined4 *)(*param_1 + (int)((ulonglong)uVar3 >> 0x20) * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    func_003CD868(param_1 + 1,1);
  }
  func_0010C160(piVar2);
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}

