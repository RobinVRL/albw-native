#include "ghidra_types.h"

extern undefined4 *DAT_005d006c;
extern undefined4 *DAT_005d0070;

// USA 005D0070 <- EU 005D0048 (Ghidra, non-matching)
// GLOBAL DAT_005d006c undefined4 *
// GLOBAL DAT_005d0070 undefined4 *

void func_005D0070(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d006c;
  *DAT_005d006c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0070;
  *DAT_005d0070 = 0;
  puVar1[1] = 0;
  return;
}

