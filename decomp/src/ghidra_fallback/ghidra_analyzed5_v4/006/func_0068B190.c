#include "ghidra_types.h"


// USA 0068B190 <- EU 0068B168 (Ghidra, non-matching)

int * func_0068B190(int *param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  
  if (*param_1 < param_1[1]) {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      param_1[3] = *piVar1;
      *piVar1 = param_2;
      *(undefined2 *)(piVar1 + 1) = param_3;
    }
    if (*param_1 < param_1[1]) {
      *(int **)(param_1[2] + *param_1 * 4) = piVar1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

