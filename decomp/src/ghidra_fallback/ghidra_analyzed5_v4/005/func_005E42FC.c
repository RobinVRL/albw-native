#include "ghidra_types.h"

extern undefined4 *DAT_005e42f8;
extern undefined4 *DAT_005e42fc;

// USA 005E42FC <- EU 005E42D4 (Ghidra, non-matching)
// GLOBAL DAT_005e42f8 undefined4 *
// GLOBAL DAT_005e42fc undefined4 *

void func_005E42FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005e42f8;
  *DAT_005e42f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e42fc;
  *DAT_005e42fc = 0;
  puVar1[1] = 0;
  return;
}

