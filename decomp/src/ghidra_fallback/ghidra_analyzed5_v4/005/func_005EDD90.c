#include "ghidra_types.h"

extern int DAT_005eddac;
extern undefined4 *DAT_005eddb0;
extern undefined4 DAT_005eddb4;

// USA 005EDD90 <- EU 005EDD68 (Ghidra, non-matching)
// GLOBAL DAT_005eddac int
// GLOBAL DAT_005eddb0 undefined4 *
// GLOBAL DAT_005eddb4 undefined4

void func_005EDD90(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005eddb4;
  iVar1 = DAT_005eddac;
  *(undefined4 *)(DAT_005eddac + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005eddb0;
  *DAT_005eddb0 = 0;
  puVar2[1] = 0;
  puVar2[-6] = uVar3;
  puVar2[-5] = uVar3;
  puVar2[-4] = 0x80000000;
  puVar2[-3] = 0x80000000;
  return;
}

