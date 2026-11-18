#include "ghidra_types.h"

extern undefined4 *DAT_005c4954;
extern undefined4 *DAT_005c4958;

// USA 005C4958 <- EU 005C4930 (Ghidra, non-matching)
// GLOBAL DAT_005c4954 undefined4 *
// GLOBAL DAT_005c4958 undefined4 *

void func_005C4958(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c4954;
  *DAT_005c4954 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c4958;
  *DAT_005c4958 = 0;
  puVar1[1] = 0;
  return;
}

