#include "ghidra_types.h"


// USA 00106370 <- EU 00106370 (Ghidra, non-matching)

undefined4 * func_00106370(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x35);
  *param_1 = param_2;
  return param_1;
}

