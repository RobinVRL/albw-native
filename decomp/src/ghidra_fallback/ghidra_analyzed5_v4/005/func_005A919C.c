#include "ghidra_types.h"

extern undefined4 *DAT_005a9198;
extern undefined4 *DAT_005a919c;

// USA 005A919C <- EU 005A9174 (Ghidra, non-matching)
// GLOBAL DAT_005a9198 undefined4 *
// GLOBAL DAT_005a919c undefined4 *

void func_005A919C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a9198;
  *DAT_005a9198 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a919c;
  *DAT_005a919c = 0;
  puVar1[1] = 0;
  return;
}

