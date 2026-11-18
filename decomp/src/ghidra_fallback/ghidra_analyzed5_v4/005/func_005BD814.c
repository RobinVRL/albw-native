#include "ghidra_types.h"

extern undefined4 *DAT_005bd810;
extern undefined4 *DAT_005bd814;

// USA 005BD814 <- EU 005BD7EC (Ghidra, non-matching)
// GLOBAL DAT_005bd810 undefined4 *
// GLOBAL DAT_005bd814 undefined4 *

void func_005BD814(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005bd810;
  *DAT_005bd810 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd814;
  *DAT_005bd814 = 0;
  puVar1[1] = 0;
  return;
}

