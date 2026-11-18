#include "ghidra_types.h"

extern uint DAT_0041f584;

// USA 0041F54C <- EU 0041F52C (Ghidra, non-matching)
// GLOBAL DAT_0041f584 uint

uint * func_0041F54C(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_0041f584;
  if ((uint)(param_3 * 6) < 0x11) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_3 * 0xc + -0x20;
  }
  if ((*(int *)(param_1 + 0x28) + iVar3 & 0xfffU) < 0xfe0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
  }
  *param_2 = uVar2 | 0x80000000;
  param_2[1] = uVar1;
  param_2[3] = uVar1 + 1;
  param_2[2] = param_3 * 6;
  return param_2 + 4;
}

