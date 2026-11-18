#include "ghidra_types.h"

extern int func_00450998(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);

// USA 0051A974 <- EU 0051A94C (Ghidra, non-matching)

undefined4 func_0051A974(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  if (*(int *)(param_1 + 0x124) != 0) {
    return func_00450998(*(int *)(param_1 + 0x124),param_2,param_3,param_4);
  }
  return 0;
}

