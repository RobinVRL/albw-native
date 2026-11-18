#include "ghidra_types.h"

extern undefined4 *DAT_005ea948;
extern undefined4 *DAT_005ea94c;

// USA 005EA94C <- EU 005EA924 (Ghidra, non-matching)
// GLOBAL DAT_005ea948 undefined4 *
// GLOBAL DAT_005ea94c undefined4 *

void func_005EA94C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ea948;
  *DAT_005ea948 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea94c;
  *DAT_005ea94c = 0;
  puVar1[1] = 0;
  return;
}

