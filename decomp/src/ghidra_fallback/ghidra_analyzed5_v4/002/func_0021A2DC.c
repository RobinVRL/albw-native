#include "ghidra_types.h"


// USA 0021A2DC <- EU 0021A2DC (Ghidra, non-matching)

void * func_0021A2DC(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return (void *)param_1;
}

