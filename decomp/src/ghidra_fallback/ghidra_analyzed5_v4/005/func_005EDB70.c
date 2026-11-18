#include "ghidra_types.h"

extern undefined4 *DAT_005edb6c;
extern undefined4 *DAT_005edb70;

// USA 005EDB70 <- EU 005EDB48 (Ghidra, non-matching)
// GLOBAL DAT_005edb6c undefined4 *
// GLOBAL DAT_005edb70 undefined4 *

void func_005EDB70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edb6c;
  *DAT_005edb6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edb70;
  *DAT_005edb70 = 0;
  puVar1[1] = 0;
  return;
}

