#include "ghidra_types.h"


// USA 003441D8 <- EU 003441B4 (Ghidra, non-matching)

void * func_003441D8(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return (void *)param_1;
}

