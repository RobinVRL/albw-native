#include "ghidra_types.h"

extern undefined4 *DAT_005b2e3c;
extern undefined4 *DAT_005b2e40;

// USA 005B2E40 <- EU 005B2E18 (Ghidra, non-matching)
// GLOBAL DAT_005b2e3c undefined4 *
// GLOBAL DAT_005b2e40 undefined4 *

void func_005B2E40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b2e3c;
  *DAT_005b2e3c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b2e40;
  *DAT_005b2e40 = 0;
  puVar1[1] = 0;
  return;
}

