#include "ghidra_types.h"

extern undefined4 DAT_0035d6a8;

// USA 0035D69C <- EU 0035D678 (Ghidra, non-matching)
// GLOBAL DAT_0035d6a8 undefined4

undefined4 * func_0035D69C(undefined4 *param_1,int param_2)

{
  *param_1 = DAT_0035d6a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = *(undefined4 *)(param_2 + 0x2cc);
  return param_1;
}

