#include "ghidra_types.h"

extern undefined4 *DAT_005bd83c;
extern undefined4 *DAT_005bd840;

// USA 005BD840 <- EU 005BD818 (Ghidra, non-matching)
// GLOBAL DAT_005bd83c undefined4 *
// GLOBAL DAT_005bd840 undefined4 *

void func_005BD840(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bd83c;
  *DAT_005bd83c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd840;
  *DAT_005bd840 = 0;
  puVar1[1] = 0;
  return;
}

