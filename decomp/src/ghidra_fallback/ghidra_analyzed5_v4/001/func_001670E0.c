#include "ghidra_types.h"

extern int func_001681E4(int param_1);

// USA 001670E0 <- EU 001670E4 (Ghidra, non-matching)

uint func_001670E0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  
  iVar7 = 0;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfa;
  iVar9 = param_1[2];
  iVar8 = param_1[3];
  if (iVar9 != 0) {
    do {
      iVar2 = iVar8 + iVar7 * 0x38;
      if (*(char *)(iVar2 + 0x35) != '\0') {
        fVar11 = *(float *)(*(int *)(iVar8 + iVar7 * 0x38 + 0x10) + 0x10);
        if ((*(char *)(iVar8 + iVar7 * 0x38 + 0x34) == '\0') && (*(float *)(iVar2 + 0x30) == fVar11)
           ) {
          piVar3 = *(int **)(iVar2 + 0x10);
          pcVar6 = *(code **)(*piVar3 + 0x10);
          uVar5 = 0;
        }
        else {
          *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
          piVar3 = *(int **)(iVar8 + iVar7 * 0x38 + 0x10);
          pcVar6 = *(code **)(*piVar3 + 0x10);
          uVar5 = 1;
        }
        (*pcVar6)(piVar3,uVar5);
        *(undefined1 *)(iVar8 + iVar7 * 0x38 + 0x34) = 0;
        *(float *)(iVar8 + iVar7 * 0x38 + 0x30) = fVar11;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar9);
  }
  uVar4 = param_1[4];
  if (uVar4 == 0) {
    if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1);
      uVar4 = param_1[4];
      if (uVar4 != 0) goto LAB_00167204;
    }
    bVar1 = *(byte *)(param_1 + 0x1c);
    uVar4 = (uint)bVar1;
    if ((bVar1 & 2) != 0 || (bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x1c) = bVar1 | 4;
    }
  }
LAB_00167204:
  bVar10 = (*(byte *)(param_1 + 0x1c) & 4) != 0;
  if (bVar10) {
    uVar4 = param_1[1];
  }
  if ((bVar10 && uVar4 != 0) && (*(byte *)(param_1 + 0x1c) & 8) != 0) {
    *(byte *)(uVar4 + 0x70) = *(byte *)(uVar4 + 0x70) | 2;
    if (*(int *)(uVar4 + 4) != 0) {
      func_001681E4(*(int *)(uVar4 + 4));
    }
  }
  return (*(byte *)(param_1 + 0x1c) & 4) >> 2;
}

