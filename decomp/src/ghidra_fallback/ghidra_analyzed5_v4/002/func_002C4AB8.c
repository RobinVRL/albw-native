#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 002C4AB8 <- EU 002C4A94 (Ghidra, non-matching)

undefined4 func_002C4AB8(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

