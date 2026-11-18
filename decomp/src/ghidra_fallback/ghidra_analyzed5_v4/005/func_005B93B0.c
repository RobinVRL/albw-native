#include "ghidra_types.h"

extern undefined4 *DAT_005b93ac;
extern undefined4 *DAT_005b93b0;

// USA 005B93B0 <- EU 005B9388 (Ghidra, non-matching)
// GLOBAL DAT_005b93ac undefined4 *
// GLOBAL DAT_005b93b0 undefined4 *

void func_005B93B0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b93ac;
  *DAT_005b93ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b93b0;
  *DAT_005b93b0 = 0;
  puVar1[1] = 0;
  return;
}

