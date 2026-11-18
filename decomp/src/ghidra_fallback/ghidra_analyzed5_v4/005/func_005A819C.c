#include "ghidra_types.h"

extern undefined4 *DAT_005a8190;
extern undefined4 DAT_005a8194;
extern undefined4 DAT_005a8198;
extern undefined4 DAT_005a819c;

// USA 005A819C <- EU 005A8174 (Ghidra, non-matching)
// GLOBAL DAT_005a8190 undefined4 *
// GLOBAL DAT_005a8194 undefined4
// GLOBAL DAT_005a8198 undefined4
// GLOBAL DAT_005a819c undefined4

void func_005A819C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_005a819c;
  uVar3 = DAT_005a8198;
  uVar2 = DAT_005a8194;
  puVar1 = DAT_005a8190;
  *DAT_005a8190 = 1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

