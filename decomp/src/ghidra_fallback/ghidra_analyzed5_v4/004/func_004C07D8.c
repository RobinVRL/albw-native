#include "ghidra_types.h"


// USA 004C07D8 <- EU 004C07B0 (Ghidra, non-matching)

void func_004C07D8(int param_1)

{
  *(undefined1 *)(param_1 + 0x858) = 0;
  *(undefined1 *)(param_1 + 0x85f) = 0;
  *(undefined2 *)(param_1 + 0x904) = 0xffff;
  *(undefined2 *)(param_1 + 0x906) = 0xffff;
  *(undefined2 *)(param_1 + 0x908) = 0xffff;
  *(undefined2 *)(param_1 + 0x90a) = 0xffff;
  *(undefined2 *)(param_1 + 0x90c) = 0xffff;
  *(undefined2 *)(param_1 + 0x90e) = 0xffff;
  return;
}

