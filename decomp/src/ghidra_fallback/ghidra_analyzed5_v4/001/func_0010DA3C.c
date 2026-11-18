#include "ghidra_types.h"

extern undefined4 DAT_0010da74;
extern undefined4 DAT_0010da78;

// USA 0010DA3C <- EU 0010DA3C (Ghidra, non-matching)
// GLOBAL DAT_0010da74 undefined4
// GLOBAL DAT_0010da78 undefined4

undefined4 * func_0010DA3C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0010da78;
  *param_1 = DAT_0010da74;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  param_1[4] = param_1 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

