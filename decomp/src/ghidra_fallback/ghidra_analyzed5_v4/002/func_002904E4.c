#include "ghidra_types.h"


// USA 002904E4 <- EU 0029050C (Ghidra, non-matching)

void func_002904E4(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x84) = 0xff;
  return;
}

