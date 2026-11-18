#include "ghidra_types.h"

extern undefined4 *DAT_005a115c;
extern undefined4 *DAT_005a1160;

// USA 005A1160 <- EU 005A1138 (Ghidra, non-matching)
// GLOBAL DAT_005a115c undefined4 *
// GLOBAL DAT_005a1160 undefined4 *

void func_005A1160(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a115c;
  *DAT_005a115c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a1160;
  *DAT_005a1160 = 0;
  puVar1[1] = 0;
  return;
}

