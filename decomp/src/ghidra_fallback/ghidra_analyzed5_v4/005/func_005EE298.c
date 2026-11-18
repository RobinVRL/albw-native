#include "ghidra_types.h"

extern int DAT_005ee2ac;
extern undefined4 DAT_005ee2b0;
extern undefined4 DAT_005ee2b4;
extern undefined4 DAT_005ee2b8;
extern undefined4 DAT_005ee2bc;

// USA 005EE298 <- EU 005EE270 (Ghidra, non-matching)
// GLOBAL DAT_005ee2ac int
// GLOBAL DAT_005ee2b0 undefined4
// GLOBAL DAT_005ee2b4 undefined4
// GLOBAL DAT_005ee2b8 undefined4
// GLOBAL DAT_005ee2bc undefined4

void func_005EE298(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_005ee2ac;
  *(undefined4 *)(DAT_005ee2ac + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  uVar2 = DAT_005ee2b0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  uVar5 = DAT_005ee2bc;
  uVar4 = DAT_005ee2b8;
  uVar3 = DAT_005ee2b4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
  return;
}

