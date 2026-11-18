#include "ghidra_types.h"


// USA 0010F1DC <- EU 0010F1DC (Ghidra, non-matching)

int * func_0010F1DC(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  return param_1;
}

