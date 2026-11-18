#include "ghidra_types.h"

extern undefined4 *DAT_005cb610;
extern undefined4 *DAT_005cb614;

// USA 005CB614 <- EU 005CB5EC (Ghidra, non-matching)
// GLOBAL DAT_005cb610 undefined4 *
// GLOBAL DAT_005cb614 undefined4 *

void func_005CB614(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb610;
  *DAT_005cb610 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb614;
  *DAT_005cb614 = 0;
  puVar1[1] = 0;
  return;
}

