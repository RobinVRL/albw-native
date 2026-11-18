#include "ghidra_types.h"

extern undefined4 *DAT_005cbed4;
extern undefined4 *DAT_005cbed8;

// USA 005CBED8 <- EU 005CBEB0 (Ghidra, non-matching)
// GLOBAL DAT_005cbed4 undefined4 *
// GLOBAL DAT_005cbed8 undefined4 *

void func_005CBED8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cbed4;
  *DAT_005cbed4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbed8;
  *DAT_005cbed8 = 0;
  puVar1[1] = 0;
  return;
}

