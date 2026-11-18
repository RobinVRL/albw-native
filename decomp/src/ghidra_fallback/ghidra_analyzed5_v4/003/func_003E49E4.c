#include "ghidra_types.h"


// USA 003E49E4 <- EU 003E49C4 (Ghidra, non-matching)

undefined4 * func_003E49E4(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 4;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    puVar3 = (undefined4 *)(param_2 + *(int *)(param_4 + iVar1) * 4);
    *param_1 = *puVar3;
    param_1[1] = puVar3[param_3];
    puVar4 = puVar3 + param_3 * 2;
    param_1[2] = puVar3[1];
    param_1[3] = puVar3[param_3 + 1];
    param_1[4] = *puVar4;
    param_1[5] = puVar4[param_3];
    puVar3 = param_1 + 7;
    param_1[6] = puVar4[1];
    param_1 = param_1 + 8;
    *puVar3 = puVar4[param_3 + 1];
  } while (0 < iVar2);
  return param_1;
}

