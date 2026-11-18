#include "ghidra_types.h"

extern undefined4 *DAT_005c2030;
extern undefined4 *DAT_005c2034;

// USA 005C2034 <- EU 005C200C (Ghidra, non-matching)
// GLOBAL DAT_005c2030 undefined4 *
// GLOBAL DAT_005c2034 undefined4 *

void func_005C2034(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2030;
  *DAT_005c2030 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2034;
  *DAT_005c2034 = 0;
  puVar1[1] = 0;
  return;
}

