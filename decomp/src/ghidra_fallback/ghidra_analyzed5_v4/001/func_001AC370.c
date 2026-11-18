#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern undefined4 DAT_001ac3dc;

// USA 001AC370 <- EU 001AC370 (Ghidra, non-matching)
// GLOBAL DAT_001ac3dc undefined4

undefined4 func_001AC370(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  func_004FCDF4(param_1 + 0x5a8,1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
  func_004FD038(param_1 + 0x5a8,1);
  uVar1 = DAT_001ac3dc;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001ac3dc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

