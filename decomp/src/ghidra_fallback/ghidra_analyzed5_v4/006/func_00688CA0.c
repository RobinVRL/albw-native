#include "ghidra_types.h"


// USA 00688CA0 <- EU 00688C78 (Ghidra, non-matching)

int func_00688CA0(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  piVar5 = *(int **)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  (**(code **)(*piVar5 + 8))(piVar5);
  iVar3 = 0;
  do {
    if (*(char *)(piVar5[1] + iVar3) == '\0') {
      if (iVar3 < 0x40001) goto LAB_00688ccc;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  iVar3 = 0;
LAB_00688ccc:
  if (iVar7 < 0 || iVar3 < iVar7) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    (**(code **)(*param_2 + 8))(param_2);
    iVar8 = param_2[1];
    for (; pcVar6 = (char *)(*(int *)(*(int *)(param_1 + 4) + 4) + iVar7), *pcVar6 != '\0';
        iVar7 = iVar7 + 1) {
      (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_1 + 0xc);
      cVar1 = *pcVar6;
      iVar4 = 0;
      do {
        cVar2 = *(char *)(*(int *)(param_1 + 0x10) + iVar4);
        if (cVar2 == '\0') break;
        if (cVar2 == cVar1) goto LAB_00688d60;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40001);
      *(char *)(iVar8 + iVar3) = cVar1;
      iVar3 = iVar3 + 1;
    }
LAB_00688d60:
    *(undefined1 *)(iVar8 + iVar3) = 0;
    *(int *)(param_1 + 8) = iVar7 + 1;
  }
  return iVar3;
}

