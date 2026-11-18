#include "ghidra_types.h"

extern undefined4 *DAT_005ae824;
extern undefined4 *DAT_005ae828;

// USA 005AE828 <- EU 005AE800 (Ghidra, non-matching)
// GLOBAL DAT_005ae824 undefined4 *
// GLOBAL DAT_005ae828 undefined4 *

void func_005AE828(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae824;
  *DAT_005ae824 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae828;
  *DAT_005ae828 = 0;
  puVar1[1] = 0;
  return;
}

