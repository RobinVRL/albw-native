#include "ghidra_types.h"


// USA 0010F1F8 <- EU 0010F1F8 (Ghidra, non-matching)

void func_0010F1F8(int *param_1,float fparam_0)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

