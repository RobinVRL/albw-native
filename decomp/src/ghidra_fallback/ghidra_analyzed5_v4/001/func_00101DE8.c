#include "ghidra_types.h"


// USA 00101DE8 <- EU 00101DE8 (Ghidra, non-matching)

undefined4 * func_00101DE8(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x21);
  *param_1 = param_2;
  return param_1;
}

