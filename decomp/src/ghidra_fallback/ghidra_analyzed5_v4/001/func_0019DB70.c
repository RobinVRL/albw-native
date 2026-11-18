#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 0019DB70 <- EU 0019DB70 (Ghidra, non-matching)

undefined4 func_0019DB70(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

