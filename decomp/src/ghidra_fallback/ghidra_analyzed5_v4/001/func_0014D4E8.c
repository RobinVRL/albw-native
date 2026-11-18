#include "ghidra_types.h"

extern int func_0046FFCC(int param_1,undefined4 param_2);

// USA 0014D4E8 <- EU 0014D4E8 (Ghidra, non-matching)

undefined4 func_0014D4E8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return func_0046FFCC(*(int *)(param_1 + 0x14),param_2);
  }
  return 0;
}

