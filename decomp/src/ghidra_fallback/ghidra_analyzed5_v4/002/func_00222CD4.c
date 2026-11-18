#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);

// USA 00222CD4 <- EU 00222CD4 (Ghidra, non-matching)

undefined4 func_00222CD4(int *param_1)

{
  return func_004F8638(param_1,0xff);
}

