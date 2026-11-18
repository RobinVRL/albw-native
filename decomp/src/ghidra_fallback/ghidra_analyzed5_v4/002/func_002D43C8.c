#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_002d43d8;
extern undefined *DAT_002d43dc;

// USA 002D43C8 <- EU 002D43A4 (Ghidra, non-matching)
// GLOBAL DAT_002d43d8 undefined4
// GLOBAL DAT_002d43dc undefined *

undefined4 * func_002D43C8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_002d43d8;
  param_1[2] = param_2;
  *param_1 = uVar1;
  param_1[1] = 0;
  iVar2 = func_00100118((int)(param_1 + 3),DAT_002d43dc,4,3);
  *(undefined1 *)(iVar2 + 0xc) = 0;
  return (undefined4 *)(iVar2 + -0xc);
}

