#include "ghidra_types.h"

extern int func_0048F7D4(uint *param_1,uint param_2,int param_3);

// USA 00489B3C <- EU 00489B14 (Ghidra, non-matching)

void func_00489B3C(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = param_1[4];
  uVar6 = param_1[0x44];
  (**(code **)(*param_1 + 0x18))(param_1);
  func_0048F7D4((uint *)(param_1 + 1),uVar6,uVar2 & 1);
  iVar5 = param_1[0x52];
  bVar1 = true;
  iVar3 = param_1[0x50];
  while (piVar4 = (int *)(iVar3 - iVar5), piVar4 != (int *)((int)param_1 + (0x13c - param_1[0x52])))
  {
    iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4);
    if (iVar3 != 0) {
      bVar1 = false;
    }
    iVar3 = *(int *)((int)piVar4 + iVar5 + 4);
  }
  if ((bVar1) && (iVar3 = (**(code **)(*param_1 + 0x1c))(param_1), iVar3 != 0)) {
    iVar3 = param_1[0x43] + 1;
  }
  else {
    iVar3 = 0;
  }
  param_1[0x43] = iVar3;
  iVar5 = param_1[0x56];
  iVar3 = param_1[0x54];
  while (piVar4 = (int *)(iVar3 - iVar5), piVar4 != (int *)((int)param_1 + (0x14c - param_1[0x56])))
  {
    (**(code **)(*piVar4 + 0x10))(piVar4,uVar6,uVar2 & 1);
    iVar3 = *(int *)((int)piVar4 + iVar5 + 4);
  }
  return;
}

