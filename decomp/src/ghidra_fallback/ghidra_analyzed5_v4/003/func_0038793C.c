#include "ghidra_types.h"


// USA 0038793C <- EU 00387918 (Ghidra, non-matching)

undefined4 * func_0038793C(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

