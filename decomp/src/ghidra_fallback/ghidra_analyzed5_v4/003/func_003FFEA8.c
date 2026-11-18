#include "ghidra_types.h"


// USA 003FFEA8 <- EU 003FFE88 (Ghidra, non-matching)

int func_003FFEA8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x80 + iVar2);
    if (cVar1 != *(char *)(param_2 + iVar2)) {
      if (param_3 != 0) {
        for (piVar3 = *(int **)(param_1 + 0x14); piVar3 != (int *)(param_1 + 0x14);
            piVar3 = (int *)*piVar3) {
          iVar2 = (**(code **)(piVar3[-1] + 0x4c))(piVar3 + -1,param_2);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
      return 0;
    }
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return param_1;
}

