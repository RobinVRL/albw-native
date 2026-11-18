#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 004FFC20 <- EU 004FFBF8 (Ghidra, non-matching)

undefined4 func_004FFC20(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

