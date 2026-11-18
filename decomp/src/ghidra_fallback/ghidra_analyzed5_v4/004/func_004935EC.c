#include "ghidra_types.h"

extern int DAT_00493784;

// USA 004935EC <- EU 004935C4 (Ghidra, non-matching)
// GLOBAL DAT_00493784 int

int func_004935EC(int param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar9 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  (**(code **)(*param_2 + 8))(param_2);
  iVar3 = DAT_00493784;
  pcVar8 = (char *)param_2[1];
  uVar10 = 0;
  iVar4 = 0;
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    pcVar1 = pcVar8 + iVar4;
    iVar4 = iVar4 + 1;
    uVar10 = uVar10 * iVar9 + (int)*pcVar1;
    cVar2 = pcVar8[iVar4];
  }
  iVar11 = *(int *)(param_1 + 0x34);
  iVar4 = 0;
  iVar9 = iVar11;
  while( true ) {
    iVar6 = (iVar4 + iVar9) / 2;
    uVar5 = *(uint *)(*(int *)(param_1 + 0x38) + iVar6 * 0x10);
    if (uVar5 == uVar10) break;
    if (uVar5 < uVar10) {
      bVar12 = iVar4 == iVar6;
      iVar4 = iVar6;
      if (bVar12) {
        return -1;
      }
    }
    else {
      bVar12 = iVar9 == iVar6;
      iVar9 = iVar6;
      if (bVar12) {
        return -1;
      }
    }
  }
  if (iVar6 == -1) {
    return -1;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x38) + iVar6 * 0x10 + 4);
  if (uVar5 == 0) {
    return iVar6;
  }
  iVar6 = iVar6 - (uVar5 >> 0x18);
  do {
    iVar6 = iVar6 + 1;
    if (iVar11 <= iVar6) {
      return iVar6;
    }
    puVar7 = (uint *)(*(int *)(param_1 + 0x38) + iVar6 * 0x10);
    if (*puVar7 != uVar10) {
      return -1;
    }
    uVar5 = puVar7[1] & 0xffffff;
    if (*(uint *)(param_1 + 0x3c) < *(int *)(param_1 + 0x30) + uVar5) {
      return -1;
    }
    local_2c = *(int *)(param_1 + 0x30) + uVar5 * 4;
    local_30 = iVar3;
    (**(code **)(*param_2 + 8))(param_2);
    (**(code **)(*param_2 + 8))(param_2);
    iVar4 = param_2[1];
    (**(code **)(local_30 + 8))(&local_30);
    if (iVar4 == local_2c) {
LAB_00493764:
      bVar12 = true;
    }
    else {
      iVar4 = 0;
      do {
        if (*(char *)(param_2[1] + iVar4) != *(char *)(local_2c + iVar4)) break;
        if (*(char *)(param_2[1] + iVar4) == '\0') goto LAB_00493764;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40001);
      bVar12 = false;
    }
    if (bVar12) {
      return iVar6;
    }
  } while( true );
}

