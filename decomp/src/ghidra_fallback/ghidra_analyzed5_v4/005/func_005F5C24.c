#include "ghidra_types.h"

extern undefined4 *DAT_005f5c20;
extern undefined4 *DAT_005f5c24;

// USA 005F5C24 <- EU 005F5BFC (Ghidra, non-matching)
// GLOBAL DAT_005f5c20 undefined4 *
// GLOBAL DAT_005f5c24 undefined4 *

void func_005F5C24(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f5c20;
  *DAT_005f5c20 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f5c24;
  *DAT_005f5c24 = 0;
  puVar1[1] = 0;
  return;
}

