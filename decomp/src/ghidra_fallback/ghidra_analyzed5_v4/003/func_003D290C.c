#include "ghidra_types.h"

extern int func_003D2D40(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern uint DAT_003d2918;
extern int DAT_003d291c;
extern undefined4 *DAT_003d2920;

// USA 003D290C <- EU 003D28E8 (Ghidra, non-matching)
// GLOBAL DAT_003d2918 uint
// GLOBAL DAT_003d291c int
// GLOBAL DAT_003d2920 undefined4 *

uint func_003D290C(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(uint **)(DAT_003d291c + 8) != (uint *)0x0) {
    uVar1 = func_003D2D40(*(uint **)(DAT_003d291c + 8),*DAT_003d2920,param_1,param_2);
    return uVar1;
  }
  return DAT_003d2918;
}

