#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00187C38(int param_1);
extern int func_00188F3C(int param_1);
extern int func_001891A0(int *param_1);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556AD0(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern float DAT_00187a78;
extern float DAT_00187a7c;
extern int *DAT_00187a80;
extern int *DAT_00187a84;
extern uint *DAT_00187a88;
extern undefined4 *DAT_00187a8c;
extern undefined4 DAT_00187a90;
extern char *DAT_00187a94;
extern int *DAT_00187a98;
extern float DAT_00187a9c;
extern float DAT_00187ab8;
extern float DAT_00187abc;
extern float DAT_00187ac0;
extern undefined4 DAT_00187ac4;
extern undefined DAT_00187c20;
extern int DAT_00187c30;
extern float DAT_00187c34;
extern char s_SE_OBJ_FALL_WATER_FLAT_00187aa0[];
extern char s__SE_OBJ_LAND_00187c23[];
extern char s_cf_00187c23[];
extern undefined4 _DAT_00187c20;

// USA 00187714 <- EU 00187714 (Ghidra, non-matching)
// GLOBAL DAT_00187a78 float
// GLOBAL DAT_00187a7c float
// GLOBAL DAT_00187a80 int *
// GLOBAL DAT_00187a84 int *
// GLOBAL DAT_00187a88 uint *
// GLOBAL DAT_00187a8c undefined4 *
// GLOBAL DAT_00187a90 undefined4
// GLOBAL DAT_00187a94 char *
// GLOBAL DAT_00187a98 int *
// GLOBAL DAT_00187a9c float
// GLOBAL DAT_00187ab8 float
// GLOBAL DAT_00187abc float
// GLOBAL DAT_00187ac0 float
// GLOBAL DAT_00187ac4 undefined4
// GLOBAL DAT_00187c20 undefined
// GLOBAL DAT_00187c30 int
// GLOBAL DAT_00187c34 float
// GLOBAL s_cf_00187c23 string
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00187aa0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00187714(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char *pcVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  fVar11 = DAT_00187a78;
  uVar4 = param_1[0x148];
  uVar7 = param_1[0x149];
  if (uVar4 < uVar7) {
    param_1[0x148] = uVar4 + 1;
  }
  fVar12 = DAT_00187a7c;
  if (DAT_00187a7c < ALBW_AS_F32(param_1[0xf8]) - fVar11) {
    fVar12 = ALBW_AS_F32(param_1[0xf8]) - fVar11;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar12);
  if (*(char *)((int)param_1 + 0x6b5) == '\0') {
    iVar6 = func_00556AD0(*DAT_00187a80);
    fVar11 = *(float *)(iVar6 + 4);
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fVar11));
    param_1[0x1ab] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1ab]) + fVar11));
  }
  else if (*(char *)((int)param_1 + 0x6b5) == '\x01') {
    puVar5 = (undefined4 *)func_0052FBA0(*DAT_00187a84 + 0x3dbbc,param_1[0x137]);
    if (((*DAT_00187a88 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00187a88), iVar6 != 0)) {
      *DAT_00187a8c = DAT_00187a90;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar5)(puVar5,DAT_00187a8c), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      fVar11 = ALBW_AS_F32(puVar5[0x25d]);
      param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fVar11));
      param_1[0x1ab] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1ab]) + fVar11));
    }
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_00188F3C((int)param_1);
  pcVar15 = DAT_00187a94;
  if (0xf < param_1[0x13f]) {
    *(undefined1 *)((int)param_1 + 0x5d5) = 1;
    pcVar15 = DAT_00187a94;
    *(undefined1 *)((int)param_1 + 0x639) = 0;
  }
  piVar10 = param_1 + 0x13f;
  if (uVar4 >= uVar7) {
    pfVar9 = (float *)param_1[0x1aa];
    fVar11 = func_0051CF68(pfVar9 + 3,*pfVar9,pfVar9[1],pfVar9[2]);
    pfVar8 = (float *)(param_1 + 0x1a3);
    pfVar9[4] = fVar11;
    fVar12 = *pfVar8;
    fVar14 = ALBW_AS_F32(param_1[0x1a5]);
    fVar11 = SQRT(fVar12 * fVar12 + ALBW_AS_F32(param_1[0x1a4]) * ALBW_AS_F32(param_1[0x1a4]) + fVar14 * fVar14)
    ;
    if (ALBW_AS_F32(pcVar15) < fVar11) {
      fVar11 = *(float *)(param_1[0x1aa] + 0x10) / fVar11;
      *pfVar8 = fVar12 * fVar11;
      param_1[0x1a4] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1a4]) * fVar11));
      param_1[0x1a5] = (int)ALBW_AS_U32((fVar14 * fVar11));
    }
    func_00115C70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),pfVar8);
  }
  iVar6 = func_00187C38((int)param_1);
  piVar1 = DAT_00187a98;
  if (iVar6 != 0) {
    *(undefined1 *)((int)param_1 + 0x4c9) = 1;
    *(undefined1 *)(param_1 + 0x132) = 0;
    iVar6 = func_00520EE4((int)param_1);
    if (iVar6 != 0) {
      return func_00659544(piVar10,8);
    }
    iVar6 = func_00520ED8((int)param_1);
    fVar11 = DAT_00187a9c;
    if (iVar6 != 0) {
      iVar6 = func_00588BE4((int)param_1);
      if (iVar6 != *piVar1) {
        iVar6 = func_00520FF8((int)param_1);
        if (iVar6 == 0) {
          local_34 = s_SE_OBJ_FALL_WATER_FLAT_00187aa0;
          local_38 = fVar11;
          func_00150A84(param_1,(int *)&local_38,0);
        }
        return func_001891A0(param_1);
      }
LAB_00187984:
      param_1[0xf7] = (int)pcVar15;
      param_1[0xf8] = (int)pcVar15;
      param_1[0xf9] = (int)pcVar15;
      goto LAB_00187bbc;
    }
    bVar3 = func_00521018((int)param_1);
    if (bVar3) {
      iVar6 = func_00588BE4((int)param_1);
      if (iVar6 == *piVar1) goto LAB_00187984;
      bVar3 = func_0052107C((int)param_1);
      fVar11 = DAT_00187ab8;
      if (bVar3) {
        param_1[0xf8] = (int)ALBW_AS_U32(DAT_00187ab8);
      }
      else {
        fVar11 = ALBW_AS_F32(param_1[0xf8]);
      }
      if (ALBW_AS_F32(pcVar15) < fVar11) {
        param_1[0xf8] = (int)ALBW_AS_U32((fVar11 * DAT_00187abc));
      }
      local_38 = ALBW_AS_F32(param_1[0x1a0]);
      local_30 = ALBW_AS_F32(param_1[0x1a2]);
      local_34 = pcVar15;
      func_00115DC8(&local_38);
      fVar11 = local_30 * DAT_00187ac0;
      param_1[0xf7] = (int)ALBW_AS_U32((local_38 * DAT_00187ac0));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar11);
      uVar2 = DAT_00187ac4;
      iVar6 = param_1[0x1aa];
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar6 + 0xc) = uVar2;
    }
    else {
      bVar3 = func_0052107C((int)param_1);
      if ((bVar3) && (ALBW_AS_F32(param_1[0xf8]) <= ALBW_AS_F32(pcVar15))) {
        iVar6 = func_00588BE4((int)param_1);
        if (iVar6 == *piVar1) goto LAB_00187984;
        fVar14 = ALBW_AS_F32(param_1[0xf8]);
        fVar12 = fVar14;
        if (fVar14 <= ALBW_AS_F32(pcVar15)) {
          fVar12 = -fVar14;
        }
        if ((int)ALBW_AS_U32(fVar12) < _DAT_00187c20) {
          param_1[0xf7] = (int)pcVar15;
          param_1[0xf8] = (int)pcVar15;
          param_1[0xf9] = (int)pcVar15;
          func_00659544(piVar10,0);
          if (*(char *)((int)param_1 + 0x67d) != '\0') goto LAB_00187b74;
        }
        else {
          if (fVar14 <= ALBW_AS_F32(pcVar15)) {
            fVar14 = -fVar14;
          }
          fVar13 = ALBW_AS_F32(param_1[0xf7]) * DAT_00187c34;
          fVar12 = ALBW_AS_F32(param_1[0xf9]) * DAT_00187c34;
          param_1[0xf8] = (int)ALBW_AS_U32((fVar14 * DAT_00187c34));
          param_1[0xf7] = (int)ALBW_AS_U32(fVar13);
          param_1[0xf9] = (int)ALBW_AS_U32(fVar12);
        }
        local_34 = s__SE_OBJ_LAND_00187c23 + 1;
        local_38 = fVar11;
        func_00150A84(param_1,(int *)&local_38,0);
        *(undefined1 *)((int)param_1 + 0x67d) = 1;
      }
    }
  }
LAB_00187b74:
  if (DAT_00187c30 <=
      (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
            ALBW_AS_F32(param_1[0xf8]) * ALBW_AS_F32(param_1[0xf8]) +
           ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])))) {
    return 0;
  }
  param_1[0xf7] = (int)pcVar15;
  param_1[0xf8] = (int)pcVar15;
  param_1[0xf9] = (int)pcVar15;
  iVar6 = func_00588BE4((int)param_1);
  if (iVar6 != *piVar1) {
    return func_00659544(piVar10,0);
  }
LAB_00187bbc:
  return func_00659544(piVar10,6);
}

