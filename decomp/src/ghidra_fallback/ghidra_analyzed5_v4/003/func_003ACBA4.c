#include "ghidra_types.h"


// USA 003ACBA4 <- EU 003ACB80 (Ghidra, non-matching)

undefined4 * func_003ACBA4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

