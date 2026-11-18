#include "ghidra_types.h"

extern undefined4 *DAT_005ab1a0;
extern undefined4 *DAT_005ab1a4;

// USA 005AB1A4 <- EU 005AB17C (Ghidra, non-matching)
// GLOBAL DAT_005ab1a0 undefined4 *
// GLOBAL DAT_005ab1a4 undefined4 *

void func_005AB1A4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ab1a0;
  *DAT_005ab1a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab1a4;
  *DAT_005ab1a4 = 0;
  puVar1[1] = 0;
  return;
}

