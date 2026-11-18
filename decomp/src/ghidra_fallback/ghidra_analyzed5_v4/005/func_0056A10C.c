#include "ghidra_types.h"


// USA 0056A10C <- EU 0056A0E4 (Ghidra, non-matching)

int func_0056A10C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x7c)) {
    iVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x80);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

