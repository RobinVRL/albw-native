#include "ghidra_types.h"

extern int func_003CBB00(undefined1 *param_1);
extern undefined4 DAT_00491304;
extern undefined4 DAT_00491308;
extern undefined4 DAT_0049130c;

// USA 00491260 <- EU 00491238 (Ghidra, non-matching)
// GLOBAL DAT_00491304 undefined4
// GLOBAL DAT_00491308 undefined4
// GLOBAL DAT_0049130c undefined4

undefined1 * func_00491260(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *param_1 = DAT_00491304;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  param_1[3] = 1;
  param_1[2] = 5;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 6;
  param_1[7] = 7;
  param_1[6] = 6;
  param_1[8] = 7;
  param_1[9] = 0;
  uVar1 = DAT_00491308;
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  uVar1 = DAT_0049130c;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 6;
  param_1[0x11] = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = (undefined1 *)func_003CBB00((undefined1 *)(param_1 + 0x1a));
  puVar2[0x56] = 5;
  *puVar2 = 1;
  puVar2[0x32] = 6;
  puVar2[0x50] = 0xf;
  puVar2[0x3c] = 0;
  *(undefined4 *)(puVar2 + 0x44) = 0xffffffff;
  return puVar2 + -0x68;
}

