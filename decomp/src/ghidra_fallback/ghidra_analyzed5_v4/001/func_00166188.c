#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_002E1B70(int *param_1);

// USA 00166188 <- EU 0016618C (Ghidra, non-matching)

void func_00166188(int param_1)

{
  int *piVar1;
  int *piVar2;
  float in_s0;
  
  func_002E1B70((int *)(param_1 + 0xac));
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

