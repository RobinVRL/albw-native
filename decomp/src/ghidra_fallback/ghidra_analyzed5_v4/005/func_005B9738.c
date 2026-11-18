#include "ghidra_types.h"

extern undefined1 *DAT_005b9738;

// USA 005B9738 <- EU 005B9710 (Ghidra, non-matching)
// GLOBAL DAT_005b9738 undefined1 *

void func_005B9738(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_005b9738;
  *DAT_005b9738 = 0x7f;
  puVar1[1] = 0x7f;
  puVar1[2] = 0x7f;
  puVar1[3] = 0x7f;
  puVar1[4] = 0x7f;
  return;
}

