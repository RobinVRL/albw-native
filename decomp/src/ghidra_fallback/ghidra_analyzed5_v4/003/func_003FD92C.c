#include "ghidra_types.h"


// USA 003FD92C <- EU 003FD90C (Ghidra, non-matching)

undefined4 * func_003FD92C(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

