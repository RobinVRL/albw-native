#include "ghidra_types.h"


// USA 0049BA90 <- EU 0049BA68 (Ghidra, non-matching)

undefined4 * func_0049BA90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

