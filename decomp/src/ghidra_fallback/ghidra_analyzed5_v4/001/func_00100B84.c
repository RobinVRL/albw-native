#include "ghidra_types.h"


// USA 00100B84 <- EU 00100B84 (Ghidra, non-matching)

undefined4 func_00100B84(undefined4 param_1)

{
  software_interrupt(3);
  return param_1;
}

