#include "ghidra_types.h"

extern undefined4 *DAT_005eb454;
extern undefined4 *DAT_005eb458;

// USA 005EB458 <- EU 005EB430 (Ghidra, non-matching)
// GLOBAL DAT_005eb454 undefined4 *
// GLOBAL DAT_005eb458 undefined4 *

void func_005EB458(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb454;
  *DAT_005eb454 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb458;
  *DAT_005eb458 = 0;
  puVar1[1] = 0;
  return;
}

