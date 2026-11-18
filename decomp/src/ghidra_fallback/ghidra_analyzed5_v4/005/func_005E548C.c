#include "ghidra_types.h"

extern undefined4 *DAT_005e5488;
extern undefined4 *DAT_005e548c;

// USA 005E548C <- EU 005E5464 (Ghidra, non-matching)
// GLOBAL DAT_005e5488 undefined4 *
// GLOBAL DAT_005e548c undefined4 *

void func_005E548C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e5488;
  *DAT_005e5488 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e548c;
  *DAT_005e548c = 0;
  puVar1[1] = 0;
  return;
}

