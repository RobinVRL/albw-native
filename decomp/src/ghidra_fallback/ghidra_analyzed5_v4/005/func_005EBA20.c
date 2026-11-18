#include "ghidra_types.h"

extern undefined4 *DAT_005eba1c;
extern undefined4 *DAT_005eba20;

// USA 005EBA20 <- EU 005EB9F8 (Ghidra, non-matching)
// GLOBAL DAT_005eba1c undefined4 *
// GLOBAL DAT_005eba20 undefined4 *

void func_005EBA20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eba1c;
  *DAT_005eba1c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eba20;
  *DAT_005eba20 = 0;
  puVar1[1] = 0;
  return;
}

