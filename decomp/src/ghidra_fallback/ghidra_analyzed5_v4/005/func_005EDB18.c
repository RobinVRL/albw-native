#include "ghidra_types.h"

extern undefined4 *DAT_005edb14;
extern undefined4 *DAT_005edb18;

// USA 005EDB18 <- EU 005EDAF0 (Ghidra, non-matching)
// GLOBAL DAT_005edb14 undefined4 *
// GLOBAL DAT_005edb18 undefined4 *

void func_005EDB18(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edb14;
  *DAT_005edb14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edb18;
  *DAT_005edb18 = 0;
  puVar1[1] = 0;
  return;
}

