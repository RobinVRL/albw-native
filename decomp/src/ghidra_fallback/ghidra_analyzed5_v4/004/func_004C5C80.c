#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001E5B00(undefined4 *param_1);
extern int func_004C4674(int param_1);
extern int func_004C5080(int param_1);

// USA 004C5C80 <- EU 004C5C58 (Ghidra, non-matching)

undefined4 * func_004C5C80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  func_004C5080(param_1);
  iVar5 = *(int *)(param_1 + 0x3dbb8);
  iVar4 = (param_1 + 0x3dbac) - *(int *)(param_1 + 0x3dbb8);
  iVar2 = *(int *)(param_1 + 0x3dbb0) - iVar5;
  iVar3 = *(int *)(iVar2 + iVar5 + 4);
  if (iVar2 != iVar4) {
    do {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x3dbb8) + iVar2),in_s0);
      *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + -1;
      func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + iVar2));
      iVar2 = iVar3 - iVar5;
      *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar2 != iVar4);
  }
  func_004C4674(param_1);
  puVar1 = func_001E5B00((undefined4 *)(param_1 + 0x3dbbc));
  return puVar1 + -0xf6ef;
}

