#include "ghidra_types.h"


// USA 003D6E70 <- EU 003D6E50 (Ghidra, non-matching)

undefined4 * func_003D6E70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

