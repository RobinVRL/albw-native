#include "ghidra_types.h"

extern int func_00573720(int param_1,undefined4 *param_2);

// USA 0058D7B8 <- EU 0058D790 (Ghidra, non-matching)

undefined4 func_0058D7B8(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    return func_00573720(*(int *)(param_1 + 0x80),param_2);
  }
  return 0;
}

