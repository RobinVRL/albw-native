#include "ghidra_types.h"

extern undefined4 *DAT_005b8f3c;
extern undefined4 *DAT_005b8f40;

// USA 005B8F40 <- EU 005B8F18 (Ghidra, non-matching)
// GLOBAL DAT_005b8f3c undefined4 *
// GLOBAL DAT_005b8f40 undefined4 *

void func_005B8F40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8f3c;
  *DAT_005b8f3c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8f40;
  *DAT_005b8f40 = 0;
  puVar1[1] = 0;
  return;
}

