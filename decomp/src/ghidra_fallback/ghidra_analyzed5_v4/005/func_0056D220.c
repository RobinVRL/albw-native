#include "ghidra_types.h"

extern int func_0056AEF8(int param_1,uint param_2);
extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B3E0(int param_1,uint param_2);
extern int func_0056B488(int param_1);
extern int func_0056B8D4(int param_1);
extern uint DAT_0056d2f0;

// USA 0056D220 <- EU 0056D1F8 (Ghidra, non-matching)
// GLOBAL DAT_0056d2f0 uint

int func_0056D220(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = DAT_0056d2f0;
  iVar2 = *(int *)(param_1 + 4);
  uVar5 = param_2 >> 0x18;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      iVar2 = func_0056B3E0(*(int *)(iVar2 + 0x3c),param_2);
      if (*(ushort *)(iVar2 + 0x10) == uVar1) {
        iVar2 = iVar2 + *(int *)(iVar2 + 0x14);
      }
      else {
        iVar2 = 0;
      }
      iVar4 = *(int *)(iVar2 + 4);
    }
    else {
      if (uVar5 != 3) {
        return 0;
      }
      iVar2 = func_0056AEF8(*(int *)(iVar2 + 0x3c),param_2);
      iVar4 = *(int *)(iVar2 + 8);
    }
    return iVar2 + iVar4;
  }
  iVar4 = func_0056AF9C(*(int *)(iVar2 + 0x3c),param_2);
  iVar4 = func_0056B8D4(iVar4);
  if (iVar4 == 3) {
    for (uVar5 = 0; puVar3 = (uint *)func_0056B488(*(int *)(iVar2 + 0x3c)), uVar5 < *puVar3;
        uVar5 = uVar5 + 1) {
      puVar3 = (uint *)func_0056B3E0(*(int *)(iVar2 + 0x3c),uVar5 | 0x2000000);
      bVar7 = param_2 <= *puVar3;
      bVar6 = *puVar3 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = puVar3[1] <= param_2;
        bVar6 = param_2 == puVar3[1];
      }
      if (!bVar7 || bVar6) {
        if ((ushort)puVar3[4] == uVar1) {
          iVar2 = (int)puVar3 + puVar3[5];
        }
        else {
          iVar2 = 0;
        }
        return iVar2 + *(int *)(iVar2 + 4);
      }
    }
  }
  return 0;
}

