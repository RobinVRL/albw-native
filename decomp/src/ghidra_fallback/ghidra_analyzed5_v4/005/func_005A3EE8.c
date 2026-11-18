#include "ghidra_types.h"

extern undefined4 *DAT_005a3ee4;
extern undefined4 *DAT_005a3ee8;

// USA 005A3EE8 <- EU 005A3EC0 (Ghidra, non-matching)
// GLOBAL DAT_005a3ee4 undefined4 *
// GLOBAL DAT_005a3ee8 undefined4 *

void func_005A3EE8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3ee4;
  *DAT_005a3ee4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3ee8;
  *DAT_005a3ee8 = 0;
  puVar1[1] = 0;
  return;
}

