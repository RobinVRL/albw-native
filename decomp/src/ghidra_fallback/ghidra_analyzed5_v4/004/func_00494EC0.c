#include "ghidra_types.h"

extern undefined4 DAT_00494efc;
extern undefined1 *DAT_00494f00;
extern undefined4 *DAT_00494f04;
extern undefined4 *DAT_00494f08;
extern undefined4 DAT_00494f0c;
extern undefined4 DAT_00494f10;
extern undefined4 DAT_00494f14;
extern undefined4 DAT_00494f18;
extern undefined4 DAT_00494f1c;
extern undefined4 DAT_00494f20;
extern undefined4 DAT_00494f24;

// USA 00494EC0 <- EU 00494E98 (Ghidra, non-matching)
// GLOBAL DAT_00494efc undefined4
// GLOBAL DAT_00494f00 undefined1 *
// GLOBAL DAT_00494f04 undefined4 *
// GLOBAL DAT_00494f08 undefined4 *
// GLOBAL DAT_00494f0c undefined4
// GLOBAL DAT_00494f10 undefined4
// GLOBAL DAT_00494f14 undefined4
// GLOBAL DAT_00494f18 undefined4
// GLOBAL DAT_00494f1c undefined4
// GLOBAL DAT_00494f20 undefined4
// GLOBAL DAT_00494f24 undefined4

undefined4 func_00494EC0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = DAT_00494f0c;
  *param_1 = DAT_00494efc;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  uVar6 = DAT_00494f20;
  uVar5 = DAT_00494f1c;
  uVar4 = DAT_00494f18;
  uVar3 = DAT_00494f14;
  uVar2 = DAT_00494f10;
  *(undefined1 *)(param_1 + 0x22) = *DAT_00494f00;
  param_1[0x23] = *DAT_00494f04;
  param_1[0x24] = *DAT_00494f08;
  *param_1 = DAT_00494f24;
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  param_1[0x28] = uVar4;
  param_1[0x29] = uVar5;
  param_1[0x2a] = uVar6;
  return (undefined4)param_1;
}

