#include "ghidra_types.h"


// USA 00404600 <- EU 004045E0 (Ghidra, non-matching)

void func_00404600(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)(param_1 + 8); piVar1 = (int *)*piVar1) {
    (**(code **)(piVar1[-1] + 0x14))(piVar1 + -1);
  }
  for (piVar1 = *(int **)(param_1 + 0x2c); piVar1 != (int *)(param_1 + 0x2c);
      piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x24))((int *)piVar1[2]);
  }
  return;
}

