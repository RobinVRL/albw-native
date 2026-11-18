#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 001A71A0 <- EU 001A71A0 (Ghidra, non-matching)

undefined4 func_001A71A0(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

