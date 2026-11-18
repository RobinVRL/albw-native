#include "ghidra_types.h"


// USA 003C7A70 <- EU 003C7A4C (Ghidra, non-matching)

undefined4 * func_003C7A70(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

