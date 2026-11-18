#include "ghidra_types.h"

extern undefined4 *DAT_004f54ec;
extern undefined4 DAT_004f54f0;
extern undefined4 DAT_004f54f4;

// USA 004F5494 <- EU 004F546C (Ghidra, non-matching)
// GLOBAL DAT_004f54ec undefined4 *
// GLOBAL DAT_004f54f0 undefined4
// GLOBAL DAT_004f54f4 undefined4

undefined4 func_004F5494(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 9) = 0x1f;
  puVar1 = DAT_004f54ec;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  uVar3 = DAT_004f54f4;
  uVar2 = DAT_004f54f0;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = *puVar1;
  param_1[7] = puVar1[1];
  param_1[8] = puVar1[2];
  param_1[0xb] = uVar2;
  param_1[0xd] = 0;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar2;
  return (undefined4)param_1;
}

