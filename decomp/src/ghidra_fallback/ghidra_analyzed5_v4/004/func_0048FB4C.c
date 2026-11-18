#include "ghidra_types.h"

extern undefined4 DAT_0048fb54;

// USA 0048FB4C <- EU 0048FB24 (Ghidra, non-matching)
// GLOBAL DAT_0048fb54 undefined4

undefined4 * func_0048FB4C(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  param_1[4] = 0;
  *param_1 = DAT_0048fb54;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

