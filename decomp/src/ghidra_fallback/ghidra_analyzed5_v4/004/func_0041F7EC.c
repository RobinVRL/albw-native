#include "ghidra_types.h"

extern undefined4 DAT_0041f814;
extern int DAT_0041f818;

// USA 0041F7EC <- EU 0041F7CC (Ghidra, non-matching)
// GLOBAL DAT_0041f814 undefined4
// GLOBAL DAT_0041f818 int

undefined4 * func_0041F7EC(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0041f814;
  *param_1 = 0;
  param_1[1] = uVar1;
  iVar2 = DAT_0041f818;
  param_1[2] = 0;
  param_1[3] = iVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x1000;
  param_1[7] = iVar2 + -0x150000;
  return param_1 + 8;
}

