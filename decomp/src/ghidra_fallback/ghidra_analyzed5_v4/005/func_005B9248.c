#include "ghidra_types.h"

extern undefined4 *DAT_005b9244;
extern undefined4 *DAT_005b9248;

// USA 005B9248 <- EU 005B9220 (Ghidra, non-matching)
// GLOBAL DAT_005b9244 undefined4 *
// GLOBAL DAT_005b9248 undefined4 *

void func_005B9248(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9244;
  *DAT_005b9244 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9248;
  *DAT_005b9248 = 0;
  puVar1[1] = 0;
  return;
}

