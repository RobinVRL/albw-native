#include "ghidra_types.h"

extern undefined4 *DAT_005a5b18;
extern undefined4 *DAT_005a5b1c;

// USA 005A5B1C <- EU 005A5AF4 (Ghidra, non-matching)
// GLOBAL DAT_005a5b18 undefined4 *
// GLOBAL DAT_005a5b1c undefined4 *

void func_005A5B1C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a5b18;
  *DAT_005a5b18 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a5b1c;
  *DAT_005a5b1c = 0;
  puVar1[1] = 0;
  return;
}

