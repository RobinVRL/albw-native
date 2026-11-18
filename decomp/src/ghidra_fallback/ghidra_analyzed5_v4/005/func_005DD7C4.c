#include "ghidra_types.h"

extern undefined4 *DAT_005dd7c0;
extern undefined4 *DAT_005dd7c4;

// USA 005DD7C4 <- EU 005DD79C (Ghidra, non-matching)
// GLOBAL DAT_005dd7c0 undefined4 *
// GLOBAL DAT_005dd7c4 undefined4 *

void func_005DD7C4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005dd7c0;
  *DAT_005dd7c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005dd7c4;
  *DAT_005dd7c4 = 0;
  puVar1[1] = 0;
  return;
}

