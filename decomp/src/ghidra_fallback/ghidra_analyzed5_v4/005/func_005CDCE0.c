#include "ghidra_types.h"

extern undefined4 *DAT_005cdcdc;
extern undefined4 *DAT_005cdce0;

// USA 005CDCE0 <- EU 005CDCB8 (Ghidra, non-matching)
// GLOBAL DAT_005cdcdc undefined4 *
// GLOBAL DAT_005cdce0 undefined4 *

void func_005CDCE0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cdcdc;
  *DAT_005cdcdc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cdce0;
  *DAT_005cdce0 = 0;
  puVar1[1] = 0;
  return;
}

