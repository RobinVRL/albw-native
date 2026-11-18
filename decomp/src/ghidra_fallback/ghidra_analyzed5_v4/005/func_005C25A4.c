#include "ghidra_types.h"

extern undefined4 *DAT_005c25a0;
extern undefined4 *DAT_005c25a4;

// USA 005C25A4 <- EU 005C257C (Ghidra, non-matching)
// GLOBAL DAT_005c25a0 undefined4 *
// GLOBAL DAT_005c25a4 undefined4 *

void func_005C25A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c25a0;
  *DAT_005c25a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c25a4;
  *DAT_005c25a4 = 0;
  puVar1[1] = 0;
  return;
}

