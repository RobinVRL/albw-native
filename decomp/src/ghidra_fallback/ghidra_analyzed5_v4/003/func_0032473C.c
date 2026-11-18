#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 0032473C <- EU 00324718 (Ghidra, non-matching)

undefined4 func_0032473C(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  if (((*param_1 & 0xff) == 0xc2) && (uVar1 = *param_1 >> 8, uVar1 != 0)) {
    uVar4 = uVar1 & 1;
    uVar5 = uVar4 + 1;
    puVar3 = param_1 + 1;
    iVar6 = 1;
    if (1 < uVar5) {
      do {
        if (*(char *)((int)param_1 + (puVar3[iVar6] - 1)) != '\0') {
          return 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar5);
    }
    if (uVar5 < uVar1 + 1) {
      do {
        if (*(char *)((int)param_1 + (puVar3[uVar5] - 1)) != '\0') {
          return 0;
        }
        if (*(char *)((int)param_1 + (puVar3[uVar5 + 1] - 1)) != '\0') {
          return 0;
        }
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < (int)(uVar1 + 1));
    }
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      iVar6 = 0;
      if (uVar4 != 0) {
        do {
          if (puVar3[iVar6 + 1] <= puVar3[iVar6]) {
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar4);
      }
    }
    if (uVar4 < uVar1) {
      do {
        puVar2 = puVar3 + uVar4;
        puVar7 = (uint *)puVar2[1];
        if (puVar7 > (uint *)puVar3[uVar4]) {
          puVar2 = (uint *)puVar2[2];
        }
        if (puVar7 <= (uint *)puVar3[uVar4] || puVar2 <= puVar7) {
          return 0;
        }
        uVar4 = uVar4 + 2;
      } while ((int)uVar4 < (int)uVar1);
    }
    if (*puVar3 == uVar1 * 4 + 8) {
      iVar6 = 0;
      if (0 < (int)(uVar1 - 1)) {
        do {
          uVar4 = func_0010FBAC((uint *)((int)param_1 + param_1[iVar6 + 1]),
                                (uint *)((int)param_1 + param_1[iVar6 + 2]));
          if (0 < (int)uVar4) {
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uVar1 - 1));
      }
      return 1;
    }
  }
  return 0;
}

