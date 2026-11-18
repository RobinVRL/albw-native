#include "ghidra_types.h"

extern int func_0021319C(int param_1,int param_2);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002135cc;

// USA 00213554 <- EU 00213554 (Ghidra, non-matching)
// GLOBAL DAT_002135cc undefined4

void func_00213554(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
  func_004FAD90(param_1);
  func_004FC07C(param_1,4,0xffffffff,0);
  func_0021319C(param_1,0);
  uVar1 = DAT_002135cc;
  *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x960) = 0x3c;
  *(undefined4 *)(param_1 + 0x964) = uVar1;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  return;
}

