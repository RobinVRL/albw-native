#include "ghidra_types.h"

extern int func_003D2D08(uint *param_1,undefined2 param_2);
extern uint DAT_003d28dc;
extern int DAT_003d28e0;

// USA 003D28DC <- EU 003D28B8 (Ghidra, non-matching)
// GLOBAL DAT_003d28dc uint
// GLOBAL DAT_003d28e0 int

uint func_003D28DC(undefined2 param_1)

{
  uint uVar1;
  
  if (*(uint **)(DAT_003d28e0 + 8) != (uint *)0x0) {
    uVar1 = func_003D2D08(*(uint **)(DAT_003d28e0 + 8),param_1);
    return uVar1;
  }
  return DAT_003d28dc;
}

