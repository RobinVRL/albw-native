#include "ghidra_types.h"


// USA 00474894 <- EU 0047486C (Ghidra, non-matching)

void * func_00232468(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  return (void *)param_1;
}

