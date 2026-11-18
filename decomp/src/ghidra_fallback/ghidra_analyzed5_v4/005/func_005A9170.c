#include "ghidra_types.h"

extern undefined4 *DAT_005a916c;
extern undefined4 *DAT_005a9170;

// USA 005A9170 <- EU 005A9148 (Ghidra, non-matching)
// GLOBAL DAT_005a916c undefined4 *
// GLOBAL DAT_005a9170 undefined4 *

void func_005A9170(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a916c;
  *DAT_005a916c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a9170;
  *DAT_005a9170 = 0;
  puVar1[1] = 0;
  return;
}

