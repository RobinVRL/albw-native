#include "ghidra_types.h"


// USA 003DFDD8 <- EU 003DFDB8 (Ghidra, non-matching)

void * func_003DFDD8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x56) == '\0') {
    return (void *)param_1;
  }
  uVar7 = 0;
  local_38[0] = *param_2;
  local_38[1] = param_2[1];
  local_38[2] = param_2[2];
  local_38[3] = param_2[3];
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x55) != '\0') {
    do {
      iVar8 = param_1 + uVar7 * 4;
      uVar5 = 0;
      iVar2 = *(int *)(iVar8 + 0x2c);
      piVar3 = (int *)local_38[uVar7];
      piVar4 = (int *)(*(int *)(iVar8 + 0x1c) + iVar1 * 0x280);
      do {
        iVar9 = *piVar4;
        iVar6 = iVar9;
        if (iVar9 < 0) {
          iVar6 = -iVar9;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 * *(int *)(param_1 + 0x44) >> 7;
        if (iVar9 < 0) {
          iVar6 = -iVar6;
        }
        iVar2 = *(int *)(param_1 + 0x4c) * iVar2 + *(int *)(param_1 + 0x48) * (*piVar3 - iVar6) >> 7
        ;
        *piVar4 = iVar2;
        *piVar3 = iVar9;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < 0xa0);
      *(int *)(iVar8 + 0x2c) = iVar2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x55));
  }
  uVar7 = *(int *)(param_1 + 0x40) + 1;
  *(uint *)(param_1 + 0x40) = uVar7;
  if (*(uint *)(param_1 + 0x3c) <= uVar7) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return (void *)param_1;
}

