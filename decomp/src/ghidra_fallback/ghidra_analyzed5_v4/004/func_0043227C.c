#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 DAT_00432340;
extern undefined4 DAT_00432344;
extern undefined4 DAT_00432348;
extern undefined4 DAT_0043234c;
extern undefined4 DAT_00432350;

// USA 0043227C <- EU 0043225C (Ghidra, non-matching)
// GLOBAL DAT_00432340 undefined4
// GLOBAL DAT_00432344 undefined4
// GLOBAL DAT_00432348 undefined4
// GLOBAL DAT_0043234c undefined4
// GLOBAL DAT_00432350 undefined4

undefined4 * func_0043227C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00432344;
  *param_1 = DAT_00432340;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  uVar1 = DAT_00432348;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  uVar1 = DAT_0043234c;
  param_1[0x10] = DAT_0043234c;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0xc;
  uVar1 = DAT_00432350;
  param_1[0x16] = 0;
  *param_1 = uVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x1f;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = param_1 + 0x1e;
  param_1[0x1e] = param_1 + 0x1e;
  param_1[0x21] = 0;
  func_00110490(param_1 + 0x22,0x400);
  param_1[0x123] = (int)param_1 + 0x86;
  return param_1;
}

