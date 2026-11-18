#include "ghidra_types.h"

extern undefined4 DAT_00435bb8;
extern undefined4 DAT_00435bbc;
extern undefined4 DAT_00435bc0;
extern undefined4 DAT_00435bc4;

// USA 00435B54 <- EU 00435B34 (Ghidra, non-matching)
// GLOBAL DAT_00435bb8 undefined4
// GLOBAL DAT_00435bbc undefined4
// GLOBAL DAT_00435bc0 undefined4
// GLOBAL DAT_00435bc4 undefined4

undefined4 * func_00435B54(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00435bbc;
  *param_1 = DAT_00435bb8;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  uVar1 = DAT_00435bc0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  uVar1 = DAT_00435bc4;
  param_1[0x10] = DAT_00435bc4;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(short *)(param_1 + 0x15) = (short)*param_2;
  return param_1;
}

