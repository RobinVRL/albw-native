#include "ghidra_types.h"

extern undefined4 *DAT_005cb840;
extern undefined4 *DAT_005cb844;
extern undefined4 DAT_005cb848;
extern undefined4 DAT_005cb84c;

// USA 005CB834 <- EU 005CB80C (Ghidra, non-matching)
// GLOBAL DAT_005cb840 undefined4 *
// GLOBAL DAT_005cb844 undefined4 *
// GLOBAL DAT_005cb848 undefined4
// GLOBAL DAT_005cb84c undefined4

void func_005CB834(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_005cb848;
  puVar1 = DAT_005cb840;
  *DAT_005cb840 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = DAT_005cb84c;
  puVar1 = DAT_005cb844;
  *DAT_005cb844 = 0;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  return;
}

