#include "ghidra_types.h"

extern int func_0037EC94(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_00381560;

// USA 00381528 <- EU 00381504 (Ghidra, non-matching)
// GLOBAL DAT_00381560 undefined4

void func_00381528(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00381560;
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  *(undefined4 *)(param_1 + 0xb04) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0xabc) = uVar1;
  *(undefined4 *)(param_1 + 0xac0) = uVar1;
  *(undefined4 *)(param_1 + 0xac4) = uVar1;
  func_0037EC94(param_1);
  func_004FC07C(param_1,6,0xffffffff,0);
  *(undefined1 *)(param_1 + 0xb24) = 0;
  return;
}

