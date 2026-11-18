#include "ghidra_types.h"

extern int func_0010140C(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_003e2374;
extern undefined4 DAT_003e2378;
extern int DAT_003e237c;
extern undefined4 DAT_003e2380;

// USA 003E22CC <- EU 003E22AC (Ghidra, non-matching)
// GLOBAL DAT_003e2374 char *
// GLOBAL DAT_003e2378 undefined4
// GLOBAL DAT_003e237c int
// GLOBAL DAT_003e2380 undefined4

void func_003E22CC(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  pcVar1 = DAT_003e2374;
  if (*DAT_003e2374 == '\0') {
    func_0010140C();
    uVar3 = DAT_003e2378;
    uVar2 = func_00108630(DAT_003e237c,0x20,DAT_003e2378);
                    /* WARNING: Subroutine does not return */
    if (-((int)uVar2 >> 0x1f) != 0) {
      func_0010C1B8(-((int)uVar2 >> 0x1f),extraout_r1,uVar3);
    }
    func_001024E0(0,extraout_r1,uVar3);
    *pcVar1 = '\x01';
  }
  uVar3 = DAT_003e2380;
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(DAT_003e237c + 0x10);
  *(undefined4 *)(param_1 + 700) = uVar3;
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = uVar3;
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  *(undefined4 *)(param_1 + 0x280) = uVar3;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  return;
}

