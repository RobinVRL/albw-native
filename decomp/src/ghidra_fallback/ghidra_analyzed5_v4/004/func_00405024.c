#include "ghidra_types.h"


// USA 00405024 <- EU 00405004 (Ghidra, non-matching)

int func_00405024(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0xd4);
  if (iVar3 != 0) {
    iVar2 = 0;
    while (cVar1 = *(char *)(iVar3 + 0x81 + iVar2), cVar1 == *(char *)(param_2 + iVar2)) {
      if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x1b < iVar2)) {
        return iVar3;
      }
    }
  }
  iVar3 = 0;
  if (*(byte *)(param_1 + 0xcd) != 0) {
    do {
      iVar2 = 0;
      while (cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0xd0) + iVar3 * 8 + 4) + 0x81 + iVar2),
            cVar1 == *(char *)(param_2 + iVar2)) {
        if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x1b < iVar2)) {
          return *(int *)(*(int *)(param_1 + 0xd0) + iVar3 * 8 + 4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0xcd));
  }
  if (param_3 != 0) {
    for (piVar4 = *(int **)(param_1 + 0x14); piVar4 != (int *)(param_1 + 0x14);
        piVar4 = (int *)*piVar4) {
      iVar3 = (**(code **)(piVar4[-1] + 0x30))(piVar4 + -1,param_2,param_3);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  return 0;
}

