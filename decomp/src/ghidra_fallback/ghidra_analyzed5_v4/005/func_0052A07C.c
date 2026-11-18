#include "ghidra_types.h"


// USA 0052A07C <- EU 0052A054 (Ghidra, non-matching)

bool func_0052A07C(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 0x10) + 0x1c + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f))
         != 0;
}

