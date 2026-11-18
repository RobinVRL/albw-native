#include "ghidra_types.h"

extern undefined4 DAT_0010bfcc;
extern undefined4 DAT_0010bfd0;

// USA 0010BF5C <- EU 0010BF5C (Ghidra, non-matching)
// GLOBAL DAT_0010bfcc undefined4
// GLOBAL DAT_0010bfd0 undefined4

undefined4 * func_0010BF5C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0xf0;
  uVar1 = DAT_0010bfcc;
  param_1[3] = 400;
  param_1[8] = param_1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 3;
  uVar1 = DAT_0010bfd0;
  param_1[0xb] = 0xf0;
  param_1[0xc] = 400;
  param_1[0xd] = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_1;
  param_1[0x10] = 0xf0;
  param_1[0x11] = 400;
  return param_1;
}

