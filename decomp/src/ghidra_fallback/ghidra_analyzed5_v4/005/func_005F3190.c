#include "ghidra_types.h"

extern undefined4 *DAT_005f318c;
extern undefined4 *DAT_005f3190;

// USA 005F3190 <- EU 005F3168 (Ghidra, non-matching)
// GLOBAL DAT_005f318c undefined4 *
// GLOBAL DAT_005f3190 undefined4 *

void func_005F3190(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f318c;
  *DAT_005f318c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f3190;
  *DAT_005f3190 = 0;
  puVar1[1] = 0;
  return;
}

