#include "ghidra_types.h"

extern int func_00582250(int param_1);
extern int *DAT_00310330;

// USA 00310218 <- EU 003101F4 (Ghidra, non-matching)
// GLOBAL DAT_00310330 int *

void func_00310218(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  piVar6 = DAT_00310330;
  if ((-1 < *(int *)(param_2 + 0x29c)) && (-1 < *(int *)(param_2 + 0x2a0))) {
    iVar1 = *(int *)(param_2 + 0x2a4);
    bVar10 = -1 < iVar1;
    if (bVar10) {
      iVar1 = *(int *)(param_2 + 0x2a8);
    }
    if (bVar10 && -1 < iVar1) {
      puVar2 = (uint *)func_00582250(*DAT_00310330);
      uVar3 = *(uint *)(param_2 + 0x29c);
      uVar7 = *puVar2;
      if (uVar3 < uVar7) {
        puVar2 = (uint *)puVar2[2];
      }
      uVar8 = 0;
      if (uVar3 < uVar7) {
        uVar3 = puVar2[uVar3];
      }
      else {
        uVar3 = 0;
      }
      piVar5 = *(int **)(uVar3 + 0x28);
      piVar9 = piVar5 + *(int *)(uVar3 + 0x20);
      if (piVar5 != piVar9) {
        do {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          uVar12 = *(undefined4 *)(iVar1 + 0x1c);
          uVar11 = *(undefined4 *)(iVar1 + 0x20);
          puVar4 = (undefined4 *)(param_1 + 0x98c);
          if (uVar8 < 10) {
            puVar4 = (undefined4 *)(param_1 + 0x98c) + uVar8 * 3;
          }
          uVar8 = uVar8 + 1;
          *puVar4 = *(undefined4 *)(iVar1 + 0x18);
          puVar4[1] = uVar12;
          puVar4[2] = uVar11;
        } while (piVar5 != piVar9);
      }
      puVar2 = (uint *)func_00582250(*piVar6);
      uVar3 = *(uint *)(param_2 + 0x2a4);
      uVar7 = *puVar2;
      if (uVar3 < uVar7) {
        puVar2 = (uint *)puVar2[2];
      }
      uVar8 = 0;
      if (uVar3 < uVar7) {
        uVar3 = puVar2[uVar3];
      }
      else {
        uVar3 = 0;
      }
      piVar6 = *(int **)(uVar3 + 0x28);
      piVar5 = piVar6 + *(int *)(uVar3 + 0x20);
      if (piVar6 != piVar5) {
        do {
          iVar1 = *piVar6;
          piVar6 = piVar6 + 1;
          uVar11 = *(undefined4 *)(iVar1 + 0x1c);
          uVar12 = *(undefined4 *)(iVar1 + 0x20);
          puVar4 = (undefined4 *)(param_1 + 0xa04);
          if (uVar8 < 10) {
            puVar4 = (undefined4 *)(param_1 + 0xa04) + uVar8 * 3;
          }
          uVar8 = uVar8 + 1;
          *puVar4 = *(undefined4 *)(iVar1 + 0x18);
          puVar4[1] = uVar11;
          puVar4[2] = uVar12;
        } while (piVar6 != piVar5);
      }
    }
  }
  return;
}

