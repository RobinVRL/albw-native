#include "ghidra_types.h"

extern int func_0011629C(uint *param_1,uint *param_2,uint param_3);

// USA 006019B8 <- EU 00601990 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

int func_006019B8(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = param_2 + -1;
  iVar5 = 0;
  if (iVar2 < 0) {
    return -1;
  }
  while( true ) {
    iVar4 = (iVar5 + iVar2) / 2;
    uVar3 = *(uint *)(param_1 + param_3 * iVar4);
    if (param_4 < uVar3) {
      iVar2 = iVar4 + -1;
    }
    else {
      iVar5 = iVar4 + 1;
    }
    if (uVar3 == param_4) break;
    if (iVar2 < iVar5) {
      return -1;
    }
  }
  iVar2 = 1;
  if (1 < iVar5) {
    do {
      if (*(uint *)(param_1 + param_3 * (iVar4 + -1)) != param_4) break;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar2 < iVar5);
  }
  bVar6 = iVar4 == 0;
  if (-1 < iVar4) {
    bVar6 = param_2 == iVar4;
  }
  if (!bVar6 && (-1 < iVar4 && iVar4 <= param_2)) {
    do {
      puVar1 = (uint *)(param_3 * iVar4 + param_1);
      if (*puVar1 != param_4) {
        return -1;
      }
      uVar3 = func_0011629C((uint *)(param_5[2] + *(int *)(param_5[2] + puVar1[1] * 0x20 + 0x20)),
                            (uint *)*param_5,param_5[1]);
      if (uVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return -1;
}

