#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);

// USA 0027B0F0 <- EU 0027B118 (Ghidra, non-matching)

void func_0027B0F0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  
  piVar14 = (int *)param_1[2];
  piVar13 = piVar14 + *param_1;
  for (; piVar14 != piVar13; piVar14 = piVar14 + 1) {
    piVar12 = *(int **)(*piVar14 + 0x28);
    if (piVar12 != (int *)0x0) {
      iVar5 = *(int *)(*piVar14 + 0x28);
      iVar1 = *(int *)(*piVar14 + 0x20);
      for (; piVar12 != (int *)(iVar5 + iVar1 * 4); piVar12 = piVar12 + 1) {
        iVar2 = *piVar12;
        if (0 < *(int *)(iVar2 + 0x5c)) {
          puVar10 = *(undefined4 **)(iVar2 + 100);
          puVar11 = puVar10 + *(int *)(iVar2 + 0x5c);
          for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
            uVar3 = *(uint *)*puVar10;
            uVar7 = ((uint *)*puVar10)[1];
            if (uVar3 < *param_1) {
              iVar2 = *(int *)(param_1[2] + uVar3 * 4);
            }
            else {
              iVar2 = 0;
            }
            if (uVar7 < *(uint *)(iVar2 + 0x20)) {
              iVar2 = *(int *)(*(int *)(iVar2 + 0x28) + uVar7 * 4);
            }
            else {
              iVar2 = 0;
            }
            puVar4 = (undefined4 *)func_0010BAB4(8);
            if (puVar4 != (undefined4 *)0x0) {
              uVar8 = *(undefined4 *)(iVar2 + 0x40);
              *puVar4 = *(undefined4 *)(iVar2 + 0x3c);
              puVar4[1] = uVar8;
            }
            if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x7c)) {
              *(undefined4 **)(*(int *)(iVar2 + 0x80) + *(int *)(iVar2 + 0x78) * 4) = puVar4;
              *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
            }
          }
        }
      }
    }
  }
  for (piVar14 = (int *)param_1[2]; piVar14 != piVar13; piVar14 = piVar14 + 1) {
    if (*(int *)(*piVar14 + 0x28) != 0) {
      iVar1 = *(int *)(*piVar14 + 0x20);
      uVar3 = 1;
      if (1 < iVar1) {
        do {
          iVar5 = *piVar14;
          if (uVar3 - 1 < *(uint *)(iVar5 + 0x20)) {
            iVar2 = *(int *)(*(int *)(iVar5 + 0x28) + (uVar3 - 1) * 4);
          }
          else {
            iVar2 = 0;
          }
          if (uVar3 < *(uint *)(iVar5 + 0x20)) {
            iVar5 = *(int *)(*(int *)(iVar5 + 0x28) + uVar3 * 4);
          }
          else {
            iVar5 = 0;
          }
          puVar10 = (undefined4 *)func_0010BAB4(8);
          if (puVar10 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)(iVar2 + 0x40);
            *puVar10 = *(undefined4 *)(iVar2 + 0x3c);
            puVar10[1] = uVar8;
          }
          if (*(int *)(iVar5 + 0x78) < *(int *)(iVar5 + 0x7c)) {
            *(undefined4 **)(*(int *)(iVar5 + 0x80) + *(int *)(iVar5 + 0x78) * 4) = puVar10;
            *(int *)(iVar5 + 0x78) = *(int *)(iVar5 + 0x78) + 1;
          }
          puVar10 = (undefined4 *)func_0010BAB4(8);
          if (puVar10 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)(iVar5 + 0x40);
            *puVar10 = *(undefined4 *)(iVar5 + 0x3c);
            puVar10[1] = uVar8;
          }
          if (*(int *)(iVar2 + 0x5c) < *(int *)(iVar2 + 0x60)) {
            *(undefined4 **)(*(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x5c) * 4) = puVar10;
            *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < iVar1);
      }
      iVar1 = *piVar14;
      uVar3 = *(uint *)(iVar1 + 0x20);
      if (uVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(iVar1 + 0x28);
      }
      if (uVar3 - 1 < uVar3) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x28) + (uVar3 - 1) * 4);
      }
      else {
        iVar1 = 0;
      }
      *(undefined1 *)(iVar5 + 0xb0) = 1;
      *(undefined1 *)(iVar1 + 0xb1) = 1;
      if (*(char *)(*piVar14 + 4) != '\0') {
        puVar10 = (undefined4 *)func_0010BAB4(8);
        if (puVar10 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)*piVar14;
          puVar10[1] = *(undefined4 *)(iVar5 + 0x40);
          *puVar10 = uVar8;
        }
        if (*(int *)(iVar1 + 0x5c) < *(int *)(iVar1 + 0x60)) {
          *(undefined4 **)(*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x5c) * 4) = puVar10;
          *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
        }
        puVar10 = (undefined4 *)func_0010BAB4(8);
        if (puVar10 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)(iVar1 + 0x40);
          *puVar10 = *(undefined4 *)*piVar14;
          puVar10[1] = uVar8;
        }
        if (*(int *)(iVar5 + 0x78) < *(int *)(iVar5 + 0x7c)) {
          *(undefined4 **)(*(int *)(iVar5 + 0x80) + *(int *)(iVar5 + 0x78) * 4) = puVar10;
          *(int *)(iVar5 + 0x78) = *(int *)(iVar5 + 0x78) + 1;
        }
      }
    }
  }
  for (piVar14 = (int *)param_1[2]; piVar14 != piVar13; piVar14 = piVar14 + 1) {
    if (*(int *)(*piVar14 + 0x28) != 0) {
      iVar1 = *(int *)(*piVar14 + 0x20);
      uVar3 = 0;
      if (0 < iVar1) {
        do {
          if (uVar3 < *(uint *)(*piVar14 + 0x20)) {
            iVar5 = *(int *)(*(int *)(*piVar14 + 0x28) + uVar3 * 4);
          }
          else {
            iVar5 = 0;
          }
          iVar2 = *(int *)(iVar5 + 0x5c);
          if (0 < iVar2) {
            func_0010B380((undefined4 *)(iVar5 + 0x94),iVar2,(int *)0x0,4);
            uVar7 = 0;
            do {
              if (uVar7 < *(uint *)(iVar5 + 0x5c)) {
                puVar9 = *(uint **)(*(int *)(iVar5 + 100) + uVar7 * 4);
              }
              else {
                puVar9 = (uint *)0x0;
              }
              if (*puVar9 < *param_1) {
                iVar6 = *(int *)(param_1[2] + *puVar9 * 4);
              }
              else {
                iVar6 = 0;
              }
              if (puVar9[1] < *(uint *)(iVar6 + 0x20)) {
                uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x28) + puVar9[1] * 4);
              }
              else {
                uVar8 = 0;
              }
              piVar12 = (int *)(iVar5 + 0x94);
              if (*piVar12 < *(int *)(iVar5 + 0x98)) {
                *(undefined4 *)(*(int *)(iVar5 + 0x9c) + *piVar12 * 4) = uVar8;
                *piVar12 = *piVar12 + 1;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar2);
          }
          iVar2 = *(int *)(iVar5 + 0x78);
          if (0 < iVar2) {
            func_0010B380((undefined4 *)(iVar5 + 0xa0),iVar2,(int *)0x0,4);
            uVar7 = 0;
            do {
              if (uVar7 < *(uint *)(iVar5 + 0x78)) {
                puVar9 = *(uint **)(*(int *)(iVar5 + 0x80) + uVar7 * 4);
              }
              else {
                puVar9 = (uint *)0x0;
              }
              if (*puVar9 < *param_1) {
                iVar6 = *(int *)(param_1[2] + *puVar9 * 4);
              }
              else {
                iVar6 = 0;
              }
              if (puVar9[1] < *(uint *)(iVar6 + 0x20)) {
                uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x28) + puVar9[1] * 4);
              }
              else {
                uVar8 = 0;
              }
              piVar12 = (int *)(iVar5 + 0xa0);
              if (*piVar12 < *(int *)(iVar5 + 0xa4)) {
                *(undefined4 *)(*(int *)(iVar5 + 0xa8) + *piVar12 * 4) = uVar8;
                *piVar12 = *piVar12 + 1;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar2);
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < iVar1);
      }
    }
  }
  return;
}

