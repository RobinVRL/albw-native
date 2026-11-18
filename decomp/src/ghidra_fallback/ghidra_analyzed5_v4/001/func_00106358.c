#include "ghidra_types.h"


// USA 00106358 <- EU 00106358 (Ghidra, non-matching)

undefined4 * func_00106358(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x2d);
  *param_1 = param_2;
  return param_1;
}

