#include "ghidra_types.h"

extern undefined4 *DAT_005a7f70;
extern undefined4 *DAT_005a7f74;

// USA 005A7F74 <- EU 005A7F4C (Ghidra, non-matching)
// GLOBAL DAT_005a7f70 undefined4 *
// GLOBAL DAT_005a7f74 undefined4 *

void func_005A7F74(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a7f70;
  *DAT_005a7f70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7f74;
  *DAT_005a7f74 = 0;
  puVar1[1] = 0;
  return;
}

