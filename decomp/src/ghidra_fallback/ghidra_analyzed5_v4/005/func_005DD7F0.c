#include "ghidra_types.h"

extern undefined4 *DAT_005dd7ec;
extern undefined4 *DAT_005dd7f0;

// USA 005DD7F0 <- EU 005DD7C8 (Ghidra, non-matching)
// GLOBAL DAT_005dd7ec undefined4 *
// GLOBAL DAT_005dd7f0 undefined4 *

void func_005DD7F0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005dd7ec;
  *DAT_005dd7ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005dd7f0;
  *DAT_005dd7f0 = 0;
  puVar1[1] = 0;
  return;
}

