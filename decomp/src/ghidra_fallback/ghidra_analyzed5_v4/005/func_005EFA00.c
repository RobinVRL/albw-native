#include "ghidra_types.h"

extern undefined4 *DAT_005ef9fc;
extern undefined4 *DAT_005efa00;

// USA 005EFA00 <- EU 005EF9D8 (Ghidra, non-matching)
// GLOBAL DAT_005ef9fc undefined4 *
// GLOBAL DAT_005efa00 undefined4 *

void func_005EFA00(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ef9fc;
  *DAT_005ef9fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efa00;
  *DAT_005efa00 = 0;
  puVar1[1] = 0;
  return;
}

