#include "ghidra_types.h"


// USA 003BA62C <- EU 003BA608 (Ghidra, non-matching)

void func_003BA62C(int *param_1)

{
  (**(code **)(*param_1 + 300))(param_1);
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x13] = 5;
  return;
}

