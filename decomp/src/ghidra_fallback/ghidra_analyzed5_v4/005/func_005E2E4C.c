#include "ghidra_types.h"

extern int DAT_005e2e90;
extern undefined4 DAT_005e2e94;
extern undefined4 *DAT_005e2e98;
extern undefined4 DAT_005e2e9c;
extern undefined4 DAT_005e2ea0;
extern undefined4 DAT_005e2ea4;
extern undefined4 DAT_005e2ea8;

// USA 005E2E4C <- EU 005E2E24 (Ghidra, non-matching)
// GLOBAL DAT_005e2e90 int
// GLOBAL DAT_005e2e94 undefined4
// GLOBAL DAT_005e2e98 undefined4 *
// GLOBAL DAT_005e2e9c undefined4
// GLOBAL DAT_005e2ea0 undefined4
// GLOBAL DAT_005e2ea4 undefined4
// GLOBAL DAT_005e2ea8 undefined4

void func_005E2E4C(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005e2e90;
  *(undefined4 *)(DAT_005e2e90 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar4 = DAT_005e2e9c;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  puVar3 = DAT_005e2e98;
  uVar2 = DAT_005e2e94;
  *DAT_005e2e98 = uVar4;
  puVar3[1] = uVar2;
  puVar3[2] = uVar2;
  uVar4 = DAT_005e2ea4;
  uVar2 = DAT_005e2ea0;
  puVar3[3] = DAT_005e2ea0;
  puVar3[4] = uVar2;
  puVar3[5] = uVar2;
  puVar3[6] = uVar2;
  puVar3[7] = uVar2;
  puVar3[8] = uVar4;
  *(undefined4 *)(iVar1 + 4) = DAT_005e2ea8;
  return;
}

