#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 00152F88 <- EU 00152F8C (Ghidra, non-matching)

undefined4 func_00152F88(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

