#include "ghidra_types.h"

extern undefined4 *DAT_005eb4ac;
extern undefined4 *DAT_005eb4b0;

// USA 005EB4B0 <- EU 005EB488 (Ghidra, non-matching)
// GLOBAL DAT_005eb4ac undefined4 *
// GLOBAL DAT_005eb4b0 undefined4 *

void func_005EB4B0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb4ac;
  *DAT_005eb4ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb4b0;
  *DAT_005eb4b0 = 0;
  puVar1[1] = 0;
  return;
}

