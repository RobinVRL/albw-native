#include "ghidra_types.h"


// USA 00103C68 <- EU 00103C68 (Ghidra, non-matching)

undefined4 * func_00103C68(undefined4 *param_1,undefined4 param_2)

{
  software_interrupt(0x17);
  *param_1 = param_2;
  return param_1;
}

