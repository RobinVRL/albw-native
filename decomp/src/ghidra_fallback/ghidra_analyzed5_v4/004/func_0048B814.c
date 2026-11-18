#include "ghidra_types.h"


// USA 0048B814 <- EU 0048B7EC (Ghidra, non-matching)

undefined4 func_0048B814(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x14);
  do {
    if (iVar4 == param_1 + 0x10) {
      return *(undefined4 *)(param_1 + 0x34);
    }
    iVar2 = *(int *)(iVar4 + 8);
    piVar3 = (int *)(iVar2 + 0x20);
    (**(code **)(*piVar3 + 8))(piVar3);
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar5 = *(int *)(iVar2 + 0x24);
    (**(code **)(*param_2 + 8))(param_2);
    if (iVar5 == param_2[1]) {
LAB_0048b888:
      return *(undefined4 *)(iVar4 + 8);
    }
    iVar5 = 0;
    do {
      cVar1 = *(char *)(*(int *)(iVar2 + 0x24) + iVar5);
      if (cVar1 != *(char *)(param_2[1] + iVar5)) break;
      if (cVar1 == '\0') goto LAB_0048b888;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

