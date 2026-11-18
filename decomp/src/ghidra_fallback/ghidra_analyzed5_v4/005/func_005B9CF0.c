#include "ghidra_types.h"

extern undefined4 *DAT_005b9d30;
extern undefined4 *DAT_005b9d34;
extern int DAT_005b9d38;
extern undefined4 *DAT_005b9d3c;
extern undefined4 DAT_005b9d40;
extern undefined4 *DAT_005b9d44;

// USA 005B9CF0 <- EU 005B9CC8 (Ghidra, non-matching)
// GLOBAL DAT_005b9d30 undefined4 *
// GLOBAL DAT_005b9d34 undefined4 *
// GLOBAL DAT_005b9d38 int
// GLOBAL DAT_005b9d3c undefined4 *
// GLOBAL DAT_005b9d40 undefined4
// GLOBAL DAT_005b9d44 undefined4 *

void func_005B9CF0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_005b9d30;
  *DAT_005b9d30 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9d34;
  *DAT_005b9d34 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b9d3c;
  iVar2 = DAT_005b9d38;
  uVar4 = DAT_005b9d3c[1];
  uVar5 = DAT_005b9d3c[2];
  puVar3 = (undefined4 *)(DAT_005b9d38 + 0x18);
  *(undefined4 *)(DAT_005b9d38 + 8) = *DAT_005b9d3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  uVar4 = DAT_005b9d40;
  *(undefined4 *)(iVar2 + 0x10) = uVar5;
  *(undefined4 *)(iVar2 + 0x14) = uVar4;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *(undefined4 *)(iVar2 + 0x20) = puVar1[2];
  *puVar3 = uVar4;
  *(undefined4 *)(iVar2 + 0x1c) = uVar5;
  uVar4 = DAT_005b9d44[1];
  uVar5 = DAT_005b9d44[2];
  *(undefined4 *)(iVar2 + 0x24) = *DAT_005b9d44;
  *(undefined4 *)(iVar2 + 0x28) = uVar4;
  *(undefined4 *)(iVar2 + 0x2c) = uVar5;
  return;
}

