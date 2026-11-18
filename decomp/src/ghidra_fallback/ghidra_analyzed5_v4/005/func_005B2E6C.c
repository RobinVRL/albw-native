#include "ghidra_types.h"

extern undefined4 *DAT_005b2e68;
extern undefined4 *DAT_005b2e6c;

// USA 005B2E6C <- EU 005B2E44 (Ghidra, non-matching)
// GLOBAL DAT_005b2e68 undefined4 *
// GLOBAL DAT_005b2e6c undefined4 *

void func_005B2E6C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b2e68;
  *DAT_005b2e68 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b2e6c;
  *DAT_005b2e6c = 0;
  puVar1[1] = 0;
  return;
}

