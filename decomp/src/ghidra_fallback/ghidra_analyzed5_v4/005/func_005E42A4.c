#include "ghidra_types.h"

extern undefined4 *DAT_005e42a0;
extern undefined4 *DAT_005e42a4;

// USA 005E42A4 <- EU 005E427C (Ghidra, non-matching)
// GLOBAL DAT_005e42a0 undefined4 *
// GLOBAL DAT_005e42a4 undefined4 *

void func_005E42A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e42a0;
  *DAT_005e42a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e42a4;
  *DAT_005e42a4 = 0;
  puVar1[1] = 0;
  return;
}

