#include "ghidra_types.h"


// USA 0010D0EC <- EU 0010D0EC (Ghidra, non-matching)

void func_0010D0EC(void)

{
  software_interrupt(0x3c);
  return;
}

