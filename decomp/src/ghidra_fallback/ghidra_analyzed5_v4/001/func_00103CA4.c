#include "ghidra_types.h"


// USA 00103CA4 <- EU 00103CA4 (Ghidra, non-matching)

undefined4 * func_00103CA4(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x38);
  *param_1 = param_2;
  return param_1;
}

