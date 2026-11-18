#include "ghidra_types.h"


// USA 003E68D8 <- EU 003E68B8 (Ghidra, non-matching)

int * func_003E68D8(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      bVar3 = param_2 <= (uint)piVar1[2];
      if ((uint)piVar1[2] <= param_2) {
        bVar3 = (uint)piVar1[3] <= param_2;
      }
      if (!bVar3) {
        piVar2 = func_003E68D8((int)(piVar1 + 5),param_2);
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar1 + -1;
        }
        return piVar2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return (int *)0x0;
}

