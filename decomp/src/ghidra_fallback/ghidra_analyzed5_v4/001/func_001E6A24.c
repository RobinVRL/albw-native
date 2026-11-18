#include "ghidra_types.h"

extern int func_00611288(int param_1);

// USA 001E6A24 <- EU 001E6A24 (Ghidra, non-matching)

undefined4 func_001E6A24(int param_1)

{
  if (*(byte *)(param_1 + 0x9f9) < 3) {
    return func_00611288(param_1);
  }
  *(undefined2 *)(param_1 + 0x784) = 0x1e;
  return 0;
}

