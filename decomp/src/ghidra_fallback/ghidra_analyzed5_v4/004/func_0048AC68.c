#include "ghidra_types.h"

extern uint DAT_0048ac78;
extern uint DAT_0048ac7c;
extern uint DAT_0048ac80;

// USA 0048AC68 <- EU 0048AC40 (Ghidra, non-matching)
// GLOBAL DAT_0048ac78 uint
// GLOBAL DAT_0048ac7c uint
// GLOBAL DAT_0048ac80 uint

uint func_0048AC68(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - (DAT_0048ac78 & param_1 >> 1);
  uVar1 = (DAT_0048ac7c & uVar1 >> 2) + (uVar1 & DAT_0048ac7c);
  uVar1 = uVar1 + (uVar1 >> 4) & DAT_0048ac80;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}

