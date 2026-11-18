#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001E5810(uint *param_1,int param_2);
extern int func_004C5080(int param_1);

// USA 004C45C4 <- EU 004C459C (Ghidra, non-matching)

void func_004C45C4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float in_s0;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_004C5080(param_1);
  iVar7 = *(int *)(param_1 + 0x3dbb8);
  iVar5 = (param_1 + 0x3dbac) - *(int *)(param_1 + 0x3dbb8);
  iVar3 = *(int *)(param_1 + 0x3dbb0) - iVar7;
  iVar1 = *(int *)(iVar3 + iVar7 + 4);
  if (iVar3 != iVar5) {
    do {
      if (*(char *)(iVar3 + 0x2d7) != '\0') {
        func_0010F1F8((int *)(*(int *)(param_1 + 0x3dbb8) + iVar3),in_s0);
        *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + -1;
        func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + iVar3));
        *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      }
      iVar3 = iVar1 - iVar7;
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar3 != iVar5);
  }
  iVar3 = *(int *)(param_1 + 0x3dba8);
  piVar6 = (int *)((param_1 + 0x3db9c) - *(int *)(param_1 + 0x3dba8));
  piVar2 = (int *)(*(int *)(param_1 + 0x3dba0) - iVar3);
  iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  if (piVar2 != piVar6) {
    do {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x3dba8) + (int)piVar2),in_s0);
      *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + -1;
      func_001E5810((uint *)(param_1 + 0x3dbbc),(int)piVar2);
      piVar4 = (int *)piVar2[0xb2];
      (**(code **)(*piVar2 + 0xc))(piVar2);
      (**(code **)(*piVar4 + 0x10))(piVar4);
      piVar2 = (int *)(iVar1 - iVar3);
      iVar1 = *(int *)(iVar1 + 4);
    } while (piVar2 != piVar6);
  }
  return;
}

