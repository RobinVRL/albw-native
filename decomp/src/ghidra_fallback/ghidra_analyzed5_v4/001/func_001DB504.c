#include "ghidra_types.h"

extern undefined4 DAT_001db514;

// USA 001DB504 <- EU 001DB504 (Ghidra, non-matching)
// GLOBAL DAT_001db514 undefined4

undefined4 * func_001DB504(undefined4 *param_1)

{
  *param_1 = DAT_001db514;
  param_1[1] = 0;
  return param_1;
}

