#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int DAT_005efd3c;
extern undefined4 *DAT_005efd40;
extern uint *DAT_005efd44;
extern undefined4 DAT_005efd48;
extern undefined4 *DAT_005efd4c;
extern undefined4 *DAT_005efd50;
extern uint *DAT_005efd54;
extern undefined4 DAT_005efd58;
extern undefined4 *DAT_005efd5c;
extern undefined4 *DAT_005efd60;

// USA 005EFC2C <- EU 005EFC04 (Ghidra, non-matching)
// GLOBAL DAT_005efd3c int
// GLOBAL DAT_005efd40 undefined4 *
// GLOBAL DAT_005efd44 uint *
// GLOBAL DAT_005efd48 undefined4
// GLOBAL DAT_005efd4c undefined4 *
// GLOBAL DAT_005efd50 undefined4 *
// GLOBAL DAT_005efd54 uint *
// GLOBAL DAT_005efd58 undefined4
// GLOBAL DAT_005efd5c undefined4 *
// GLOBAL DAT_005efd60 undefined4 *

void func_005EFC2C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  iVar4 = DAT_005efd3c;
  *(undefined4 *)(DAT_005efd3c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
  uVar8 = DAT_005efd48;
  puVar1 = DAT_005efd40;
  *DAT_005efd40 = 0;
  puVar1[1] = 0;
  if (((*DAT_005efd44 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_005efd44), puVar1 = DAT_005efd4c, iVar4 != 0)) {
    *DAT_005efd4c = uVar8;
    puVar1[1] = uVar8;
    puVar1[2] = uVar8;
  }
  puVar1 = DAT_005efd50;
  uVar5 = DAT_005efd4c[1];
  uVar6 = DAT_005efd4c[2];
  puVar7 = DAT_005efd50 + 3;
  *DAT_005efd50 = *DAT_005efd4c;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  if (((*DAT_005efd54 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_005efd54), puVar2 = DAT_005efd5c, uVar5 = DAT_005efd58,
     iVar4 != 0)) {
    *DAT_005efd5c = DAT_005efd58;
    puVar2[1] = uVar8;
    puVar2[2] = uVar8;
    puVar2[3] = uVar8;
    puVar2[4] = uVar5;
    puVar2[5] = uVar8;
    puVar2[6] = uVar8;
    puVar2[7] = uVar8;
    puVar2[8] = uVar5;
  }
  puVar3 = DAT_005efd60;
  puVar2 = DAT_005efd5c;
  *puVar7 = *DAT_005efd5c;
  puVar1[4] = puVar2[1];
  puVar1[5] = puVar2[2];
  puVar1[6] = puVar2[3];
  puVar1[7] = puVar2[4];
  puVar1[8] = puVar2[5];
  puVar1[9] = puVar2[6];
  puVar1[10] = puVar2[7];
  puVar1[0xb] = puVar2[8];
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}

