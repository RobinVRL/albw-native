#include "ghidra_types.h"

extern undefined4 *DAT_005eac58;
extern undefined4 *DAT_005eac5c;

// USA 005EAC5C <- EU 005EAC34 (Ghidra, non-matching)
// GLOBAL DAT_005eac58 undefined4 *
// GLOBAL DAT_005eac5c undefined4 *

void func_005EAC5C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eac58;
  *DAT_005eac58 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eac5c;
  *DAT_005eac5c = 0;
  puVar1[1] = 0;
  return;
}

