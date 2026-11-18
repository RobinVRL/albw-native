#include "ghidra_types.h"

extern undefined4 *DAT_005a7f44;
extern undefined4 *DAT_005a7f48;

// USA 005A7F48 <- EU 005A7F20 (Ghidra, non-matching)
// GLOBAL DAT_005a7f44 undefined4 *
// GLOBAL DAT_005a7f48 undefined4 *

void func_005A7F48(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7f44;
  *DAT_005a7f44 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7f48;
  *DAT_005a7f48 = 0;
  puVar1[1] = 0;
  return;
}

