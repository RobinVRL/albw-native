#include "ghidra_types.h"


// USA 00584A80 <- EU 00584A58 (Ghidra, non-matching)

bool func_00584A80(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x48 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}

