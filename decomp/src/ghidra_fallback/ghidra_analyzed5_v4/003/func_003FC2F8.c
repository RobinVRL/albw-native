#include "ghidra_types.h"

extern int func_003CC090(int *param_1,int param_2,uint param_3);

// USA 003FC2F8 <- EU 003FC2D8 (Ghidra, non-matching)

void func_003FC2F8(int *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if ((*param_2 & 1) == 0) {
    return;
  }
  iVar2 = param_3 + *(int *)(param_3 + 0x48) * 0x20;
  piVar3 = (int *)(iVar2 + 8);
  if (*(short *)(*piVar3 + (uint)param_2[0x10] * 4 + 2) != 0) {
    puVar1 = (ushort *)(*piVar3 + (uint)param_2[0x10] * 4);
    bVar4 = *(char *)(param_3 + 0x4c) == '\0';
    if (bVar4) {
      piVar3 = *(int **)(iVar2 + 0x10);
    }
    if (!bVar4) {
      piVar3 = (int *)piVar3[3];
    }
    func_003CC090(param_1,(uint)*puVar1 + (int)piVar3,(uint)puVar1[1]);
  }
  return;
}

