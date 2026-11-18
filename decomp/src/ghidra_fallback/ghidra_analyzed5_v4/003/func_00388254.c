#include "ghidra_types.h"

extern int func_0026ED38(undefined4 *param_1);
extern int func_003E22CC(int param_1);
extern int func_004956E0(undefined4 *param_1);
extern undefined4 DAT_0038828c;
extern undefined4 DAT_00388290;
extern undefined4 DAT_00388294;
extern undefined4 DAT_00388298;

// USA 00388254 <- EU 00388230 (Ghidra, non-matching)
// GLOBAL DAT_0038828c undefined4
// GLOBAL DAT_00388290 undefined4
// GLOBAL DAT_00388294 undefined4
// GLOBAL DAT_00388298 undefined4

int func_00388254(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = func_0026ED38(param_1);
  *puVar3 = DAT_0038828c;
  iVar4 = func_004956E0(puVar3 + 0x14a);
  uVar1 = DAT_00388290;
  *(undefined4 *)(iVar4 + 0x2d0) = DAT_00388294;
  *(undefined4 *)(iVar4 + 0x2d4) = uVar1;
  *(undefined1 *)(iVar4 + 0x2d8) = 0;
  uVar2 = DAT_00388298;
  *(undefined4 *)(iVar4 + 0x2dc) = uVar1;
  *(undefined4 *)(iVar4 + 0x2e0) = uVar2;
  func_003E22CC(iVar4);
  return iVar4 + -0x528;
}

