#include "ghidra_types.h"

extern undefined4 *DAT_005ab008;
extern undefined4 *DAT_005ab00c;

// USA 005AB00C <- EU 005AAFE4 (Ghidra, non-matching)
// GLOBAL DAT_005ab008 undefined4 *
// GLOBAL DAT_005ab00c undefined4 *

void func_005AB00C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ab008;
  *DAT_005ab008 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab00c;
  *DAT_005ab00c = 0;
  puVar1[1] = 0;
  return;
}

