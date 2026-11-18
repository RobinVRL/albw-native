#include "ghidra_types.h"


// USA 002ABD44 <- EU 002ABD20 (Ghidra, non-matching)

void func_002ABD44(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 1;
  *(undefined1 *)(param_1 + 0x111) = 0;
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0x116) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x116) = 0;
  }
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x80;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x60))(*(int **)(param_1 + 0x34),0);
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x89c) = 0;
  return;
}

