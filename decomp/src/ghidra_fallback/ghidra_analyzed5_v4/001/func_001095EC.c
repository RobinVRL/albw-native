#include "ghidra_types.h"

extern undefined4 DAT_00109618;

// USA 001095EC <- EU 001095EC (Ghidra, non-matching)
// GLOBAL DAT_00109618 undefined4

undefined4 * func_001095EC(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00109618;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = uVar1;
  param_1[3] = 0;
  param_1[4] = 2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return param_1;
}

