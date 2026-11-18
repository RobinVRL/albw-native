#include "ghidra_types.h"

extern undefined4 DAT_00408008;
extern undefined4 DAT_0040800c;

// USA 00407FA4 <- EU 00407F84 (Ghidra, non-matching)
// GLOBAL DAT_00408008 undefined4
// GLOBAL DAT_0040800c undefined4

undefined4 func_00407FA4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[9] = 0;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[0xe] = 0;
  uVar2 = DAT_0040800c;
  param_1[0xd] = 0x7fffffff;
  uVar1 = DAT_00408008;
  param_1[0xc] = 1;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  return (undefined4)param_1;
}

