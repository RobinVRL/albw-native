#include "ghidra_types.h"

extern int func_0021319C(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_00213790;
extern undefined4 DAT_00213794;

// USA 00213724 <- EU 00213724 (Ghidra, non-matching)
// GLOBAL DAT_00213790 undefined4
// GLOBAL DAT_00213794 undefined4

undefined4 func_00213724(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00213790;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00213790;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_00213794;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  *(undefined4 *)(param_1 + 0x960) = 0x14;
  *(undefined4 *)(param_1 + 0x964) = uVar1;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  func_004FC07C(param_1,3,0xffffffff,0);
  return func_0021319C(param_1,0);
}

