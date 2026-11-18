#include "ghidra_types.h"


// USA 001A0A5C <- EU 001A0A5C (Ghidra, non-matching)

void * func_001A0A5C(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return (void *)param_1;
}

