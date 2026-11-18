#include "ghidra_types.h"


// USA 0010F228 <- EU 0010F228 (Ghidra, non-matching)

undefined4 * func_0010F228(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0xb);
  *param_1 = param_2;
  return param_1;
}

