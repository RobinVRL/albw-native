#include "ghidra_types.h"

extern int func_0030B134(int *param_1,int param_2);
extern int func_00556068(int param_1);

// USA 0030DC44 <- EU 0030DC20 (Ghidra, non-matching)

int func_0030DC44(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar1 = func_0030B134(param_1,param_2);
    iVar2 = param_1[0x53];
    iVar4 = param_1[0x55];
    while ((iVar2 = iVar2 - iVar4, iVar5 = 0, iVar2 != (int)param_1 + (0x148 - param_1[0x55]) &&
           (puVar3 = func_00556068(iVar2), iVar5 = iVar2, *(int *)(puVar3[0xb4] + 8) != iVar1))) {
      iVar2 = *(int *)(iVar2 + iVar4 + 4);
    }
    return iVar5;
  }
  return param_1[7];
}

