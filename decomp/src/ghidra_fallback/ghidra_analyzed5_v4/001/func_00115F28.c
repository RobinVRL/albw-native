#include "ghidra_types.h"


// USA 00115F28 <- EU 00115F28 (Ghidra, non-matching)

undefined4 func_00115F28(undefined4 param_1)

{
  software_interrupt(0x28);
  return param_1;
}

