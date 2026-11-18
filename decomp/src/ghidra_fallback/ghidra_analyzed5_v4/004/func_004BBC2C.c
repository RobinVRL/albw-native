#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_004bbfec;
extern undefined4 DAT_004bbff0;
extern float DAT_004bc004;
extern float DAT_004bc008;
extern float DAT_004bc01c;
extern float *DAT_004bc020;
extern undefined4 DAT_004bc0f8;
extern undefined4 *DAT_004bc0fc;
extern int *DAT_004bc100;
extern char s_Actor_RaftL_kcl_004bbff4[];
extern char s_Actor_Raft_kcl_004bc00c[];
extern char s_cf_004bbff4[];
extern char s_cf_004bc00c[];

// USA 004BBC2C <- EU 004BBC04 (Ghidra, non-matching)
// GLOBAL DAT_004bbfec int *
// GLOBAL DAT_004bbff0 undefined4
// GLOBAL DAT_004bc004 float
// GLOBAL DAT_004bc008 float
// GLOBAL DAT_004bc01c float
// GLOBAL DAT_004bc020 float *
// GLOBAL DAT_004bc0f8 undefined4
// GLOBAL DAT_004bc0fc undefined4 *
// GLOBAL DAT_004bc100 int *
// GLOBAL s_cf_004bc00c string
// GLOBAL s_cf_004bbff4 string

undefined4 func_004BBC2C(int param_1,int param_2)

{
  float *pfVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(undefined1 * *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 ((undefined1 *)(albw_frame + 0x38))
  #define uStack_29 (*(undefined1 *)(albw_frame + 0x77))
  #define local_28 (*(char * *)(albw_frame + 0x78))
  #define local_24 ((uint *)(albw_frame + 0x7c))
  puVar3 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar3);
  }
  *(undefined4 **)(param_1 + 0x444) = puVar4;
  piVar8 = (int *)(param_1 + 0x444);
  iVar5 = func_00588BE4(param_1);
  if (iVar5 == *DAT_004bbfec) {
    local_28 = s_Actor_RaftL_kcl_004bbff4;
  }
  else {
    local_28 = s_Actor_Raft_kcl_004bc00c;
  }
  local_70 = local_68;
  uStack_6c = 0x40;
  uStack_29 = 0;
  local_68[0] = 0;
  local_74 = DAT_004bbff0;
  func_00111A20((int)&local_74,local_28,local_24);
  func_004EDB28(*(int *)(param_1 + 0x444),(int)&local_74);
  func_00491624(&local_98,0,*(uint *)(param_2 + 0x20),0);
  fVar13 = DAT_004bc008;
  fVar12 = DAT_004bc004;
  iVar5 = *(int *)(*(int *)(param_1 + 0x444) + 0x14);
  fVar11 = local_98 - *(float *)(iVar5 + 0x18);
  bVar9 = DAT_004bc008 == fVar11;
  bVar10 = fVar11 <= DAT_004bc008;
  if (!bVar10 || bVar9) {
    bVar9 = fVar11 == DAT_004bc004;
    bVar10 = DAT_004bc004 <= fVar11;
  }
  if (bVar10 && !bVar9) {
LAB_004bbe08:
    bVar9 = false;
  }
  else {
    fVar11 = local_94 - *(float *)(iVar5 + 0x1c);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_90 - *(float *)(iVar5 + 0x20);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_8c - *(float *)(iVar5 + 0x24);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_88 - *(float *)(iVar5 + 0x28);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_84 - *(float *)(iVar5 + 0x2c);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_80 - *(float *)(iVar5 + 0x30);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_7c - *(float *)(iVar5 + 0x34);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    fVar11 = local_78 - *(float *)(iVar5 + 0x38);
    bVar9 = DAT_004bc008 == fVar11;
    bVar10 = fVar11 <= DAT_004bc008;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == DAT_004bc004;
      bVar10 = DAT_004bc004 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbe08;
    bVar9 = true;
  }
  if (!bVar9) {
    bVar2 = *(byte *)(iVar5 + 0xa8);
    *(byte *)(iVar5 + 0xa8) = bVar2 | 8;
    uVar6 = DAT_004bc0f8;
    fVar11 = DAT_004bc01c;
    if ((((local_98 == 1.0) && (local_94 == DAT_004bc01c && local_90 == DAT_004bc01c)) &&
        (local_8c == DAT_004bc01c && local_88 == 1.0)) &&
       ((local_84 == DAT_004bc01c && local_80 == DAT_004bc01c &&
        (local_7c == DAT_004bc01c && local_78 == 1.0)))) {
      *(undefined4 *)(iVar5 + 0x18) = DAT_004bc0f8;
      *(float *)(iVar5 + 0x1c) = fVar11;
      *(float *)(iVar5 + 0x20) = fVar11;
      bVar2 = bVar2 & 0xfb | 8;
      *(float *)(iVar5 + 0x24) = fVar11;
      *(undefined4 *)(iVar5 + 0x28) = uVar6;
      *(float *)(iVar5 + 0x2c) = fVar11;
      *(float *)(iVar5 + 0x30) = fVar11;
      *(float *)(iVar5 + 0x34) = fVar11;
      *(undefined4 *)(iVar5 + 0x38) = uVar6;
    }
    else {
      func_001151CC((undefined4 *)(iVar5 + 0x18),&local_98);
      bVar2 = *(byte *)(iVar5 + 0xa8) | 4;
    }
    *(byte *)(iVar5 + 0xa8) = bVar2;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x444) + 0x14);
  fVar11 = *(float *)(param_2 + 0x10) - *(float *)(iVar5 + 4);
  bVar9 = fVar13 == fVar11;
  bVar10 = fVar11 <= fVar13;
  if (!bVar10 || bVar9) {
    bVar9 = fVar11 == fVar12;
    bVar10 = fVar12 <= fVar11;
  }
  if (bVar10 && !bVar9) {
LAB_004bbf44:
    bVar9 = false;
  }
  else {
    fVar11 = *(float *)(param_2 + 0x14) - *(float *)(iVar5 + 8);
    bVar9 = fVar13 == fVar11;
    bVar10 = fVar11 <= fVar13;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == fVar12;
      bVar10 = fVar12 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbf44;
    fVar11 = *(float *)(param_2 + 0x18) - *(float *)(iVar5 + 0xc);
    bVar9 = fVar13 == fVar11;
    bVar10 = fVar11 <= fVar13;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == fVar12;
      bVar10 = fVar12 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bbf44;
    bVar9 = true;
  }
  if (bVar9) goto LAB_004bc074;
  *(byte *)(iVar5 + 0xa8) = *(byte *)(iVar5 + 0xa8) | 8;
  pfVar1 = DAT_004bc020;
  fVar11 = *(float *)(param_2 + 0x10) - *DAT_004bc020;
  bVar9 = fVar13 == fVar11;
  bVar10 = fVar11 <= fVar13;
  if (!bVar10 || bVar9) {
    bVar9 = fVar11 == fVar12;
    bVar10 = fVar12 <= fVar11;
  }
  if (bVar10 && !bVar9) {
LAB_004bc054:
    *(float *)(iVar5 + 4) = *(float *)(param_2 + 0x10);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 0x18);
    bVar2 = *(byte *)(iVar5 + 0xa8) | 2;
  }
  else {
    fVar11 = *(float *)(param_2 + 0x14) - DAT_004bc020[1];
    bVar9 = fVar13 == fVar11;
    bVar10 = fVar11 <= fVar13;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == fVar12;
      bVar10 = fVar12 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bc054;
    fVar11 = *(float *)(param_2 + 0x18) - DAT_004bc020[2];
    bVar9 = fVar13 == fVar11;
    bVar10 = fVar11 <= fVar13;
    if (!bVar10 || bVar9) {
      bVar9 = fVar11 == fVar12;
      bVar10 = fVar12 <= fVar11;
    }
    if (bVar10 && !bVar9) goto LAB_004bc054;
    *(float *)(iVar5 + 4) = *DAT_004bc020;
    *(float *)(iVar5 + 8) = pfVar1[1];
    *(float *)(iVar5 + 0xc) = pfVar1[2];
    bVar2 = *(byte *)(iVar5 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar5 + 0xa8) = bVar2;
LAB_004bc074:
  func_0043625C(*(int **)(*(int *)(param_1 + 0x444) + 0x14),(undefined4 *)(param_1 + 0x3d0));
  func_004ED9C8(*(int *)(param_1 + 0x444));
  local_24[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar8,local_24);
  puVar4 = DAT_004bc0fc;
  *(undefined2 *)(*piVar8 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  *(int *)(param_1 + 0x430) = param_1;
  *(undefined4 *)(param_1 + 0x434) = uVar6;
  *(undefined4 *)(param_1 + 0x438) = uVar7;
  *(int *)(*piVar8 + 0x28) = param_1 + 0x42c;
  return func_004A7F00(*DAT_004bc100,*piVar8,3);
}

