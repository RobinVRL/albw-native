#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 001B48BC <- EU 001B48BC (Ghidra, non-matching)

undefined4 func_001B48BC(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

