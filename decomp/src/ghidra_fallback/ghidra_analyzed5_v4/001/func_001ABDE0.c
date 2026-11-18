#include "ghidra_types.h"

extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern undefined4 DAT_001abe70;
extern undefined4 DAT_001abe74;

// USA 001ABDE0 <- EU 001ABDE0 (Ghidra, non-matching)
// GLOBAL DAT_001abe70 undefined4
// GLOBAL DAT_001abe74 undefined4

void func_001ABDE0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_001abe74;
  uVar2 = DAT_001abe70;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001abe70;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  *(undefined4 *)(param_1 + 0x948) = 0x1e;
  *(undefined4 *)(param_1 + 0x94c) = uVar1;
  *(undefined4 *)(param_1 + 0x944) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
  func_004FCD5C(param_1 + 0x5a8,1);
  if (*(int *)(param_1 + 0x40c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = uVar2;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  func_004FCDF4(param_1 + 0x5a8,1);
  *(undefined4 *)(param_1 + 0x9b8) = uVar2;
  return;
}

