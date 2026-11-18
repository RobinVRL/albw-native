#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 004C5080 <- EU 004C5058 (Ghidra, non-matching)

void func_004C5080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  iVar4 = *(int *)(param_1 + 0x3db98);
  iVar3 = (param_1 + 0x3db8c) - *(int *)(param_1 + 0x3db98);
  iVar1 = *(int *)(param_1 + 0x3db90) - iVar4;
  iVar2 = *(int *)(iVar1 + iVar4 + 4);
  if (iVar1 != iVar3) {
    do {
      func_0010F1F8((int *)(*(int *)(param_1 + 0x3db98) + iVar1),in_s0);
      *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + -1;
      func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + iVar1));
      iVar1 = iVar2 - iVar4;
      *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar1 != iVar3);
  }
  return;
}

