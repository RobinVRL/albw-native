#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_003540a4;
extern undefined4 DAT_003540a8;
extern undefined4 DAT_003540ac;
extern undefined4 DAT_003540b0;

// USA 00354068 <- EU 00354044 (Ghidra, non-matching)
// GLOBAL DAT_003540a4 undefined4
// GLOBAL DAT_003540a8 undefined4
// GLOBAL DAT_003540ac undefined4
// GLOBAL DAT_003540b0 undefined4

void func_00354068(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_003540ac;
  *(undefined4 *)(param_1 + 0x58c) = DAT_003540a4;
  uVar1 = DAT_003540a8;
  *(undefined4 *)(param_1 + 0x9d4) = DAT_003540a8;
  *(undefined4 *)(param_1 + 0x9d8) = uVar2;
  *(undefined4 *)(param_1 + 0x9dc) = uVar1;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = DAT_003540b0;
  *(undefined4 *)(param_1 + 0x9fc) = 0x5a;
  *(undefined4 *)(param_1 + 0xa00) = uVar1;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  return;
}

