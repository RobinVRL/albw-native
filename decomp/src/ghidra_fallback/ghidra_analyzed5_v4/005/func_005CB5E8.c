#include "ghidra_types.h"

extern undefined4 *DAT_005cb5e4;
extern undefined4 *DAT_005cb5e8;

// USA 005CB5E8 <- EU 005CB5C0 (Ghidra, non-matching)
// GLOBAL DAT_005cb5e4 undefined4 *
// GLOBAL DAT_005cb5e8 undefined4 *

void func_005CB5E8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb5e4;
  *DAT_005cb5e4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb5e8;
  *DAT_005cb5e8 = 0;
  puVar1[1] = 0;
  return;
}

