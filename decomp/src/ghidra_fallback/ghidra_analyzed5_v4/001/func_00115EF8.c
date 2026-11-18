#include "ghidra_types.h"


// USA 00115EF8 <- EU 00115EF8 (Ghidra, non-matching)

undefined4 * func_00115EF8(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x13);
  *param_1 = param_2;
  return param_1;
}

