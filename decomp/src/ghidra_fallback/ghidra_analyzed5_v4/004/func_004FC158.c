#include "ghidra_types.h"


// USA 004FC158 <- EU 004FC130 (Ghidra, non-matching)

int func_004FC158(int param_1)

{
  *(undefined1 *)(param_1 + 0x93c) = 1;
  return param_1;
}

