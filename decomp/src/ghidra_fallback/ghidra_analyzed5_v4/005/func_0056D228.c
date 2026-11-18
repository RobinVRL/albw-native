#include "ghidra_types.h"

extern int func_0056AEF8(int param_1,uint param_2);
extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B3E0(int param_1,uint param_2);
extern int func_0056B488(int param_1);
extern int func_0056B8D4(int param_1);
extern uint DAT_0056d2f0;

// USA 0056D228 <- EU 0056D200 (Ghidra, non-matching)
// GLOBAL DAT_0056d2f0 uint

int func_0056D228(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = DAT_0056d2f0;
  uVar5 = param_2 >> 0x18;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      iVar3 = func_0056B3E0(*(int *)(param_1 + 0x3c),param_2);
      if (*(ushort *)(iVar3 + 0x10) == uVar1) {
        iVar3 = iVar3 + *(int *)(iVar3 + 0x14);
      }
      else {
        iVar3 = 0;
      }
      iVar4 = *(int *)(iVar3 + 4);
    }
    else {
      if (uVar5 != 3) {
        return 0;
      }
      iVar3 = func_0056AEF8(*(int *)(param_1 + 0x3c),param_2);
      iVar4 = *(int *)(iVar3 + 8);
    }
    return iVar3 + iVar4;
  }
  iVar3 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  iVar3 = func_0056B8D4(iVar3);
  if (iVar3 == 3) {
    for (uVar5 = 0; puVar2 = (uint *)func_0056B488(*(int *)(param_1 + 0x3c)), uVar5 < *puVar2;
        uVar5 = uVar5 + 1) {
      puVar2 = (uint *)func_0056B3E0(*(int *)(param_1 + 0x3c),uVar5 | 0x2000000);
      bVar7 = param_2 <= *puVar2;
      bVar6 = *puVar2 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = puVar2[1] <= param_2;
        bVar6 = param_2 == puVar2[1];
      }
      if (!bVar7 || bVar6) {
        if ((ushort)puVar2[4] == uVar1) {
          iVar3 = (int)puVar2 + puVar2[5];
        }
        else {
          iVar3 = 0;
        }
        return iVar3 + *(int *)(iVar3 + 4);
      }
    }
  }
  return 0;
}

