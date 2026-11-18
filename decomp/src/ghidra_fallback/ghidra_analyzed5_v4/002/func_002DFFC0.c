#include "ghidra_types.h"

extern int func_002DFF7C(undefined4 *param_1);

// USA 002DFFC0 <- EU 002DFF9C (Ghidra, non-matching)

undefined4 * func_002DFFC0(undefined4 *param_1)

{
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xb0] = 0;
  func_002DFF7C(param_1);
  return param_1;
}

