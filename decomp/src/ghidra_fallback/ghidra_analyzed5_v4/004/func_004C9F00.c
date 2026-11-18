#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 004C9F00 <- EU 004C9ED8 (Ghidra, non-matching)

undefined4 func_004C9F00(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

