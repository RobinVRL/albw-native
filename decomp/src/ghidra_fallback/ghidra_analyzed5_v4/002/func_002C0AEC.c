#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 002C0AEC <- EU 002C0AC8 (Ghidra, non-matching)

void func_002C0AEC(int param_1)

{
  int *piVar1;
  int *piVar2;
  float in_s0;
  
  piVar1 = *(int **)(param_1 + 0x48);
  while (piVar1 != (int *)(param_1 + 0x44)) {
    piVar2 = (int *)piVar1[1];
    func_0010F1F8(piVar1,in_s0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    piVar1[-0x13] = *(int *)(param_1 + 0x50);
    *(int **)(param_1 + 0x50) = piVar1 + -0x13;
    piVar1 = piVar2;
  }
  return;
}

