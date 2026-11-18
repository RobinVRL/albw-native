#include "ghidra_types.h"


// USA 00400074 <- EU 00400054 (Ghidra, non-matching)

int func_00400074(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x80 + iVar2);
    if (cVar1 != *(char *)(param_2 + iVar2)) {
      piVar3 = *(int **)(param_1 + 0x14);
      while( true ) {
        if (piVar3 == (int *)(param_1 + 0x14)) {
          return 0;
        }
        iVar2 = (**(code **)(piVar3[-1] + 0x4c))(piVar3 + -1,param_2);
        if (iVar2 != 0) break;
        piVar3 = (int *)*piVar3;
      }
      return iVar2;
    }
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return param_1;
}

