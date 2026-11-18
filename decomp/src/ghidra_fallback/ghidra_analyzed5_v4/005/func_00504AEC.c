#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_00504b78;
extern int DAT_00504b7c;
extern undefined4 DAT_00504b80;
extern undefined4 *DAT_00504b84;
extern undefined4 DAT_00504b88;
extern undefined4 DAT_00504b8c;
extern undefined4 DAT_00504b90;
extern undefined4 DAT_00504b94;
extern undefined4 DAT_00504b98;

// USA 00504AEC <- EU 00504AC4 (Ghidra, non-matching)
// GLOBAL DAT_00504b78 undefined4
// GLOBAL DAT_00504b7c int
// GLOBAL DAT_00504b80 undefined4
// GLOBAL DAT_00504b84 undefined4 *
// GLOBAL DAT_00504b88 undefined4
// GLOBAL DAT_00504b8c undefined4
// GLOBAL DAT_00504b90 undefined4
// GLOBAL DAT_00504b94 undefined4
// GLOBAL DAT_00504b98 undefined4

undefined4 * func_00504AEC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = DAT_00504b84;
  uVar4 = DAT_00504b78;
  param_1[4] = *(undefined4 *)(DAT_00504b7c + 8);
  uVar1 = DAT_00504b80;
  param_1[5] = uVar4;
  param_1[6] = uVar1;
  func_001119F4(param_1 + 7,puVar2);
  uVar3 = DAT_00504b94;
  uVar1 = DAT_00504b8c;
  param_1[6] = DAT_00504b88;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar4;
  uVar1 = DAT_00504b90;
  param_1[0x19] = uVar4;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar4;
  uVar4 = DAT_00504b98;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  return param_1;
}

