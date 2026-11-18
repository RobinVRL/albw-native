#include "ghidra_types.h"


// USA 0052FCA4 <- EU 0052FC7C (Ghidra, non-matching)

int * func_0052FCA4(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 0xc);
  piVar3 = piVar1;
  if (piVar1 <= param_3) {
    piVar3 = piVar2;
  }
  if ((piVar1 <= param_3 && param_3 <= piVar2) && (piVar2 = param_3, param_3 != piVar3)) {
    do {
      if ((*piVar2 != 0) &&
         ((*(char *)(*piVar2 + 0x2d7) == '\0' &&
          (iVar4 = (**(code **)*param_2)(param_2), iVar4 != 0)))) {
        return piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0xc) != piVar2);
  }
  return piVar2;
}

