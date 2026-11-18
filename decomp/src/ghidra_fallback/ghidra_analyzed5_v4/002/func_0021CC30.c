#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 0021CC30 <- EU 0021CC30 (Ghidra, non-matching)

undefined4 func_0021CC30(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

