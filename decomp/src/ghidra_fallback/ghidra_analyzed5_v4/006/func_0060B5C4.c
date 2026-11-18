#include "ghidra_types.h"


// USA 0060B5C4 <- EU 0060B59C (Ghidra, non-matching)

int func_0060B5C4(int param_1,int param_2)

{
  return (uint)*(byte *)(param_2 + 0xf) - (uint)*(byte *)(param_1 + 0xf);
}

