#include "ghidra_types.h"

extern void func_00414348(int *param_1,float fparam_0);
extern void func_00414730(int param_1,float fparam_0);
extern void func_00414C3C(int param_1,float fparam_0);

// USA 004199E8 <- EU 004199C8 (Ghidra, non-matching)

void func_004199E8(int param_1,float fparam_0)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      func_00414348(piVar1 + -0x16,fparam_0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      func_00414730((int)(piVar1 + -0x16),fparam_0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      func_00414C3C((int)(piVar1 + -0x16),fparam_0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}

