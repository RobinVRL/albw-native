#include "ghidra_types.h"

extern undefined4 DAT_002e0180;
extern int DAT_002e0184;

// USA 002E0180 <- EU 002E015C (Ghidra, non-matching)
// GLOBAL DAT_002e0180 undefined4
// GLOBAL DAT_002e0184 int

undefined4 * func_002E0180(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  *param_1 = DAT_002e0180;
  if (param_2 < 0x280) {
    uVar1 = *(undefined4 *)(DAT_002e0184 + param_2 * 8 + 4);
  }
  else {
    uVar1 = 0;
  }
  param_1[1] = uVar1;
  return param_1;
}

