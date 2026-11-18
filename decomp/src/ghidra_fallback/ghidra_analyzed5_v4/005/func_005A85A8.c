#include "ghidra_types.h"

extern undefined4 *DAT_005a85a4;
extern undefined4 *DAT_005a85a8;

// USA 005A85A8 <- EU 005A8580 (Ghidra, non-matching)
// GLOBAL DAT_005a85a4 undefined4 *
// GLOBAL DAT_005a85a8 undefined4 *

void func_005A85A8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a85a4;
  *DAT_005a85a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a85a8;
  *DAT_005a85a8 = 0;
  puVar1[1] = 0;
  return;
}

