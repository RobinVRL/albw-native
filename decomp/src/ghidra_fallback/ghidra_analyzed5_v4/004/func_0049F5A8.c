#include "ghidra_types.h"

extern int func_001DFE4C(int param_1);

// USA 0049F5A8 <- EU 0049F580 (Ghidra, non-matching)

void func_0049F5A8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[2] != 0) {
    iVar4 = param_1[3];
    for (iVar3 = param_1[1] - iVar4; iVar3 != (int)param_1 - iVar4;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      func_001DFE4C(iVar3);
    }
  }
  puVar1 = (undefined4 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined4 *)puVar1[1];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar2;
  }
  param_1[1] = param_1;
  param_1[2] = 0;
  *param_1 = param_1;
  return;
}

