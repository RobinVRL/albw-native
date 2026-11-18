#include "ghidra_types.h"

extern int func_0066C424(undefined4 *param_1,undefined1 param_2);

// USA 0043C658 <- EU 0043C638 (Ghidra, non-matching)

undefined4 func_0043C658(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x158) + 0x30b) >> 0x1f != -1) {
    return 0;
  }
  return func_0066C424((undefined4 *)(param_1 + 0x98),3);
}

