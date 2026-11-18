#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_001b53b4;

// USA 001B537C <- EU 001B537C (Ghidra, non-matching)
// GLOBAL DAT_001b53b4 undefined4

undefined4 func_001B537C(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x908) = 0;
  uVar1 = DAT_001b53b4;
  *(undefined4 *)(param_1 + 0x90c) = 2;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x950) = uVar1;
  return func_004FC07C(param_1,4,0xffffffff,0);
}

