#include "ghidra_types.h"

extern int func_003D2DC0(uint *param_1,undefined2 param_2);
extern uint DAT_003d2ac0;
extern int DAT_003d2ac4;

// USA 003D2AC0 <- EU 003D2A9C (Ghidra, non-matching)
// GLOBAL DAT_003d2ac0 uint
// GLOBAL DAT_003d2ac4 int

uint func_003D2AC0(undefined2 param_1)

{
  uint uVar1;
  
  if (*(uint **)(DAT_003d2ac4 + 8) != (uint *)0x0) {
    uVar1 = func_003D2DC0(*(uint **)(DAT_003d2ac4 + 8),param_1);
    return uVar1;
  }
  return DAT_003d2ac0;
}

