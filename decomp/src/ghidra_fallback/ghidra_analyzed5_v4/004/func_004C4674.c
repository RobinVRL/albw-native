#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001E5810(uint *param_1,int param_2);

// USA 004C4674 <- EU 004C464C (Ghidra, non-matching)

void func_004C4674(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float in_s0;
  
  iVar5 = *(int *)(param_1 + 0x3dba8);
  piVar4 = (int *)((param_1 + 0x3db9c) - *(int *)(param_1 + 0x3dba8));
  piVar1 = (int *)(*(int *)(param_1 + 0x3dba0) - iVar5);
  iVar2 = *(int *)((int)piVar1 + iVar5 + 4);
  if (piVar1 != piVar4) {
    do {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x3dba8) + (int)piVar1),in_s0);
      *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + -1;
      func_001E5810((uint *)(param_1 + 0x3dbbc),(int)piVar1);
      piVar3 = (int *)piVar1[0xb2];
      (**(code **)(*piVar1 + 0xc))(piVar1);
      (**(code **)(*piVar3 + 0x10))(piVar3);
      piVar1 = (int *)(iVar2 - iVar5);
      iVar2 = *(int *)(iVar2 + 4);
    } while (piVar1 != piVar4);
  }
  return;
}

