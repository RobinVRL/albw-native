#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 00155DBC <- EU 00155DC0 (Ghidra, non-matching)

undefined4 func_00155DBC(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

