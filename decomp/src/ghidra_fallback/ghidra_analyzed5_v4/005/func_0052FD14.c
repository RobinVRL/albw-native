#include "ghidra_types.h"


// USA 0052FD14 <- EU 0052FCEC (Ghidra, non-matching)

int func_0052FD14(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar3 = 0;
  if (*(int **)(param_1 + 0xc) != piVar2) {
    do {
      if (((*piVar2 != 0) && (*(char *)(*piVar2 + 0x2d7) == '\0')) &&
         (iVar1 = (**(code **)*param_2)(param_2), iVar1 != 0)) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0xc) != piVar2);
  }
  return iVar3;
}

