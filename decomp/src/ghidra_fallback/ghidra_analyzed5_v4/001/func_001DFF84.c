#include "ghidra_types.h"


// USA 001DFF84 <- EU 001DFF84 (Ghidra, non-matching)

void * func_001DFF84(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    if (param_2 < 0x1000000) {
      iVar1 = param_2 + *(int *)(param_1 + 0xec);
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0xe8) = iVar1;
  }
  return (void *)param_1;
}

