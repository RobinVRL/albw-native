#include "ghidra_types.h"


// USA 00540230 <- EU 00540208 (Ghidra, non-matching)

undefined4 func_00540230(int param_1)

{
  if (*(short *)(param_1 + 0x42) == 0xa9) {
    if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + 0x168) == 0xb)) {
      return 1;
    }
  }
  else if (*(short *)(param_1 + 0x42) == 0xa3) {
    return 1;
  }
  return 0;
}

