#include "ghidra_types.h"


// USA 00689DF8 <- EU 00689DD0 (Ghidra, non-matching)

undefined4 * func_00689DF8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

