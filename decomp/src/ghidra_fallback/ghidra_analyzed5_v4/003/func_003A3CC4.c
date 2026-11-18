#include "ghidra_types.h"

extern int func_00668BBC(undefined4 *param_1,undefined1 param_2);

// USA 003A3CC4 <- EU 003A3CA0 (Ghidra, non-matching)

undefined4 func_003A3CC4(int param_1)

{
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return func_00668BBC((undefined4 *)(param_1 + 0x10),0);
}

