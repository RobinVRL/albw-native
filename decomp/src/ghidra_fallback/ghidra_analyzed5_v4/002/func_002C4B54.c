#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002c4b98;
extern undefined4 DAT_002c4b9c;

// USA 002C4B54 <- EU 002C4B30 (Ghidra, non-matching)
// GLOBAL DAT_002c4b98 undefined4
// GLOBAL DAT_002c4b9c undefined4

void func_002C4B54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8e0);
  *(int *)(param_1 + 0x8e0) = iVar2 + -0x80000000;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(uint *)(param_1 + 0x8e4) = iVar2 + 0xa0000000U & 0xc0000000;
  func_004FC07C(param_1,0,0,0);
  *(undefined4 *)(param_1 + 0x8f4) = DAT_002c4b98;
  uVar1 = DAT_002c4b9c;
  *(undefined4 *)(param_1 + 0x8ec) = 0x3c;
  *(undefined4 *)(param_1 + 0x8f0) = uVar1;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  return;
}

