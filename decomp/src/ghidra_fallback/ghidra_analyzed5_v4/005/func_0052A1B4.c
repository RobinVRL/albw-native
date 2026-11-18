#include "ghidra_types.h"


// USA 0052A1B4 <- EU 0052A18C (Ghidra, non-matching)

bool func_0052A1B4(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x13c + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}

