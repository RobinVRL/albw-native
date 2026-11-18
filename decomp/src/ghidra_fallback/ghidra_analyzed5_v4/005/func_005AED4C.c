#include "ghidra_types.h"

extern undefined4 *DAT_005aed48;
extern undefined4 *DAT_005aed4c;

// USA 005AED4C <- EU 005AED24 (Ghidra, non-matching)
// GLOBAL DAT_005aed48 undefined4 *
// GLOBAL DAT_005aed4c undefined4 *

void func_005AED4C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aed48;
  *DAT_005aed48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aed4c;
  *DAT_005aed4c = 0;
  puVar1[1] = 0;
  return;
}

