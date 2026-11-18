#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00588BE4(int param_1);

// USA 004C4C80 <- EU 004C4C58 (Ghidra, non-matching)

void func_004C4C80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = func_00588BE4(param_2);
  iVar2 = *(int *)(param_1 + 0x3dbb8);
  iVar5 = *(int *)(param_1 + 0x3dbb8);
  iVar4 = *(int *)(param_1 + 0x3dbb0) - iVar5;
  while( true ) {
    if (iVar4 == (param_1 + 0x3dbac) - iVar2) {
      func_0010F1DC((int *)(param_1 + 0x3dbac),(int *)(*(int *)(param_1 + 0x3dbb8) + param_2));
      *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + 1;
      return;
    }
    iVar3 = func_00588BE4(iVar4);
    if (iVar1 <= iVar3) break;
    iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5;
  }
  func_0010F1DC((int *)(*(int *)(param_1 + 0x3dbb8) + iVar4),
                (int *)(*(int *)(param_1 + 0x3dbb8) + param_2));
  *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + 1;
  return;
}

