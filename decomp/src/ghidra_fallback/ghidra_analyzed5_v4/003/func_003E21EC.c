#include "ghidra_types.h"

extern uint DAT_003e2204;
extern uint DAT_003e2208;
extern uint DAT_003e220c;

// USA 003E21EC <- EU 003E21CC (Ghidra, non-matching)
// GLOBAL DAT_003e2204 uint
// GLOBAL DAT_003e2208 uint
// GLOBAL DAT_003e220c uint

uint func_003E21EC(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - (DAT_003e2204 & param_1 >> 1);
  uVar1 = (DAT_003e2208 & uVar1 >> 2) + (uVar1 & DAT_003e2208);
  uVar1 = uVar1 + (uVar1 >> 4) & DAT_003e220c;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}

