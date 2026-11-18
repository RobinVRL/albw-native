#include "ghidra_types.h"

extern int func_00482B8C(int param_1,float fparam_0);

// USA 0051C378 <- EU 0051C350 (Ghidra, non-matching)

undefined4 func_0051C378(int param_1,float fparam_0)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
    return func_00482B8C(*(int *)(param_1 + 0x11c),fparam_0);
  }
  return 0;
}

