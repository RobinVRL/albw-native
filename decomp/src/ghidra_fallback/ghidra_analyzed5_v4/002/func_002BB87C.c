#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern undefined4 DAT_002bb8cc;

// USA 002BB87C <- EU 002BB858 (Ghidra, non-matching)
// GLOBAL DAT_002bb8cc undefined4

undefined4 func_002BB87C(int param_1)

{
  undefined4 uVar1;
  
  func_004FC07C(param_1,1,0xffffffff,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
  func_004FD038(param_1 + 0x5a8,1);
  uVar1 = DAT_002bb8cc;
  *(undefined4 *)(param_1 + 0x904) = 10;
  *(undefined4 *)(param_1 + 0x908) = uVar1;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  return func_004FCDF4(param_1 + 0x5a8,1);
}

