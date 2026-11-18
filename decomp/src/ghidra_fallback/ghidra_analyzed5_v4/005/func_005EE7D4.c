#include "ghidra_types.h"

extern undefined4 *DAT_005ee83c;
extern undefined4 DAT_005ee840;
extern undefined4 *DAT_005ee844;
extern undefined4 DAT_005ee848;
extern undefined4 DAT_005ee84c;
extern undefined4 DAT_005ee850;
extern undefined4 DAT_005ee854;
extern undefined4 DAT_005ee858;
extern undefined4 DAT_005ee85c;

// USA 005EE7D4 <- EU 005EE7AC (Ghidra, non-matching)
// GLOBAL DAT_005ee83c undefined4 *
// GLOBAL DAT_005ee840 undefined4
// GLOBAL DAT_005ee844 undefined4 *
// GLOBAL DAT_005ee848 undefined4
// GLOBAL DAT_005ee84c undefined4
// GLOBAL DAT_005ee850 undefined4
// GLOBAL DAT_005ee854 undefined4
// GLOBAL DAT_005ee858 undefined4
// GLOBAL DAT_005ee85c undefined4

void func_005EE7D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_005ee83c;
  DAT_005ee83c[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  uVar2 = DAT_005ee840;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar5 = DAT_005ee850;
  puVar3 = DAT_005ee844;
  *DAT_005ee844 = DAT_005ee848;
  puVar3[1] = uVar2;
  puVar3[2] = uVar2;
  uVar4 = DAT_005ee84c;
  puVar3[3] = DAT_005ee84c;
  puVar3[4] = uVar4;
  puVar3[5] = uVar4;
  puVar3[6] = uVar4;
  puVar3[7] = uVar4;
  puVar3[8] = uVar5;
  *puVar1 = DAT_005ee854;
  puVar3[9] = DAT_005ee858;
  puVar3[10] = uVar4;
  puVar3[0xb] = uVar4;
  uVar4 = DAT_005ee85c;
  puVar3[0xc] = DAT_005ee85c;
  puVar3[0xd] = uVar4;
  puVar3[0xe] = uVar2;
  return;
}

