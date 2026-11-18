#include "ghidra_types.h"

extern undefined4 *DAT_005bd894;
extern undefined4 *DAT_005bd898;

// USA 005BD898 <- EU 005BD870 (Ghidra, non-matching)
// GLOBAL DAT_005bd894 undefined4 *
// GLOBAL DAT_005bd898 undefined4 *

void func_005BD898(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bd894;
  *DAT_005bd894 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd898;
  *DAT_005bd898 = 0;
  puVar1[1] = 0;
  return;
}

