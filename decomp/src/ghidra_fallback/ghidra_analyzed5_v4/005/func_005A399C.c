#include "ghidra_types.h"

extern undefined4 *DAT_005a3998;
extern undefined4 *DAT_005a399c;

// USA 005A399C <- EU 005A3974 (Ghidra, non-matching)
// GLOBAL DAT_005a3998 undefined4 *
// GLOBAL DAT_005a399c undefined4 *

void func_005A399C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3998;
  *DAT_005a3998 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a399c;
  *DAT_005a399c = 0;
  puVar1[1] = 0;
  return;
}

