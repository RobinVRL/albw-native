#include "ghidra_types.h"


// USA 0049F6DC <- EU 0049F6B4 (Ghidra, non-matching)

void * func_0049F6DC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  param_2[1] = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return (void *)param_1;
}

