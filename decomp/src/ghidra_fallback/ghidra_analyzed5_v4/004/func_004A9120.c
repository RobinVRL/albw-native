#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 004A9120 <- EU 004A90F8 (Ghidra, non-matching)

int * func_004A9120(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float in_s0;
  
  iVar2 = *(int *)(param_2 + 0x5c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x5c) = 0;
    func_0010F1F8((int *)(param_2 + 0x50),in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  iVar2 = *(int *)(param_2 + 0x4c);
  piVar1 = (int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    func_0010F1F8(piVar1,in_s0);
    piVar1 = (int *)(*(int *)(iVar2 + 8) + -1);
    *(int **)(iVar2 + 8) = piVar1;
  }
  return piVar1;
}

