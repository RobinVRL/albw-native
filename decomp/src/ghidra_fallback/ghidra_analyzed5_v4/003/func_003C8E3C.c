#include "ghidra_types.h"


// USA 003C8E3C <- EU 003C8E18 (Ghidra, non-matching)

undefined4 * func_003C8E3C(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

