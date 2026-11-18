#include "ghidra_types.h"


// USA 0010EAE8 <- EU 0010EAE8 (Ghidra, non-matching)

undefined4 * func_0010EAE8(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x37);
  *param_1 = param_2;
  return param_1;
}

