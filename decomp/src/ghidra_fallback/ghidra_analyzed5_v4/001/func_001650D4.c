#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 001650D4 <- EU 001650D8 (Ghidra, non-matching)

undefined4 func_001650D4(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

