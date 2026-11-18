#include "ghidra_types.h"

extern undefined4 *DAT_005e42cc;
extern undefined4 *DAT_005e42d0;

// USA 005E42D0 <- EU 005E42A8 (Ghidra, non-matching)
// GLOBAL DAT_005e42cc undefined4 *
// GLOBAL DAT_005e42d0 undefined4 *

void func_005E42D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e42cc;
  *DAT_005e42cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e42d0;
  *DAT_005e42d0 = 0;
  puVar1[1] = 0;
  return;
}

