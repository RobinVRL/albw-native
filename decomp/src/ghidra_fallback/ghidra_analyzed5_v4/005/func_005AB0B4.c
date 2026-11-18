#include "ghidra_types.h"

extern undefined4 *DAT_005ab0b0;
extern undefined4 *DAT_005ab0b4;

// USA 005AB0B4 <- EU 005AB08C (Ghidra, non-matching)
// GLOBAL DAT_005ab0b0 undefined4 *
// GLOBAL DAT_005ab0b4 undefined4 *

void func_005AB0B4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ab0b0;
  *DAT_005ab0b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab0b4;
  *DAT_005ab0b4 = 0;
  puVar1[1] = 0;
  return;
}

