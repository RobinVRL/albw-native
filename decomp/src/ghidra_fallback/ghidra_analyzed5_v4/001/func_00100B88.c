#include "ghidra_types.h"


// USA 00100B88 <- EU 00100B88 (Ghidra, non-matching)

void func_00100B88(void)

{
  software_interrupt(3);
  return;
}

