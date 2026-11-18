#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_003ad014;
extern undefined4 DAT_003ad018;
extern undefined4 DAT_003ad01c;
extern undefined4 DAT_003ad020;

// USA 003ACFC8 <- EU 003ACFA4 (Ghidra, non-matching)
// GLOBAL DAT_003ad014 undefined4
// GLOBAL DAT_003ad018 undefined4
// GLOBAL DAT_003ad01c undefined4
// GLOBAL DAT_003ad020 undefined4

void func_003ACFC8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_003ad014;
  *(undefined4 *)(param_1 + 0x458) = 0xb4;
  *(undefined4 *)(param_1 + 0x45c) = uVar1;
  uVar1 = DAT_003ad018;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = uVar1;
  uVar1 = DAT_003ad01c;
  *(undefined4 *)(param_1 + 0x464) = 0x14;
  *(undefined4 *)(param_1 + 0x468) = uVar1;
  *(undefined4 *)(param_1 + 0x460) = 0;
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x4b4));
  *(undefined4 *)(param_1 + 0x3e0) = DAT_003ad020;
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}

