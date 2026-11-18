#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00115108(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern uint DAT_001312b0;
extern undefined4 DAT_001312b4;
extern undefined4 DAT_001312b8;

// USA 00131244 <- EU 00131244 (Ghidra, non-matching)
// GLOBAL DAT_001312b0 uint
// GLOBAL DAT_001312b4 undefined4
// GLOBAL DAT_001312b8 undefined4

uint * func_00131244(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_001312b0;
  *param_2 = *(byte *)(param_1 + 0x2b62) | 0x80000000;
  param_2[1] = uVar1;
  func_00115108(param_2 + 2,param_4,DAT_001312b4);
  uVar2 = DAT_001312b8;
  param_2[0x14] = *(byte *)(param_1 + 0x2b5a) | 0x80000000;
  param_2[0x15] = uVar1;
  func_001150CC(param_2 + 0x16,param_3,uVar2);
  return param_2 + 0x24;
}

