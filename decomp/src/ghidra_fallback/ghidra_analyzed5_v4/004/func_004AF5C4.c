// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B79C(int param_1,int param_2,int param_3);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern undefined4 func_004AF3C4(int param_1,int param_2);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521054();
extern int func_005211D8(int param_1);
extern int func_00539200(int param_1);
extern int func_00588BE4(int param_1);
extern float DAT_004af8f4;
extern float DAT_004af8f8;
extern float DAT_004af8fc;
extern float DAT_004af900;
extern float DAT_004af904;
extern float DAT_004af908;
extern float DAT_004af90c;
extern float DAT_004af910;
extern float DAT_004af914;
extern undefined4 DAT_004af918;
extern float DAT_004af91c;
extern int *DAT_004af920;
extern int DAT_004af924;
extern undefined4 DAT_004af928;
extern undefined4 DAT_004afc80;
extern float *DAT_004afcb0;
extern float DAT_004afcb4;
extern uint DAT_004afe88;
extern int *DAT_004afe8c;
extern char s_SE_OBJ_FALL_WATER_004afc84[];
extern char s_SE_OBJ_FALL_WATER_FLAT_004afc98[];

// USA 004AF5C4 <- EU 004AF59C (Ghidra, non-matching)
// GLOBAL DAT_004af8f4 float
// GLOBAL DAT_004af8f8 float
// GLOBAL DAT_004af8fc float
// GLOBAL DAT_004af900 float
// GLOBAL DAT_004af904 float
// GLOBAL DAT_004af908 float
// GLOBAL DAT_004af90c float
// GLOBAL DAT_004af910 float
// GLOBAL DAT_004af914 float
// GLOBAL DAT_004af918 undefined4
// GLOBAL DAT_004af91c float
// GLOBAL DAT_004af920 int *
// GLOBAL DAT_004af924 int
// GLOBAL DAT_004af928 undefined4
// GLOBAL DAT_004afc80 undefined4
// GLOBAL DAT_004afcb0 float *
// GLOBAL DAT_004afcb4 float
// GLOBAL DAT_004afe88 uint
// GLOBAL DAT_004afe8c int *
// GLOBAL s_SE_OBJ_FALL_WATER_004afc84 string
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_004afc98 string

/* WARNING: Removing unreachable block (ram,0x004af64c) */
/* WARNING: Removing unreachable block (ram,0x004af650) */
/* WARNING: Removing unreachable block (ram,0x004af660) */
/* WARNING: Removing unreachable block (ram,0x004af7a8) */
/* WARNING: Removing unreachable block (ram,0x004af7ac) */
/* WARNING: Removing unreachable block (ram,0x004af7bc) */

undefined4 func_004AF5C4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r1;
  undefined2 *puVar8;
  int unaff_r10;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 ((int * *)(albw_frame + 0x8))
  #define local_e0 (*(int *)(albw_frame + 0x10))
  #define local_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(int *)(albw_frame + 0x18))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_d0 ((int *)(albw_frame + 0x20))
  #define uStack_c0 (*(uint *)(albw_frame + 0x30))
  #define local_bc (*(undefined4 *)(albw_frame + 0x34))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b4 (*(int *)(albw_frame + 0x3c))
  #define local_b0 (*(undefined1 *)(albw_frame + 0x40))
  #define afStack_ac ((float *)(albw_frame + 0x44))
  #define local_88 (*(int *)(albw_frame + 0x68))
  #define local_84 (*(char * *)(albw_frame + 0x6c))
  #define local_80 (*(int *)(albw_frame + 0x70))
  #define local_7c (*(undefined4 *)(albw_frame + 0x74))
  #define local_78 (*(int *)(albw_frame + 0x78))
  #define local_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_64 (*(float *)(albw_frame + 0x8c))
  #define local_60 (*(float *)(albw_frame + 0x90))
  #define local_5c (*(float *)(albw_frame + 0x94))
  #define local_58 (*(float *)(albw_frame + 0x98))
  #define local_54 (*(float *)(albw_frame + 0x9c))
  #define local_50 (*(float *)(albw_frame + 0xa0))
  #define fStack_4c (*(float *)(albw_frame + 0xa4))
  #define local_48 (*(int *)(albw_frame + 0xa8))
  #define local_44 (*(char * *)(albw_frame + 0xac))
  #define afStack_40 ((float *)(albw_frame + 0xb0))
  fVar15 = DAT_004af8fc;
  fVar10 = DAT_004af8f8;
  fVar11 = DAT_004af8f4;
  bVar9 = (uint)param_1[0x163] < (uint)param_1[0x164];
  if (bVar9) {
    param_1[0x163] = param_1[0x163] + 1;
  }
  fVar12 = ALBW_AS_F32(param_1[0xf8]);
  if (bVar9) {
    unaff_r10 = 0;
  }
  if (!bVar9) {
    unaff_r10 = 1;
  }
  fVar14 = (fVar15 - fVar12) * fVar10;
  if (fVar14 <= fVar11) {
    fVar14 = -fVar14;
  }
  fVar13 = fVar11;
  if ((fVar11 <= fVar14) && (fVar13 = fVar14, ALBW_AS_F32(param_1[0x160]) < fVar14)) {
    fVar13 = ALBW_AS_F32(param_1[0x160]);
  }
  fVar13 = fVar12 + fVar13;
  if ((fVar15 <= fVar13) || (fVar13 < fVar12)) {
    param_1[0xf8] = (int)ALBW_AS_U32(fVar15);
  }
  else {
    param_1[0xf8] = (int)ALBW_AS_U32(fVar13);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  fVar15 = DAT_004af908;
  fVar12 = (fVar10 * ((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x15d])) - fVar11)) / DAT_004af904 +
           DAT_004af900;
  fVar10 = DAT_004af900;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar12)) {
    fVar10 = fVar12;
  }
  param_1[0x15e] = (int)ALBW_AS_U32(fVar12);
  param_1[0x15e] = (int)ALBW_AS_U32(fVar10);
  if (unaff_r10 != 0) {
    if (*(char *)((int)param_1 + 0x56d) == '\0') {
      *(undefined1 *)((int)param_1 + 0x56d) = 1;
      iVar5 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0);
      if ((iVar5 == 0) || ((iVar5 == 5 && (*(char *)((int)param_1 + 0x56e) == '\0')))) {
        return func_004AF3C4((int)param_1,3);
      }
    }
    else {
      pfVar4 = (float *)(param_1 + 0x160);
      fVar10 = *pfVar4;
      fVar12 = (DAT_004af910 - fVar10) * fVar15;
      if (fVar12 <= fVar11) {
        fVar12 = -fVar12;
      }
      fVar14 = fVar11;
      if ((fVar11 <= fVar12) && (fVar14 = fVar12, DAT_004af90c < fVar12)) {
        fVar14 = DAT_004af90c;
      }
      fVar14 = fVar10 + fVar14;
      if ((DAT_004af910 <= fVar14) || (fVar14 < fVar10)) {
        *pfVar4 = DAT_004af910;
      }
      else {
        *pfVar4 = fVar14;
      }
      fVar10 = ALBW_AS_F32(param_1[0xf9]) * DAT_004af914;
      param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_004af914));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar10);
    }
  }
  local_54 = fVar15;
  if (fVar11 < ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x161])) {
    local_54 = fVar15 - (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x161]));
  }
  local_64 = fVar11;
  local_60 = fVar11;
  local_5c = fVar11;
  local_58 = fVar11;
  local_50 = fVar11;
  iVar6 = func_0014EEC8((int)param_1,(uint)&local_64,&local_58,DAT_004af918,fVar15);
  iVar5 = DAT_004af924;
  piVar2 = DAT_004af920;
  puVar8 = (undefined2 *)((int)param_1 + 0x2e);
  if (iVar6 != 0) {
    fVar10 = DAT_004af91c;
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_64);
    param_1[0xf7] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar11);
    param_1[0x160] = (int)ALBW_AS_U32(fVar11);
    iVar6 = func_00520EE4((int)param_1);
    if (iVar6 != 0) {
      return func_004AF3C4((int)param_1,3);
    }
    if ((char)param_1[0x15b] != '\0') {
      return 0;
    }
    func_0010A464(local_e8);
    iVar6 = func_00588BE4((int)param_1);
    if (iVar6 == *piVar2) {
      local_74 = DAT_004af928;
      local_78 = iVar5;
      func_00150A84(param_1,&local_78,(int)local_e8);
    }
    else {
      local_7c = DAT_004afc80;
      local_80 = iVar5;
      func_00150A84(param_1,&local_80,(int)local_e8);
    }
    iVar6 = func_00520FF8((int)param_1);
    if (iVar6 == 0) {
      iVar6 = func_00520ED8((int)param_1);
      if (iVar6 != 0) {
        bVar9 = func_00539200((int)local_e8);
        if (bVar9) {
          func_0025B61C((int)local_e8,0,fVar10);
          func_0025B79C((int)local_e8,0xf,0);
        }
        local_84 = s_SE_OBJ_FALL_WATER_FLAT_004afc98;
        local_88 = iVar5;
        func_00150A84(param_1,&local_88,(int)local_e8);
        func_0025B7B0((int)local_e8,5);
      }
    }
    else {
      bVar9 = func_00539200((int)local_e8);
      if (bVar9) {
        func_0025B61C((int)local_e8,0,fVar10);
        func_0025B79C((int)local_e8,0x23,0);
      }
      local_84 = s_SE_OBJ_FALL_WATER_004afc84;
      local_88 = iVar5;
      func_00150A84(param_1,&local_88,(int)local_e8);
      func_0025B7B0((int)local_e8,5);
    }
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
    pfVar4 = DAT_004afcb0;
    *(undefined1 *)(param_1 + 0x15b) = 1;
    func_00115C54(&fStack_4c,(float *)(param_1 + 0xf4),pfVar4);
    func_0014EC00((int)param_1,&fStack_4c,param_1[0xfa],(int)(char)*puVar8);
    return func_0025B874(local_e8);
  }
  fVar11 = DAT_004af91c;
  uVar7 = func_00520FF8((int)param_1);
  bVar9 = uVar7 == 0;
  if (bVar9) {
    uVar7 = (uint)*(byte *)((int)param_1 + 0x56f);
  }
  if (!bVar9 || uVar7 != 0) {
    if ((char)param_1[0x15b] == '\0') {
      iVar6 = func_00520FF8((int)param_1);
      if (iVar6 != 0) {
        func_0010A464(local_e8);
        iVar6 = func_00588BE4((int)param_1);
        if (iVar6 == *piVar2) {
          local_74 = DAT_004af928;
          local_78 = iVar5;
          func_00150A84(param_1,&local_78,(int)local_e8);
        }
        else {
          local_7c = DAT_004afc80;
          local_80 = iVar5;
          func_00150A84(param_1,&local_80,(int)local_e8);
        }
        bVar9 = func_00539200((int)local_e8);
        if (bVar9) {
          func_0025B61C((int)local_e8,0,fVar11);
          func_0025B79C((int)local_e8,0x23,0);
        }
        local_44 = s_SE_OBJ_FALL_WATER_004afc84;
        local_48 = iVar5;
        func_00150A84(param_1,&local_48,(int)local_e8);
        func_0025B7B0((int)local_e8,5);
        func_0025B874(local_e8);
      }
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      pfVar4 = DAT_004afcb0;
      *(undefined1 *)(param_1 + 0x15b) = 1;
      func_00115C54(afStack_40,(float *)(param_1 + 0xf4),pfVar4);
      func_0014EC00((int)param_1,afStack_40,param_1[0xfa],(int)(char)*puVar8);
    }
    goto LAB_004afd5c;
  }
  iVar6 = func_00520EE4((int)param_1);
  if (iVar6 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x56e);
    local_e8[0] = param_1 + 0x162;
    if (cVar1 == '\0') {
      iVar6 = func_00521054((int)param_1);
      if (iVar6 == 0) goto LAB_004afd5c;
      fVar11 = ALBW_AS_F32(param_1[3]);
      if (ALBW_AS_F32(param_1[0xf5]) - DAT_004afcb4 <= ALBW_AS_F32(param_1[3])) {
        fVar11 = ALBW_AS_F32(param_1[0xf5]) - DAT_004afcb4;
      }
      param_1[0x162] = (int)ALBW_AS_U32(fVar11);
      iVar6 = func_00392E48(param_1 + 0xf4,1,local_e8[0],0);
      if (iVar6 != 0 && iVar6 != 5) {
        if (iVar6 == 1) {
LAB_004afd54:
          uVar3 = 2;
        }
        else {
          uVar3 = 3;
        }
        *(undefined1 *)((int)param_1 + 0x56e) = uVar3;
        goto LAB_004afd5c;
      }
    }
    else {
      if (cVar1 == '\x01') {
        if (unaff_r10 == 0) goto LAB_004afd5c;
        goto LAB_004afcf0;
      }
      if (cVar1 == '\x02') {
        if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x162])) {
          param_1[0xf5] = param_1[0x162];
          *(undefined1 *)((int)param_1 + 0x2d7) = 1;
          (**(code **)(param_1[200] + 0x38))(param_1 + 200);
        }
        goto LAB_004afd5c;
      }
      if (cVar1 != '\x03') goto LAB_004afd5c;
      if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x162])) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        goto LAB_004afd5c;
      }
      iVar6 = func_00392E48(param_1 + 0xf4,1,local_e8[0],0);
      if (iVar6 != 0) {
        if (iVar6 != 1) goto LAB_004afd5c;
        goto LAB_004afd54;
      }
    }
    *(undefined1 *)((int)param_1 + 0x56e) = 1;
  }
  else {
LAB_004afcf0:
    func_004AF3C4((int)param_1,3);
  }
LAB_004afd5c:
  bVar9 = func_005211D8((int)param_1);
  uStack_c0 = DAT_004afe88;
  if (bVar9) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  uStack_c0 = uStack_c0 | extraout_r1 & 0xffff0000;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_bc = 0xff;
  local_b8 = 0;
  local_b0 = 0;
  local_d0[3] = param_1[0xb3];
  local_b4 = param_1[0x140];
  uVar7 = func_004A8F40(*DAT_004afe8c,local_d0,0x24);
  if ((uVar7 != 0) && ((char)param_1[0x15b] == '\0')) {
    iVar6 = func_00588BE4((int)param_1);
    if (iVar6 == *piVar2) {
      local_d4 = DAT_004af928;
      local_d8 = iVar5;
      func_00150A84(param_1,&local_d8,0);
    }
    else {
      local_dc = DAT_004afc80;
      local_e0 = iVar5;
      func_00150A84(param_1,&local_e0,0);
    }
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
    pfVar4 = DAT_004afcb0;
    *(undefined1 *)(param_1 + 0x15b) = 1;
    func_00115C54(afStack_ac,(float *)(param_1 + 0xf4),pfVar4);
    return func_0014EC00((int)param_1,afStack_ac,param_1[0xfa],(int)(char)*puVar8);
  }
  return 0;
}

