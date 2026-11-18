#include "ghidra_types.h"

extern int func_0043D280(int param_1,undefined1 param_2);

// USA 0051AC2C <- EU 0051AC04 (Ghidra, non-matching)

undefined4 func_0051AC2C(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    return func_0043D280(*(int *)(param_1 + 0x80),param_2);
  }
  return 0;
}

