#include "ghidra_types.h"

extern undefined4 *DAT_005cfd0c;
extern undefined4 *DAT_005cfd10;
extern undefined4 DAT_005cfd14;
extern undefined4 *DAT_005cfd18;
extern undefined4 DAT_005cfd1c;
extern undefined4 DAT_005cfd20;
extern undefined4 DAT_005cfd24;
extern undefined4 DAT_005cfd28;

// USA 005CFC9C <- EU 005CFC74 (Ghidra, non-matching)
// GLOBAL DAT_005cfd0c undefined4 *
// GLOBAL DAT_005cfd10 undefined4 *
// GLOBAL DAT_005cfd14 undefined4
// GLOBAL DAT_005cfd18 undefined4 *
// GLOBAL DAT_005cfd1c undefined4
// GLOBAL DAT_005cfd20 undefined4
// GLOBAL DAT_005cfd24 undefined4
// GLOBAL DAT_005cfd28 undefined4

void func_005CFC9C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_005cfd1c;
  puVar1 = DAT_005cfd0c;
  *DAT_005cfd0c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar4 = DAT_005cfd20;
  puVar1 = DAT_005cfd10;
  *DAT_005cfd10 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cfd18;
  uVar2 = DAT_005cfd14;
  *DAT_005cfd18 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar2;
  uVar3 = DAT_005cfd24;
  puVar1[4] = uVar2;
  uVar4 = DAT_005cfd28;
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  puVar1[7] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar2;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar2;
  puVar1[0xe] = uVar3;
  puVar1[0xf] = uVar2;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = uVar4;
  puVar1[0x12] = uVar3;
  puVar1[0x13] = uVar2;
  return;
}

