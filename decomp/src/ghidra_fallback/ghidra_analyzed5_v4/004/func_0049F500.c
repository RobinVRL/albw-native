#include "ghidra_types.h"


// USA 0049F500 <- EU 0049F4D8 (Ghidra, non-matching)

void func_0049F500(int *param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (1 < param_1[2]) {
    for (piVar4 = (int *)param_1[1]; piVar4 != param_1; piVar4 = (int *)piVar4[1]) {
      if ((int *)piVar4[1] != param_1) {
        piVar2 = (int *)piVar4[1];
        do {
          iVar1 = (*(code *)param_3)((int)piVar4 - param_2,(int)piVar2 - param_2);
          if (iVar1 == 0) {
            piVar3 = (int *)piVar2[1];
            if (*piVar2 != 0) {
              *(int *)(*piVar2 + 4) = piVar2[1];
            }
            if ((int *)piVar2[1] != (int *)0x0) {
              *(int *)piVar2[1] = *piVar2;
            }
            piVar2[1] = 0;
            *piVar2 = 0;
            param_1[2] = param_1[2] + -1;
          }
          else {
            piVar3 = (int *)piVar2[1];
          }
          piVar2 = piVar3;
        } while (piVar3 != param_1);
      }
    }
  }
  return;
}

