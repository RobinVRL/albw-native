#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 DAT_004157cc;

// USA 00415750 <- EU 00415730 (Ghidra, non-matching)
// GLOBAL DAT_004157cc undefined4

undefined4 * func_00415750(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_004157cc;
  param_1[3] = 0;
  param_1[5] = uVar1;
  param_1[4] = uVar1;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  func_00110490(param_1 + 6,0x194);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x75] = param_1 + 0x75;
  param_1[0x74] = 0;
  param_1[0x76] = param_1 + 0x75;
  param_1[0x78] = param_1 + 0x78;
  param_1[0x77] = 0;
  param_1[0x79] = param_1 + 0x78;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f5) = 0;
  *(undefined1 *)((int)param_1 + 0x1f6) = 0;
  *(undefined1 *)((int)param_1 + 0x1f7) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}

