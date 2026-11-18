#include "ghidra_types.h"

extern int func_003CC61C(int param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_003CD0F0(int param_1);

// USA 003CC530 <- EU 003CC50C (Ghidra, non-matching)

void func_003CC530(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int *piVar2;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  void *pvVar3;
  
  uVar7 = *(uint *)(param_2 + 4);
  *(char *)(param_1 + 2) = (char)uVar7;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  iVar5 = 0;
  piVar2 = (int *)(param_2 + 8);
  for (uVar7 = uVar7 & 0xff; uVar7 != 0; uVar7 = uVar7 - 1) {
    param_1[iVar5 + 3] = *piVar2 + param_2;
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x23] = piVar2[2] + (int)piVar2;
  param_1[0x24] = piVar2[3];
  iVar5 = piVar2[5];
  iVar6 = piVar2[4];
  bVar8 = iVar5 != 0;
  piVar2 = (int *)((int)piVar2 + iVar6);
  if (bVar8) {
    iVar6 = 0;
  }
  param_1[0xa5] = iVar5;
  while (bVar8) {
    iVar5 = iVar5 + -1;
    bVar8 = iVar5 != 0;
    param_1[iVar6 + 0x25] = *piVar2;
    piVar2 = piVar2 + 2;
    iVar6 = iVar6 + 1;
  }
  iVar5 = param_1[0xa6];
  pvVar3 = func_003CD0F0((int)param_1);
  uVar1 = SUB41(pvVar3,0);
  param_1[1] = param_4;
  if (-1 < param_4) {
    uVar1 = 3;
  }
  *param_1 = param_3;
  if (-1 < param_4) {
    *(undefined1 *)(param_1 + 0xa6) = uVar1;
  }
  puVar4 = func_003CC61C((int)param_1,param_1 + 0xa9,param_3,param_4);
  param_1[0xd9] = (int)puVar4 + (-0x2a4 - (int)param_1) >> 2;
  if (param_1[1] < 0) {
    *(char *)(param_1 + 0xa6) = (char)iVar5;
  }
  return;
}

