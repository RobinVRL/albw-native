#include "ghidra_types.h"

extern undefined4 DAT_0010c670;
extern undefined4 DAT_0010c674;
extern undefined4 DAT_0010c678;

// USA 0010C5EC <- EU 0010C5EC (Ghidra, non-matching)
// GLOBAL DAT_0010c670 undefined4
// GLOBAL DAT_0010c674 undefined4
// GLOBAL DAT_0010c678 undefined4

undefined4 func_0010C5EC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_0010c674;
  uVar1 = DAT_0010c670;
  param_1[0xc] = DAT_0010c670;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar2;
  uVar3 = DAT_0010c678;
  param_1[0x15] = 0;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xb] = uVar1;
  param_1[10] = uVar1;
  param_1[9] = uVar1;
  param_1[8] = uVar1;
  param_1[7] = uVar1;
  param_1[6] = uVar1;
  param_1[5] = uVar1;
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  param_1[1] = uVar1;
  *param_1 = uVar1;
  return (undefined4)param_1;
}

