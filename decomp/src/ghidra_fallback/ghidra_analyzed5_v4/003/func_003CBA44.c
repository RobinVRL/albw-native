#include "ghidra_types.h"

extern undefined4 DAT_003cbaa4;
extern int DAT_003cbaa8;
extern undefined4 DAT_003cbaac;
extern undefined4 DAT_003cbab0;
extern uint DAT_003cbab4;
extern int DAT_003cbab8;
extern undefined4 DAT_003cbabc;

// USA 003CBA44 <- EU 003CBA20 (Ghidra, non-matching)
// GLOBAL DAT_003cbaa4 undefined4
// GLOBAL DAT_003cbaa8 int
// GLOBAL DAT_003cbaac undefined4
// GLOBAL DAT_003cbab0 undefined4
// GLOBAL DAT_003cbab4 uint
// GLOBAL DAT_003cbab8 int
// GLOBAL DAT_003cbabc undefined4

undefined4 * func_003CBA44(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar2 = DAT_003cbaa8;
  uVar1 = DAT_003cbaa4;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = iVar2;
  uVar1 = DAT_003cbaac;
  param_1[3] = iVar2 + -0xe10000;
  uVar3 = DAT_003cbab0;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar5 = DAT_003cbab4;
  param_1[6] = 0;
  param_1[7] = uVar5;
  param_1[8] = 0;
  param_1[9] = uVar5 | (int)uVar5 >> 8;
  iVar2 = DAT_003cbab8;
  param_1[10] = 0xf40;
  puVar4 = param_1 + 0xc;
  param_1[0xb] = iVar2;
  if (param_2 != 0) {
    uVar5 = iVar2 + 10;
    *puVar4 = 1;
    param_1[0xd] = uVar5;
    param_1[0xe] = 1;
    param_1[0xf] = uVar5 & 0xfffffffe;
    puVar4 = param_1 + 0x10;
  }
  uVar1 = DAT_003cbabc;
  *puVar4 = 0xf;
  puVar4[1] = uVar1;
  puVar4[2] = 0xf;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  return puVar4 + 6;
}

