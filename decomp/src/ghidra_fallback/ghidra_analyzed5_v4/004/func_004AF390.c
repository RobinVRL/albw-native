#include "ghidra_types.h"

extern undefined4 DAT_004af384;

// USA 004AF390 <- EU 004AF368 (Ghidra, non-matching)
// GLOBAL DAT_004af384 undefined4

undefined4 * func_004AF390(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = DAT_004af384;
  return param_1;
}

