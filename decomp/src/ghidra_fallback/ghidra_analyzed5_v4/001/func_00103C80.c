#include "ghidra_types.h"


// USA 00103C80 <- EU 00103C80 (Ghidra, non-matching)
// PARAM param_3 Stack[0x0]:4 undefined4

undefined4 func_00103C80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  software_interrupt(8);
  *param_1 = param_2;
  return param_3;
}

