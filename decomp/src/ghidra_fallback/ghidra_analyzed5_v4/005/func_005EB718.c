#include "ghidra_types.h"

extern undefined4 *DAT_005eb714;
extern undefined4 *DAT_005eb718;

// USA 005EB718 <- EU 005EB6F0 (Ghidra, non-matching)
// GLOBAL DAT_005eb714 undefined4 *
// GLOBAL DAT_005eb718 undefined4 *

void func_005EB718(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb714;
  *DAT_005eb714 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb718;
  *DAT_005eb718 = 0;
  puVar1[1] = 0;
  return;
}

