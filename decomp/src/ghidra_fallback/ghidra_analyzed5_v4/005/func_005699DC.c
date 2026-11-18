#include "ghidra_types.h"

extern int func_0056CE68(int param_1,uint param_2,int param_3,uint *param_4);

// USA 005699DC <- EU 005699B4 (Ghidra, non-matching)

uint func_005699DC(int param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = func_0056CE68(*(int *)(param_1 + 4),param_2,param_3,param_4);
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,param_2,param_3,param_4);
    }
    uVar1 = uVar3 | uVar1;
  }
  return uVar1;
}

