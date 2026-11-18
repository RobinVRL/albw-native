#include "ghidra_types.h"

extern int func_003DA498(int *param_1,int param_2);

// USA 003D6F78 <- EU 003D6F58 (Ghidra, non-matching)

void func_003D6F78(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 4);
  piVar1 = (int *)func_003DA498(*(int **)(param_2 + 0xc),2);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    piVar2 = piVar1 + 2;
    if (piVar2 != (int *)0x0) {
      piVar1[4] = 0;
      *piVar2 = (int)piVar2;
      piVar1[5] = 0;
      piVar1[3] = (int)piVar2;
    }
    *piVar1 = *piVar3;
    piVar1[1] = (int)piVar3;
    *piVar3 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    *param_1 = piVar1;
    piVar1[4] = *(int *)(param_2 + 0x14);
  }
  return;
}

