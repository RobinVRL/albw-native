#include "ghidra_types.h"

extern int func_003D2DF8(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern uint DAT_003d29c8;
extern int DAT_003d29cc;

// USA 003D29AC <- EU 003D2988 (Ghidra, non-matching)
// GLOBAL DAT_003d29c8 uint
// GLOBAL DAT_003d29cc int

uint func_003D29AC(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (*(uint **)(DAT_003d29cc + 8) != (uint *)0x0) {
    uVar1 = func_003D2DF8(*(uint **)(DAT_003d29cc + 8),param_1,param_2,param_3);
    return uVar1;
  }
  return DAT_003d29c8;
}

