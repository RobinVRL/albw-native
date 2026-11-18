#include "ghidra_types.h"

extern undefined4 *DAT_005b93e0;
extern undefined4 DAT_005b93e4;

// USA 005B93DC <- EU 005B93B4 (Ghidra, non-matching)
// GLOBAL DAT_005b93e0 undefined4 *
// GLOBAL DAT_005b93e4 undefined4

void func_005B93DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b93e0;
  *DAT_005b93e0 = DAT_005b93e4;
  puVar1[1] = puVar1;
  puVar1[2] = puVar1;
  puVar1[3] = puVar1;
  return;
}

