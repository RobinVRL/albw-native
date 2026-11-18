#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 0026C080 <- EU 0026C0A8 (Ghidra, non-matching)

undefined4 func_0026C080(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

