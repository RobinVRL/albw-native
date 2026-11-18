#include "ghidra_types.h"

extern int *DAT_00113378;
extern int DAT_0011337c;
extern undefined4 DAT_00113380;
extern undefined4 DAT_00113384;

// USA 001132E8 <- EU 001132E8 (Ghidra, non-matching)
// GLOBAL DAT_00113378 int *
// GLOBAL DAT_0011337c int
// GLOBAL DAT_00113380 undefined4
// GLOBAL DAT_00113384 undefined4

undefined4 * func_001132E8(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_0011337c;
  if ((char)param_3[2] == '\0') {
    uVar5 = 0x80000000;
  }
  else {
    uVar5 = 0;
  }
  uVar4 = DAT_0011337c - 0x38;
  iVar6 = *DAT_00113378;
  iVar3 = *param_3;
  *param_2 = 1;
  param_2[1] = iVar1;
  param_2[2] = uVar5 | iVar3 + iVar6 * -8;
  uVar2 = DAT_00113380;
  param_2[3] = uVar4;
  param_2[4] = param_3[1];
  uVar4 = uVar4 | 8;
  param_2[5] = iVar1 + -0x37;
  param_2[6] = 0;
  param_2[7] = uVar2;
  param_2[8] = 1;
  param_2[9] = uVar4;
  param_2[10] = 1;
  param_2[0xb] = uVar2;
  param_2[0xc] = 1;
  param_2[0xd] = uVar4 + 2;
  uVar2 = DAT_00113384;
  param_2[0xe] = 0;
  param_2[0xf] = uVar2;
  param_2[0x10] = 0;
  param_2[0x11] = uVar2;
  return param_2 + 0x12;
}

