#include "ghidra_types.h"

extern undefined4 *DAT_003772c8;
extern undefined4 DAT_003772cc;
extern undefined4 DAT_003772d0;
extern undefined4 DAT_003772d4;

// USA 00377288 <- EU 00377264 (Ghidra, non-matching)
// GLOBAL DAT_003772c8 undefined4 *
// GLOBAL DAT_003772cc undefined4
// GLOBAL DAT_003772d0 undefined4
// GLOBAL DAT_003772d4 undefined4

undefined4 func_00377288(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_003772c8;
  param_1[1] = DAT_003772cc;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  param_1[2] = param_1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar2 = DAT_003772d4;
  *param_1 = DAT_003772d0;
  param_1[5] = 0;
  param_1[6] = uVar2;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x1f;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  return (undefined4)param_1;
}

