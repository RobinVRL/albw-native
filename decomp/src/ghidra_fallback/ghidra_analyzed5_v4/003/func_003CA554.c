#include "ghidra_types.h"


// USA 003CA554 <- EU 003CA530 (Ghidra, non-matching)

void * func_003CA554(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  
  uVar9 = 0;
  *(int *)(param_1 + 0x98) = param_2;
  iVar2 = param_2 + *(int *)(param_1 + 0x9c) * 4;
  *(int *)(param_1 + 0xb8) = iVar2;
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      iVar5 = 0;
      iVar3 = *(int *)(param_1 + uVar9 * 4 + 0x10);
      uVar4 = 0;
      if (*(uint *)(iVar3 + 0x1c) != 0) {
        do {
          sVar1 = *(short *)(*(int *)(iVar3 + 0x18) + iVar3 + uVar4 * 0x14);
          if (sVar1 != 0) {
            if (sVar1 == 1) {
              iVar5 = iVar5 + 2;
            }
            else if (sVar1 == 2) {
              iVar5 = iVar5 + 6;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(iVar3 + 0x1c));
      }
      iVar2 = iVar2 + iVar5 * 4;
      *(int *)(*(int *)(param_1 + 0xb8) + uVar9 * 4) = iVar5;
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < *(byte *)(param_1 + 0xc));
  }
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  uVar4 = (uint)*(byte *)(param_1 + 0xc);
  if (uVar4 != 0) {
    do {
      iVar3 = uVar9 * 4;
      uVar9 = uVar9 + 1 & 0xff;
      *(uint *)(param_1 + 0xbc) =
           *(int *)(param_1 + 0xbc) + (uint)*(byte *)(*(int *)(param_1 + iVar3 + 0x10) + 6);
    } while (uVar9 < uVar4);
  }
  *(int *)(param_1 + 0xb0) = iVar2;
  uVar9 = 0;
  uVar8 = 0;
  uVar10 = (uVar4 - *(int *)(param_1 + 0xbc)) * (*(int *)(param_1 + 0xbc) + 1);
  if (uVar4 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + uVar8 * 4 + 0x10) + 6) == '\0') {
        iVar3 = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar9 * 4) = 0x26;
        uVar4 = (uint)*(byte *)(param_1 + 0xc);
        uVar9 = uVar9 + 1 & 0xff;
        do {
          iVar5 = *(int *)(param_1 + iVar3 * 4 + 0x10);
          if (*(char *)(iVar5 + 6) != '\0') {
            if (*(char *)(iVar5 + 0x14) == '\x01') {
              uVar11 = 0x32;
            }
            else {
              uVar11 = 0x30;
            }
            *(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar9 * 4) = uVar11;
            uVar9 = uVar9 + 1 & 0xff;
          }
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + 1;
        } while (0 < (int)uVar4);
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0xc));
  }
  iVar2 = iVar2 + uVar10 * 4;
  *(int *)(param_1 + 0xac) = iVar2;
  if (uVar10 != 0) {
    piVar6 = *(int **)(param_1 + 0xb0);
    piVar7 = piVar6 + -1;
    if ((uVar10 & 1) != 0) {
      iVar2 = iVar2 + *piVar6 * 4;
      piVar7 = piVar6;
    }
    for (uVar9 = uVar10 * 0x800000 >> 0x18; uVar9 != 0; uVar9 = uVar9 - 1 & 0xff) {
      piVar6 = piVar7 + 1;
      piVar12 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      iVar2 = iVar2 + *piVar6 * 4 + *piVar12 * 4;
    }
  }
  *(int *)(param_1 + 0xc0) = iVar2;
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xc4) = iVar2;
  *(uint *)(param_1 + 200) = iVar2 + (uint)*(byte *)(param_1 + 0xc) * 4 + 4;
  return (void *)param_1;
}

