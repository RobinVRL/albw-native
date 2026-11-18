#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0022c010;
extern undefined4 DAT_0022c014;

// USA 0022BFC8 <- EU 0022BFC8 (Ghidra, non-matching)
// GLOBAL DAT_0022c010 undefined4
// GLOBAL DAT_0022c014 undefined4

void func_0022BFC8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0022c010;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0022c010;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar1 = DAT_0022c014;
  *(undefined4 *)(param_1 + 0xa74) = 0x3c;
  *(undefined4 *)(param_1 + 0xa78) = uVar1;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  return;
}

