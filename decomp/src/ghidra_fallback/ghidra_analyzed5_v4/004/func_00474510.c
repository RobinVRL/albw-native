#include "ghidra_types.h"

extern int func_00232384(int param_1);
extern int func_0051E300(int param_1);

// USA 00474510 <- EU 004744E8 (Ghidra, non-matching)

undefined4 func_00474510(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if (!bVar6 || cVar1 != '\0') {
    bVar6 = (char)param_1[0x23] != '\0';
    iVar2 = 0;
    if (bVar6) {
      iVar2 = param_1[0x22];
    }
    if (bVar6 && -1 < iVar2) {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
  }
  iVar2 = func_0051E300((int)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar5 = param_1[0x15];
  iVar2 = param_1[0x13];
  while (piVar4 = (int *)(iVar2 - iVar5), piVar4 != (int *)((int)param_1 + (0x48 - param_1[0x15])))
  {
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar2 = *(int *)((int)piVar4 + iVar5 + 4);
  }
  uVar3 = func_00232384((int)param_1);
  return uVar3;
}

