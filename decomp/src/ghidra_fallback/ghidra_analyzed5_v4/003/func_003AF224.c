#include "ghidra_types.h"


// USA 003AF224 <- EU 003AF200 (Ghidra, non-matching)

bool func_003AF224(int param_1,int param_2)

{
  return (*(uint *)(param_2 + 0x2cc) & 0x3fffff) == *(uint *)(param_1 + 4);
}

