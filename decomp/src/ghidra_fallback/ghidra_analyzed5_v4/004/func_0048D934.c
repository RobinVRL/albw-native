#include "ghidra_types.h"


// USA 0048D934 <- EU 0048D90C (Ghidra, non-matching)

void * func_0048D934(int param_1,int param_2)

{
  *(int *)(param_1 + 0xf4) = param_2;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 1;
  if (*(byte *)(param_1 + 0x6c) < 2 || *(byte *)(param_1 + 0x6c) == 3) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  return (void *)param_1;
}

