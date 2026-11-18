#include "ghidra_types.h"

extern undefined4 *DAT_005e4a20;
extern undefined4 *DAT_005e4a24;

// USA 005E4A24 <- EU 005E49FC (Ghidra, non-matching)
// GLOBAL DAT_005e4a20 undefined4 *
// GLOBAL DAT_005e4a24 undefined4 *

void func_005E4A24(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4a20;
  *DAT_005e4a20 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4a24;
  *DAT_005e4a24 = 0;
  puVar1[1] = 0;
  return;
}

