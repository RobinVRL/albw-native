#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 002BC79C <- EU 002BC778 (Ghidra, non-matching)

undefined4 func_002BC79C(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

