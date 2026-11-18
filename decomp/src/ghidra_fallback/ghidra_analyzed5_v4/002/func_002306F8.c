#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 002306F8 <- EU 002306F8 (Ghidra, non-matching)

void func_002306F8(int param_1)

{
  int *piVar1;
  int *piVar2;
  float in_s0;
  
  piVar1 = *(int **)(param_1 + 0x38);
  while (piVar1 != (int *)(param_1 + 0x34)) {
    piVar2 = (int *)piVar1[1];
    func_0010F1F8(piVar1,in_s0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    piVar1[-1] = *(int *)(param_1 + 0x40);
    *(int **)(param_1 + 0x40) = piVar1 + -1;
    piVar1 = piVar2;
  }
  return;
}

