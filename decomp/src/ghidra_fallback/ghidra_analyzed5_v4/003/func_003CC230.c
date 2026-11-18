#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern uint DAT_003cc260;

// USA 003CC230 <- EU 003CC20C (Ghidra, non-matching)
// GLOBAL DAT_003cc260 uint

uint * func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = DAT_003cc260;
  *param_1 = param_4 >> 3;
  param_1[1] = uVar1;
  *param_2 = param_1 + 2;
  param_1[2] = 0;
  uVar1 = func_001139F8(param_3);
  param_1[3] = uVar1 >> 3;
  uVar1 = func_001139F8((int)(param_1 + 6));
  param_1[4] = uVar1 >> 3;
  param_1[5] = 1;
  return param_1 + 6;
}

