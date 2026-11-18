#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b5238;

// USA 001B5200 <- EU 001B5200 (Ghidra, non-matching)
// GLOBAL DAT_001b5238 undefined4

undefined4 func_001B5200(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001b5238;
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x988);
  *(undefined4 *)(param_1 + 0x90c) = 2;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x950) = uVar1;
  return func_004FC07C(param_1,4,0xffffffff,0);
}

