#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010DB90(void);
extern int func_0010EEE0(int param_1);
extern int func_001300D4(int param_1,undefined4 param_2);
extern int func_001B7F54(int param_1,uint param_2);
extern int func_001B8048(int param_1,int param_2,uint param_3);
extern int func_0023328C(int param_1,undefined4 param_2);
extern int func_002335E0(int param_1,uint param_2,int *param_3,int *param_4);
extern int func_003FA4B8(int *param_1,int param_2,int param_3);
extern int func_0048C258(int *param_1,undefined *param_2);
extern int func_00522F44(int param_1,undefined4 *param_2,int *param_3);
extern int *DAT_004ce47c;
extern int *DAT_004ce480;
extern undefined *DAT_004ce484;
extern float DAT_004ce488;
extern int DAT_004ce48c;
extern uint *DAT_004ce490;
extern int *DAT_004ce494;
extern undefined4 DAT_004ce498;
extern int DAT_004ce49c;

// USA 004CE0BC <- EU 004CE094 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_004ce47c int *
// GLOBAL DAT_004ce480 int *
// GLOBAL DAT_004ce484 undefined *
// GLOBAL DAT_004ce488 float
// GLOBAL DAT_004ce48c int
// GLOBAL DAT_004ce490 uint *
// GLOBAL DAT_004ce494 int *
// GLOBAL DAT_004ce498 undefined4
// GLOBAL DAT_004ce49c int

int * func_004CE0BC(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  float fVar12;
  
  param_1[0x14] = param_2;
  param_1[0x4f] = -1;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[0x58] = *(int *)(param_5 + 0x18);
  pbVar11 = *(byte **)(param_2 + 8);
  *(char *)((int)param_1 + 0x16b) = (char)((*pbVar11 & 2) >> 1);
  func_00522F44(param_2,param_1 + 10,(int *)0x0);
  piVar2 = DAT_004ce47c;
  bVar1 = false;
  puVar3 = (undefined4 *)func_0010BAB4(8);
  piVar4 = DAT_004ce480;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  param_1[0x15] = (int)puVar3;
  iVar9 = *piVar4;
  if (iVar9 != 0) {
    *puVar3 = *(undefined4 *)(iVar9 + 0x3dbdc);
    puVar3[1] = *(undefined4 *)(iVar9 + 0x3dbe0);
    piVar4 = (int *)param_1[0x15];
    if (*piVar4 != 0) {
      param_1[0x4d] = *(int *)(*piVar4 + 0x2c);
      param_1[0x4e] = *(int *)(*piVar4 + 0x30);
      if (*(char *)(*piVar4 + 0x23) == '\x02') {
        bVar1 = true;
      }
    }
  }
  func_0010B380(param_1 + 0x17,*(int *)(*(int *)(param_1[0x14] + 8) + 0x44),(int *)0x0,4);
  iVar9 = 0;
  if (0 < param_1[0x18]) {
    do {
      iVar5 = (**(code **)(*param_1 + 0x14))
                        (param_1,*(int *)(*(int *)(param_1[0x14] + 8) + 0x40) + iVar9 * 0x38);
      if (iVar5 != 0) {
        piVar4 = param_1 + 0x17;
        if (*piVar4 < param_1[0x18]) {
          *(int *)(param_1[0x19] + *piVar4 * 4) = iVar5;
          *piVar4 = *piVar4 + 1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1[0x18]);
  }
  func_0048C258(param_1 + 0x17,DAT_004ce484);
  fVar12 = DAT_004ce488;
  if (*(char *)((int)param_1 + 0x16b) != '\0') {
    iVar5 = *(int *)(param_1[9] + 0x10);
    iVar9 = func_0010BA78(iVar5 * 0xc);
    func_003FA4B8(param_1 + 0xd,iVar9,iVar5 * 3);
    iVar9 = param_1[0xe];
    uVar7 = 0;
    do {
      uVar6 = uVar7 + 1;
      *(float *)(param_1[0xd] + uVar7 * 4) = fVar12;
      uVar7 = uVar6;
    } while (uVar6 <= iVar9 - 1U);
    **(uint **)(param_1[9] + 0xc) = **(uint **)(param_1[9] + 0xc) | 2;
  }
  iVar9 = DAT_004ce48c;
  param_1[0x59] = DAT_004ce48c;
  if (bVar1) {
    param_1[0x59] = iVar9 + 0x90000;
  }
  if (*(int *)(param_5 + 0x30) != 0) {
    param_1[0x59] = param_1[0x59] | 0x1000000;
  }
  if (*(char *)((int)param_1 + 0x16b) != '\0') {
    for (uVar7 = 0; uVar7 < *(uint *)(param_1[9] + 0x10); uVar7 = uVar7 + 1) {
      if ((*(uint *)(*(int *)(*(int *)(param_1[0x14] + 8) + 0x70) + uVar7 * 100) & 0x70000) != 0) {
        param_1[0x59] = param_1[0x59] | 0x10000000;
        break;
      }
    }
  }
  piVar4 = DAT_004ce494;
  uVar7 = (uint)*(byte *)(param_5 + 0x1d);
  if (-1 < (int)*DAT_004ce490) {
    uVar7 = *DAT_004ce490;
  }
  if ((*pbVar11 & 4) == 0) {
    if ((uVar7 == 0) && (fVar12 < *(float *)(param_1[0x14] + 0xdc))) {
      iVar9 = func_0023328C(*DAT_004ce494,param_1);
      param_1[0x4f] = iVar9;
      if (-1 < iVar9) {
        iVar9 = param_1[0x14];
        param_1[0x50] = *(int *)(iVar9 + 0xd0);
        param_1[0x51] = *(int *)(iVar9 + 0xd4);
        param_1[0x52] = *(int *)(iVar9 + 0xd8);
        param_1[0x53] = *(int *)(iVar9 + 0xdc);
        param_1[0x59] = param_1[0x59] | 0x4000000;
      }
    }
  }
  else {
    piVar8 = *(int **)(param_5 + 0x28);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)func_0010DB90();
    }
    uVar6 = func_002335E0(*piVar4,(uint)param_1,piVar8,*(int **)(param_5 + 0x2c));
    param_1[0x4f] = uVar6;
    if (-1 < (int)uVar6) {
      param_1[0x59] = param_1[0x59] | 0x2000000;
    }
    if (((uVar7 == 1) && (uVar7 = param_1[0x59], (uVar7 & 0x1000) != 0x1000)) &&
       (param_1[0x59] = uVar7 | 0x1000, (uVar7 & 0x2000000) != 0)) {
      uVar7 = param_1[0x4f];
      iVar5 = *piVar4;
      iVar9 = 0;
      do {
        iVar10 = iVar5 + 0x10 + iVar9 * DAT_004ce49c * 4;
        func_001B8048(iVar10,(int)param_1,uVar7);
        func_001B7F54(iVar10,uVar7);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
    }
  }
  iVar9 = *piVar2 + 0x2bc8;
  func_0010C0B8(iVar9);
  puVar3 = func_001300D4(*piVar2,param_1);
  param_1[0x13] = (int)puVar3;
  func_0010EEE0(iVar9);
  return param_1;
}

