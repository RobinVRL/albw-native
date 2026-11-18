#include "ghidra_types.h"

extern undefined4 *DAT_005f8f40;
extern undefined4 *DAT_005f8f44;

// USA 005F8F44 <- EU 005F8F1C (Ghidra, non-matching)
// GLOBAL DAT_005f8f40 undefined4 *
// GLOBAL DAT_005f8f44 undefined4 *

void func_005F8F44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f8f40;
  *DAT_005f8f40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8f44;
  *DAT_005f8f44 = 0;
  puVar1[1] = 0;
  return;
}

