#include "ghidra_types.h"

extern undefined4 *DAT_0059369c;
extern undefined4 *DAT_005936a0;

// USA 005936A0 <- EU 00593678 (Ghidra, non-matching)
// GLOBAL DAT_0059369c undefined4 *
// GLOBAL DAT_005936a0 undefined4 *

void func_005936A0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059369c;
  *DAT_0059369c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005936a0;
  *DAT_005936a0 = 0;
  puVar1[1] = 0;
  return;
}

