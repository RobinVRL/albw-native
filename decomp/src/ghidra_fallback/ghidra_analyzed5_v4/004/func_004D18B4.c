#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584BC4(int param_1,uint param_2);
extern char *DAT_004d1ba0;
extern int DAT_004d1ba4;
extern char *DAT_004d1ba8;
extern int DAT_004d1bac;
extern int DAT_004d1bb0;
extern int DAT_004d1bb4;

// USA 004D18B4 <- EU 004D188C (Ghidra, non-matching)
// GLOBAL DAT_004d1ba0 char *
// GLOBAL DAT_004d1ba4 int
// GLOBAL DAT_004d1ba8 char *
// GLOBAL DAT_004d1bac int
// GLOBAL DAT_004d1bb0 int
// GLOBAL DAT_004d1bb4 int

void func_004D18B4(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  pcVar2 = DAT_004d1ba8;
  iVar1 = DAT_004d1ba4;
  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x5c);
  local_30 = (uint)*DAT_004d1ba0;
  if (iVar9 < 1) {
    return;
  }
  local_2c = DAT_004d1bac;
  local_28 = param_1;
LAB_004d18c8:
  local_34 = func_00584BC4(local_28,uVar8);
  iVar6 = 0;
  local_38 = local_2c;
  do {
    (**(code **)(local_38 + 8))(&local_38);
    iVar4 = 0;
    do {
      if (local_34[iVar4] == '\0') {
        if (iVar4 < 0x40001) goto LAB_004d1924;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
LAB_004d1924:
    pcVar3 = pcVar2;
    if (-1 < iVar6 && iVar6 <= iVar4) {
      pcVar3 = local_34 + iVar6;
    }
    if (*pcVar3 == '\0') goto LAB_004d1b8c;
    (**(code **)(local_38 + 8))(&local_38);
    iVar4 = DAT_004d1bb0;
    iVar5 = 0;
    do {
      if (local_34[iVar5] == '\0') {
        if (iVar5 < 0x40001) goto LAB_004d1980;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_004d1980:
    pcVar3 = pcVar2;
    if (-1 < iVar6 && iVar6 <= iVar5) {
      pcVar3 = local_34 + iVar6;
    }
    if (*pcVar3 != *(char *)(iVar1 + iVar6)) goto LAB_004d1b8c;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 5;
    (**(code **)(local_38 + 8))(&local_38);
    iVar5 = 0;
    do {
      if (local_34[iVar5] == '\0') {
        if (iVar5 < 0x40001) goto LAB_004d19f8;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_004d19f8:
    pcVar3 = pcVar2;
    if (-1 < iVar7 && iVar7 <= iVar5) {
      pcVar3 = local_34 + iVar7;
    }
    if (*pcVar3 == '\0') {
LAB_004d1aa0:
      iVar6 = DAT_004d1bb4;
      iVar4 = 0;
      goto LAB_004d1aa8;
    }
    iVar7 = iVar6 + 5;
    (**(code **)(local_38 + 8))(&local_38);
    iVar5 = 0;
    do {
      if (local_34[iVar5] == '\0') {
        if (iVar5 < 0x40001) goto LAB_004d1a58;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_004d1a58:
    pcVar3 = pcVar2;
    if (-1 < iVar7 && iVar7 <= iVar5) {
      pcVar3 = local_34 + iVar7;
    }
    if (*pcVar3 != *(char *)(iVar4 + iVar6)) goto LAB_004d1aa0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  func_004CEA18(local_28,local_30,uVar8);
  goto LAB_004d1b8c;
LAB_004d1aa8:
  do {
    iVar7 = iVar4 + 5;
    (**(code **)(local_38 + 8))(&local_38);
    iVar5 = 0;
    do {
      if (local_34[iVar5] == '\0') {
        if (iVar5 < 0x40001) goto LAB_004d1aec;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_004d1aec:
    pcVar3 = pcVar2;
    if (-1 < iVar7 && iVar7 <= iVar5) {
      pcVar3 = local_34 + iVar7;
    }
    if (*pcVar3 == '\0') goto LAB_004d1b8c;
    iVar7 = iVar4 + 5;
    (**(code **)(local_38 + 8))(&local_38);
    iVar5 = 0;
    do {
      if (local_34[iVar5] == '\0') {
        if (iVar5 < 0x40001) goto LAB_004d1b4c;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_004d1b4c:
    pcVar3 = pcVar2;
    if (-1 < iVar7 && iVar7 <= iVar5) {
      pcVar3 = local_34 + iVar7;
    }
    if (*pcVar3 != *(char *)(iVar6 + iVar4)) goto LAB_004d1b8c;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  func_004CEA18(local_28,local_30 ^ 1,uVar8);
LAB_004d1b8c:
  uVar8 = uVar8 + 1;
  if (iVar9 <= (int)uVar8) {
    return;
  }
  goto LAB_004d18c8;
}

