#include "ghidra_types.h"

extern uint DAT_0048acd0;
extern uint DAT_0048acd4;
extern uint DAT_0048acd8;

// USA 0048ACAC <- EU 0048AC84 (Ghidra, non-matching)
// GLOBAL DAT_0048acd0 uint
// GLOBAL DAT_0048acd4 uint
// GLOBAL DAT_0048acd8 uint

uint func_0048ACAC(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar1 = param_1 & (uVar1 - 1 | uVar1);
  uVar1 = uVar1 - (DAT_0048acd0 & uVar1 >> 1);
  uVar1 = (DAT_0048acd4 & uVar1 >> 2) + (uVar1 & DAT_0048acd4);
  uVar1 = uVar1 + (uVar1 >> 4) & DAT_0048acd8;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}

