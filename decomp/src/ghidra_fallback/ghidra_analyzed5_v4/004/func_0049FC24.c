#include "ghidra_types.h"

extern int func_0049FB60(int *param_1);

// USA 0049FC24 <- EU 0049FBFC (Ghidra, non-matching)

void func_0049FC24(int param_1,int *param_2)

{
  func_0049FB60(param_2);
  if (*(int *)(param_1 + 4) == 0) {
    *(int **)(param_1 + 4) = param_2;
    *param_2 = param_1;
  }
  else {
    param_2[2] = *(int *)(param_1 + 4);
    *(int **)(*(int *)(param_1 + 4) + 0xc) = param_2;
    *(int **)(param_1 + 4) = param_2;
    *param_2 = param_1;
  }
  return;
}

