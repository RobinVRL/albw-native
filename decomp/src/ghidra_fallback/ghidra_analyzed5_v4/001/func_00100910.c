#include "ghidra_types.h"


// USA 00100910 <- EU 00100910 (Ghidra, function missing from the decomp table)

int func_00100910(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

