#include "ghidra_types.h"


// USA 0058080C <- EU 005807E4 (Ghidra, non-matching)

int func_0058080C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == param_1) {
      return -1;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

