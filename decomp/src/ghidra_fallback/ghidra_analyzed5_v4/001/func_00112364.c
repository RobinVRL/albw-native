#include "ghidra_types.h"


// USA 00112364 <- EU 00112364 (Ghidra, non-matching)

int * func_00112364(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  *param_3 = param_2;
  param_3[1] = (int)puVar1;
  *(int **)(param_2 + 4) = param_3;
  *puVar1 = param_3;
  *param_1 = *param_1 + 1;
  return param_3;
}

