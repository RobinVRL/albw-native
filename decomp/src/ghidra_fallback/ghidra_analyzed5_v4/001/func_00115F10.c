#include "ghidra_types.h"


// USA 00115F10 <- EU 00115F10 (Ghidra, non-matching)

undefined4 * func_00115F10(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x27);
  *param_1 = param_2;
  return param_1;
}

