#include "ghidra_types.h"

extern undefined4 DAT_001e68e8;

// USA 001E6898 <- EU 001E6898 (Ghidra, non-matching)
// GLOBAL DAT_001e68e8 undefined4

undefined4 * func_001E6898(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001e68e8;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 1;
  return param_1;
}

