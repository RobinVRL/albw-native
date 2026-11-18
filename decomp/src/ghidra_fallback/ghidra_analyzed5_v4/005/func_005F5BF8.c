#include "ghidra_types.h"

extern undefined4 *DAT_005f5bf4;
extern undefined4 *DAT_005f5bf8;

// USA 005F5BF8 <- EU 005F5BD0 (Ghidra, non-matching)
// GLOBAL DAT_005f5bf4 undefined4 *
// GLOBAL DAT_005f5bf8 undefined4 *

void func_005F5BF8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f5bf4;
  *DAT_005f5bf4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f5bf8;
  *DAT_005f5bf8 = 0;
  puVar1[1] = 0;
  return;
}

