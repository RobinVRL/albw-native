#include "ghidra_types.h"

extern int func_0010140C(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_003e2374;
extern undefined4 DAT_003e2378;
extern int DAT_003e237c;
extern undefined4 DAT_003e2380;

// USA 003E22D4 <- EU 003E22B4 (Ghidra, non-matching)
// GLOBAL DAT_003e2374 char *
// GLOBAL DAT_003e2378 undefined4
// GLOBAL DAT_003e237c int
// GLOBAL DAT_003e2380 undefined4

void func_003E22D4(undefined4 *param_1)

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
  param_1[0x12] = *(undefined4 *)(DAT_003e237c + 0x10);
  param_1[0x13] = uVar3;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar3;
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  param_1[4] = uVar3;
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  param_1[7] = uVar3;
  param_1[8] = uVar3;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar3;
  return;
}

