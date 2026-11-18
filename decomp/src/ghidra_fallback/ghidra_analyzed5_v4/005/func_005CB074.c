#include "ghidra_types.h"

extern undefined4 *DAT_005cb070;
extern undefined4 *DAT_005cb074;

// USA 005CB074 <- EU 005CB04C (Ghidra, non-matching)
// GLOBAL DAT_005cb070 undefined4 *
// GLOBAL DAT_005cb074 undefined4 *

void func_005CB074(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb070;
  *DAT_005cb070 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb074;
  *DAT_005cb074 = 0;
  puVar1[1] = 0;
  return;
}

