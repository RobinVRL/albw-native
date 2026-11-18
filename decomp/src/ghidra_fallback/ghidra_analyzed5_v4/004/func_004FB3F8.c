#include "ghidra_types.h"


// USA 004FB3F8 <- EU 004FB3D0 (Ghidra, non-matching)

int func_004FB3F8(int param_1)

{
  *(undefined1 *)(param_1 + 0x93c) = 0;
  return param_1;
}

