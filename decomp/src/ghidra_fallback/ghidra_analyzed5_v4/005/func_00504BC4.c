#include "ghidra_types.h"

extern undefined4 DAT_00504c24;
extern undefined4 DAT_00504c28;
extern char s_World_00504c2c[];

// USA 00504BC4 <- EU 00504B9C (Ghidra, non-matching)
// GLOBAL DAT_00504c24 undefined4
// GLOBAL DAT_00504c28 undefined4
// GLOBAL s_World_00504c2c string

undefined4 * func_00504BC4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00504c24;
  param_1[1] = DAT_00504c28;
  param_1[2] = 0;
  *param_1 = uVar1;
  param_1[3] = 0;
  param_1[4] = 0x20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = s_World_00504c2c;
  *(undefined1 *)(param_1 + 0xd) = 7;
  *(undefined1 *)((int)param_1 + 0x35) = 4;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}

