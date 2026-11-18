#include "ghidra_types.h"


// USA 00407C6C <- EU 00407C4C (Ghidra, non-matching)

void func_00407C6C(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0xd];
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  param_1[0xc] = iVar1;
  while (param_1[0xc] < *param_1) {
    (**(code **)(*(int *)(param_1[4] + -0x104) + 0x10))((int *)(param_1[4] + -0x104));
  }
  return;
}

