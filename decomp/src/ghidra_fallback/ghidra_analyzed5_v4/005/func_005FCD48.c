#include "ghidra_types.h"

extern undefined4 *DAT_005fcd44;
extern undefined4 *DAT_005fcd48;

// USA 005FCD48 <- EU 005FCD20 (Ghidra, non-matching)
// GLOBAL DAT_005fcd44 undefined4 *
// GLOBAL DAT_005fcd48 undefined4 *

void func_005FCD48(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fcd44;
  *DAT_005fcd44 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fcd48;
  *DAT_005fcd48 = 0;
  puVar1[1] = 0;
  return;
}

