#include "ghidra_types.h"

extern int DAT_005edab8;
extern undefined4 *DAT_005edabc;
extern undefined4 DAT_005edac0;

// USA 005EDAAC <- EU 005EDA84 (Ghidra, non-matching)
// GLOBAL DAT_005edab8 int
// GLOBAL DAT_005edabc undefined4 *
// GLOBAL DAT_005edac0 undefined4

void func_005EDAAC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005edac0;
  iVar1 = DAT_005edab8;
  *(undefined4 *)(DAT_005edab8 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  puVar2 = DAT_005edabc;
  *DAT_005edabc = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar3;
  puVar2[3] = uVar3;
  return;
}

