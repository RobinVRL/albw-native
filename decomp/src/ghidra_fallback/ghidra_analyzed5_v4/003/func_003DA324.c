#include "ghidra_types.h"


// USA 003DA324 <- EU 003DA304 (Ghidra, non-matching)

int * func_003DA324(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = iVar1;
  if (iVar1 == param_2) {
    return param_1;
  }
  do {
    if (*(int *)(iVar1 + 8) == *param_3) {
      return param_1;
    }
    iVar1 = *(int *)(iVar1 + 4);
    *param_1 = iVar1;
  } while (iVar1 != param_2);
  return param_1;
}

