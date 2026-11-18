#include "ghidra_types.h"

extern undefined4 DAT_003d4d0c;
extern undefined4 DAT_003d4d10;
extern undefined4 DAT_003d4d14;

// USA 003D4CD4 <- EU 003D4CB4 (Ghidra, non-matching)
// GLOBAL DAT_003d4d0c undefined4
// GLOBAL DAT_003d4d10 undefined4
// GLOBAL DAT_003d4d14 undefined4

undefined4 func_003D4CD4(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0x28;
  param_1[1] = 0x24;
  param_1[2] = 0x28;
  param_1[3] = 0x91;
  param_1[4] = 0x91;
  param_1[5] = 0x91;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar1 = DAT_003d4d0c;
  param_1[7] = 0x8d;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  uVar3 = DAT_003d4d14;
  uVar2 = DAT_003d4d10;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar3;
  return (undefined4)param_1;
}

