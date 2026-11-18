#include "ghidra_types.h"

extern undefined4 *DAT_005eb4d8;
extern undefined4 *DAT_005eb4dc;

// USA 005EB4DC <- EU 005EB4B4 (Ghidra, non-matching)
// GLOBAL DAT_005eb4d8 undefined4 *
// GLOBAL DAT_005eb4dc undefined4 *

void func_005EB4DC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb4d8;
  *DAT_005eb4d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb4dc;
  *DAT_005eb4dc = 0;
  puVar1[1] = 0;
  return;
}

