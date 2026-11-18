#include "ghidra_types.h"

extern undefined4 DAT_00412718;

// USA 00412728 <- EU 00412708 (Ghidra, non-matching)
// GLOBAL DAT_00412718 undefined4

undefined4 * func_00412728(undefined4 *param_1)

{
  *param_1 = DAT_00412718;
  param_1[1] = 0;
  return param_1;
}

