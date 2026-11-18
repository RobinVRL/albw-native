#include "ghidra_types.h"

extern undefined4 *DAT_0059a3e4;
extern undefined4 *DAT_0059a3e8;

// USA 0059A3E8 <- EU 0059A3C0 (Ghidra, non-matching)
// GLOBAL DAT_0059a3e4 undefined4 *
// GLOBAL DAT_0059a3e8 undefined4 *

void func_0059A3E8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a3e4;
  *DAT_0059a3e4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059a3e8;
  *DAT_0059a3e8 = 0;
  puVar1[1] = 0;
  return;
}

