#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_003d4ef0;
extern undefined4 DAT_003d4ef4;
extern undefined4 DAT_003d4ef8;
extern undefined4 *DAT_003d4efc;

// USA 003D4E78 <- EU 003D4E58 (Ghidra, non-matching)
// GLOBAL DAT_003d4ef0 uint *
// GLOBAL DAT_003d4ef4 undefined4
// GLOBAL DAT_003d4ef8 undefined4
// GLOBAL DAT_003d4efc undefined4 *

void func_003D4E78(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (((*DAT_003d4ef0 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_003d4ef0), puVar1 = DAT_003d4efc, uVar5 = DAT_003d4ef8,
     uVar4 = DAT_003d4ef4, iVar2 != 0)) {
    puVar3 = DAT_003d4efc + 4;
    *DAT_003d4efc = DAT_003d4ef4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar5;
    puVar1[3] = uVar5;
    *puVar3 = uVar5;
    puVar1[5] = uVar4;
    puVar1[6] = uVar5;
    puVar1[7] = uVar5;
    puVar1[8] = uVar5;
    puVar1[9] = uVar5;
    puVar1[10] = uVar4;
    puVar1[0xb] = uVar5;
  }
  puVar1 = DAT_003d4efc;
  uVar4 = DAT_003d4efc[1];
  uVar5 = DAT_003d4efc[2];
  uVar6 = DAT_003d4efc[3];
  uVar7 = DAT_003d4efc[4];
  uVar8 = DAT_003d4efc[5];
  uVar9 = DAT_003d4efc[6];
  uVar10 = DAT_003d4efc[7];
  *(undefined4 *)(param_1 + 0x18) = *DAT_003d4efc;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  uVar4 = puVar1[8];
  uVar5 = puVar1[9];
  uVar6 = puVar1[10];
  *(undefined4 *)(param_1 + 0x44) = puVar1[0xb];
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  return;
}

