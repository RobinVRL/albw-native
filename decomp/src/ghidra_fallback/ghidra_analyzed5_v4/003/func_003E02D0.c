#include "ghidra_types.h"


// USA 003E02D0 <- EU 003E02B0 (Ghidra, non-matching)

void * func_003E02D0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  if (*(char *)(param_1 + 0x104) == '\0') {
    return (void *)param_1;
  }
  local_48[0] = *param_2;
  local_48[1] = param_2[1];
  local_34 = 0;
  do {
    iVar1 = param_1 + local_34 * 4;
    iVar3 = param_1 + local_34 * 8;
    iVar2 = *(int *)(iVar1 + 0xd0);
    iVar9 = 0;
    piVar4 = (int *)(*(int *)(iVar1 + 0x3c) + *(int *)(param_1 + 0xa0) * 4);
    piVar5 = (int *)(*(int *)(iVar1 + 0x4c) + *(int *)(param_1 + 0xa8) * 4);
    piVar6 = (int *)(*(int *)(iVar3 + 0x60) + *(int *)(param_1 + 0xb8) * 4);
    piVar7 = (int *)(*(int *)(iVar1 + 0x7c) + *(int *)(param_1 + 200) * 4);
    piVar8 = (int *)local_48[local_34];
    piVar15 = (int *)(*(int *)(iVar3 + 0x5c) + *(int *)(param_1 + 0xb4) * 4);
    do {
      iVar10 = *piVar8;
      iVar13 = *piVar5;
      iVar9 = iVar9 + 1;
      *piVar5 = iVar10;
      iVar11 = *piVar15;
      iVar3 = iVar11;
      if (iVar11 < 0) {
        iVar3 = -iVar11;
      }
      iVar3 = iVar3 * *(int *)(param_1 + 0xbc) >> 7;
      if (iVar11 < 0) {
        iVar3 = -iVar3;
      }
      *piVar15 = iVar3 + iVar13;
      iVar12 = *piVar6;
      iVar3 = iVar12;
      if (iVar12 < 0) {
        iVar3 = -iVar12;
      }
      iVar3 = iVar3 * *(int *)(param_1 + 0xc0) >> 7;
      if (iVar12 < 0) {
        iVar3 = -iVar3;
      }
      *piVar6 = iVar13 + iVar3;
      iVar14 = *(int *)(param_1 + 0xcc);
      iVar13 = *piVar7;
      iVar3 = iVar13;
      if (iVar13 < 0) {
        iVar3 = -iVar13;
      }
      iVar3 = iVar3 * iVar14 >> 7;
      if (iVar13 < 0) {
        iVar3 = -iVar3;
      }
      iVar3 = iVar3 + (iVar11 - iVar12);
      bVar17 = iVar3 < 0;
      *piVar7 = iVar3;
      if (bVar17) {
        iVar3 = -iVar3;
      }
      iVar3 = iVar3 * iVar14 >> 7;
      if (bVar17) {
        iVar3 = -iVar3;
      }
      iVar11 = *(int *)(param_1 + 0xe8);
      iVar14 = *piVar4;
      iVar16 = *(int *)(param_1 + 0xe0);
      iVar12 = *(int *)(param_1 + 0xec);
      *piVar4 = iVar10;
      iVar2 = iVar2 * iVar12 + iVar11 * (iVar13 - iVar3) >> 7;
      *piVar8 = *(int *)(param_1 + 0xe4) * iVar2 + iVar14 * iVar16 >> 7;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar9 < 0xa0);
    local_34 = local_34 + 1;
    *(int *)(iVar1 + 0xd0) = iVar2;
  } while (local_34 < 2);
  iVar2 = *(int *)(param_1 + 0xa0) + 0xa0;
  *(int *)(param_1 + 0xa0) = iVar2;
  if (*(int *)(param_1 + 0x9c) <= iVar2) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xa8) + 0xa0;
  *(int *)(param_1 + 0xa8) = iVar2;
  if (*(int *)(param_1 + 0xa4) <= iVar2) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb4) + 0xa0;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (*(int *)(param_1 + 0xac) <= iVar2) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb8) + 0xa0;
  *(int *)(param_1 + 0xb8) = iVar2;
  if (*(int *)(param_1 + 0xb0) <= iVar2) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  iVar2 = *(int *)(param_1 + 200) + 0xa0;
  *(int *)(param_1 + 200) = iVar2;
  if (*(int *)(param_1 + 0xc4) <= iVar2) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return (void *)param_1;
}

