#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 001B26DC <- EU 001B26DC [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_001B26DC(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

