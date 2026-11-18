#include "ghidra_types.h"


// USA 0011EC9C <- EU 0011EC9C (Ghidra, non-matching)

int func_0011EC9C(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (((*(int *)(param_1 + 0x14) != -1) &&
      (piVar5 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 0x10),
      param_2 < *piVar5)) &&
     (piVar5 = (int *)(piVar5[param_2 + 1] + (int)piVar5), piVar5 != (int *)0x0)) {
    cVar1 = *(char *)(param_1 + 8);
    piVar4 = piVar5;
    if (cVar1 == '\0') {
      while (cVar1 = (char)*piVar4, cVar1 != '\0') {
        if (cVar1 == '\x0e') {
          piVar4 = (int *)((int)piVar4 + *(ushort *)((int)piVar4 + 5) + 7);
        }
        else if (cVar1 == '\x0f') {
          piVar4 = (int *)((int)piVar4 + 6);
        }
        else {
          piVar4 = (int *)((int)piVar4 + 1);
        }
      }
    }
    else if (cVar1 == '\x01') {
      while (sVar2 = (short)*piVar4, sVar2 != 0) {
        if (sVar2 == 0xe) {
          piVar4 = (int *)((int)piVar4 + *(ushort *)((int)piVar4 + 6) + 8);
        }
        else if (sVar2 == 0xf) {
          piVar4 = (int *)((int)piVar4 + 6);
        }
        else {
          piVar4 = (int *)((int)piVar4 + 2);
        }
      }
    }
    else {
      if (cVar1 != '\x02') {
        return -1;
      }
      while (iVar3 = *piVar4, iVar3 != 0) {
        if (iVar3 == 0xe) {
          piVar4 = (int *)((int)piVar4 + *(ushort *)(piVar4 + 2) + 10);
        }
        else if (iVar3 == 0xf) {
          piVar4 = (int *)((int)piVar4 + 6);
        }
        else {
          piVar4 = piVar4 + 1;
        }
      }
    }
    return (int)piVar4 - (int)piVar5;
  }
  return -1;
}

