#include "ghidra_types.h"

extern int DAT_005ab074;
extern undefined4 *DAT_005ab078;
extern undefined4 DAT_005ab07c;
extern undefined4 DAT_005ab080;
extern undefined4 DAT_005ab084;
extern undefined4 *DAT_005ab088;

// USA 005AB038 <- EU 005AB010 (Ghidra, non-matching)
// GLOBAL DAT_005ab074 int
// GLOBAL DAT_005ab078 undefined4 *
// GLOBAL DAT_005ab07c undefined4
// GLOBAL DAT_005ab080 undefined4
// GLOBAL DAT_005ab084 undefined4
// GLOBAL DAT_005ab088 undefined4 *

void func_005AB038(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_005ab084;
  iVar1 = DAT_005ab074;
  *(undefined4 *)(DAT_005ab074 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005ab07c;
  puVar2 = DAT_005ab078;
  *DAT_005ab078 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005ab088;
  uVar4 = DAT_005ab080;
  DAT_005ab088[2] = uVar5;
  puVar2[3] = uVar5;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar5;
  puVar2[6] = uVar5;
  puVar2[7] = uVar5;
  puVar2[10] = uVar5;
  puVar2[0xb] = uVar5;
  puVar2[8] = uVar3;
  puVar2[9] = uVar4;
  return;
}

