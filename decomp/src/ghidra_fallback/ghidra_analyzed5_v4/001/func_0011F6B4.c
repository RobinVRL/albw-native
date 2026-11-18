#include "ghidra_types.h"


// USA 0011F6B4 <- EU 0011F6B4 (Ghidra, non-matching)

undefined4 func_0011F6B4(int param_1,uint param_2,uint param_3)

{
  do {
    if (param_2 == param_3) {
      return 1;
    }
    param_2 = (uint)*(ushort *)(*(int *)(param_1 + 4) + param_2 * 2);
  } while (param_2 < *(uint *)(param_1 + 8));
  return 0;
}

