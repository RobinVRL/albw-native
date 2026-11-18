#include "ghidra_types.h"

extern int DAT_005a1418;
extern undefined4 DAT_005a141c;

// USA 005A1414 <- EU 005A13EC (Ghidra, non-matching)
// GLOBAL DAT_005a1418 int
// GLOBAL DAT_005a141c undefined4

void func_005A1414(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_005a1418;
  *(undefined4 *)(DAT_005a1418 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  uVar2 = DAT_005a141c;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}

