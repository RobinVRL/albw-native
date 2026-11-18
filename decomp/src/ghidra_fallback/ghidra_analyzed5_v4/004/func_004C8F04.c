#include "ghidra_types.h"

extern int func_00352034(undefined4 param_1,int *param_2,float *param_3);
extern int func_003524B0(int param_1);

// USA 004C8F04 <- EU 004C8EDC (Ghidra, non-matching)

void func_004C8F04(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(char *)(param_1 + 0x298) != '\0') {
    for (iVar6 = *(int *)(param_1 + 0x40); iVar6 != param_1 + 0x3c; iVar6 = *(int *)(iVar6 + 4)) {
      func_003524B0(*(int *)(iVar6 + 8));
    }
    uVar7 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        uVar2 = *(uint *)(param_1 + 0x54);
        if (uVar7 < uVar2) {
          iVar6 = *(int *)(param_1 + 0x50) + uVar7;
          if (*(int *)(param_1 + 0x4c) <= iVar6) {
            iVar6 = iVar6 - *(int *)(param_1 + 0x4c);
          }
          iVar6 = *(int *)(param_1 + 0x48) + iVar6 * 0x18;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x48);
        }
        if ((*(int **)(iVar6 + 4))[1] < 1) {
          if (((0 < (int)uVar2) && (-1 < (int)uVar7)) && ((int)uVar7 < (int)uVar2)) {
            uVar1 = uVar7;
            if ((int)uVar7 < (int)(uVar2 - 1)) {
              do {
                iVar8 = *(int *)(param_1 + 0x4c);
                iVar6 = *(int *)(param_1 + 0x50) + uVar1;
                if (iVar8 <= iVar6) {
                  iVar6 = iVar6 - iVar8;
                }
                iVar4 = *(int *)(param_1 + 0x50) + uVar1 + 1;
                if (iVar8 <= iVar4) {
                  iVar4 = iVar4 - iVar8;
                }
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar4 * 0x18);
                puVar5 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar6 * 0x18);
                uVar9 = puVar3[1];
                uVar10 = puVar3[2];
                uVar11 = puVar3[3];
                uVar12 = puVar3[4];
                uVar13 = puVar3[5];
                uVar1 = uVar1 + 1;
                *puVar5 = *puVar3;
                puVar5[1] = uVar9;
                puVar5[2] = uVar10;
                puVar5[3] = uVar11;
                puVar5[4] = uVar12;
                puVar5[5] = uVar13;
              } while ((int)uVar1 < *(int *)(param_1 + 0x54) + -1);
            }
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
          }
        }
        else {
          if (uVar7 < uVar2) {
            iVar8 = *(int *)(param_1 + 0x50) + uVar7;
            if (*(int *)(param_1 + 0x4c) <= iVar8) {
              iVar8 = iVar8 - *(int *)(param_1 + 0x4c);
            }
            puVar3 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar8 * 0x18);
          }
          else {
            puVar3 = *(undefined4 **)(param_1 + 0x48);
          }
          if (uVar7 < uVar2) {
            iVar8 = *(int *)(param_1 + 0x50) + uVar7;
            if (*(int *)(param_1 + 0x4c) <= iVar8) {
              iVar8 = iVar8 - *(int *)(param_1 + 0x4c);
            }
            iVar8 = *(int *)(param_1 + 0x48) + iVar8 * 0x18;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x48);
          }
          func_00352034(*puVar3,*(int **)(iVar6 + 4),(float *)(iVar8 + 8));
          uVar7 = uVar7 + 1;
        }
      } while ((int)uVar7 < *(int *)(param_1 + 0x54));
    }
  }
  return;
}

