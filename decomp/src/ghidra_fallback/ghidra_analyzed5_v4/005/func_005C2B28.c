#include "ghidra_types.h"

extern undefined4 *DAT_005c2b24;
extern undefined4 *DAT_005c2b28;

// USA 005C2B28 <- EU 005C2B00 (Ghidra, non-matching)
// GLOBAL DAT_005c2b24 undefined4 *
// GLOBAL DAT_005c2b28 undefined4 *

void func_005C2B28(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2b24;
  *DAT_005c2b24 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2b28;
  *DAT_005c2b28 = 0;
  puVar1[1] = 0;
  return;
}

