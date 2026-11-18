#include "ghidra_types.h"

extern undefined4 *DAT_005e4850;
extern undefined4 *DAT_005e4854;

// USA 005E4854 <- EU 005E482C (Ghidra, non-matching)
// GLOBAL DAT_005e4850 undefined4 *
// GLOBAL DAT_005e4854 undefined4 *

void func_005E4854(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e4850;
  *DAT_005e4850 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4854;
  *DAT_005e4854 = 0;
  puVar1[1] = 0;
  return;
}

