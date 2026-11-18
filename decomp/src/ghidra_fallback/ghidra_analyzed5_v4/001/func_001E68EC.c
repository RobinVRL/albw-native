#include "ghidra_types.h"


// USA 001E68EC <- EU 001E68EC (Ghidra, non-matching)

undefined1 func_001E68EC(int param_1)

{
  *(undefined1 *)(param_1 + 0x476) = 1;
  return *(undefined1 *)(param_1 + 0x475);
}

