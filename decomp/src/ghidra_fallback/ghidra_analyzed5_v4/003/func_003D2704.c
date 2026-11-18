#include "ghidra_types.h"

extern undefined4 DAT_003d27e8;

// USA 003D2704 <- EU 003D26E0 (Ghidra, non-matching)
// GLOBAL DAT_003d27e8 undefined4

undefined4 func_003D2704(int *param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  
  iVar4 = *param_2;
  puVar5 = (ushort *)param_2[1];
  iVar8 = 1;
  uVar2 = iVar4 * 2 - 2;
  puVar7 = puVar5 + iVar4 + -1;
  if (iVar4 == 2) {
    uVar2 = (uint)*puVar5;
  }
  if ((iVar4 == 2 && uVar2 == 0x2e) && (puVar5[1] == 0x2e)) {
    iVar8 = 2;
  }
  puVar6 = puVar5;
  if (param_3 < puVar5) {
    iVar4 = 0;
    while (puVar3 = puVar6 + -1, param_3 <= puVar3) {
      if (*puVar3 == 0x2f) {
        if (iVar4 == 1) {
          if (*puVar6 == 0x2e) {
            iVar8 = iVar8 + 1;
          }
        }
        else if (iVar4 == 2) {
          uVar1 = *puVar6;
          bVar9 = uVar1 == 0x2e;
          if (bVar9) {
            uVar1 = puVar6[1];
          }
          if (bVar9 && uVar1 == 0x2e) {
            iVar8 = iVar8 + 2;
          }
        }
        if (iVar8 == 0) goto LAB_003d27b4;
        do {
          puVar3 = puVar3 + -1;
        } while (*puVar3 == 0x2f);
        iVar4 = 0;
        iVar8 = iVar8 + -1;
        puVar7 = puVar3;
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar3;
    }
    puVar6 = puVar5;
    if (iVar8 != 0) {
      return DAT_003d27e8;
    }
LAB_003d27b4:
    if (puVar3 == param_3) {
      puVar6 = param_3 + 1;
    }
  }
  if (param_3 < puVar7) {
    *param_1 = ((int)puVar7 - (int)puVar6 >> 1) + 1;
    param_1[1] = (int)puVar6;
  }
  else {
    *param_1 = 0;
    param_1[1] = (int)param_3;
  }
  return 0;
}

