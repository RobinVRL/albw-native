#include "ghidra_types.h"


// USA 0040881C <- EU 004087FC (Ghidra, function missing from the decomp table)

void func_0040881C(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0x20) = 0;
  }
  return;
}

