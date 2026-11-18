#include "ghidra_types.h"

extern undefined4 *DAT_005fbc40;
extern undefined4 *DAT_005fbc44;

// USA 005FBC44 <- EU 005FBC1C (Ghidra, non-matching)
// GLOBAL DAT_005fbc40 undefined4 *
// GLOBAL DAT_005fbc44 undefined4 *

void func_005FBC44(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fbc40;
  *DAT_005fbc40 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fbc44;
  *DAT_005fbc44 = 0;
  puVar1[1] = 0;
  return;
}

