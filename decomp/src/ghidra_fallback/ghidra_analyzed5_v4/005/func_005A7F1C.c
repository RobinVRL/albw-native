#include "ghidra_types.h"

extern undefined4 *DAT_005a7f18;
extern undefined4 *DAT_005a7f1c;

// USA 005A7F1C <- EU 005A7EF4 (Ghidra, non-matching)
// GLOBAL DAT_005a7f18 undefined4 *
// GLOBAL DAT_005a7f1c undefined4 *

void func_005A7F1C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7f18;
  *DAT_005a7f18 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7f1c;
  *DAT_005a7f1c = 0;
  puVar1[1] = 0;
  return;
}

