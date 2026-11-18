#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 00357D34 <- EU 00357D10 (Ghidra, non-matching)

undefined4 func_00357D34(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

