#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0014FC94(int param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00516174(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0066BA90(undefined4 *param_1,undefined1 param_2);
extern int DAT_00516904;
extern undefined4 *DAT_00516908;
extern undefined4 DAT_0051690c;
extern undefined4 DAT_00516910;
extern undefined4 *DAT_00516914;
extern undefined4 DAT_00516918;
extern uint DAT_0051691c;
extern int DAT_00516934;
extern undefined4 DAT_00516938;
extern float DAT_0051693c;
extern float DAT_00516940;
extern float *DAT_00516ec0;
extern int *DAT_00516ec4;
extern undefined *DAT_00516ec8;
extern int DAT_00516ecc;
extern char s_Actor_Medusa_kcl_00516920[];
extern char s_cState_Recover_00516ee8[];
extern char s_cState_Stop_00516edc[];
extern char s_cState_Wait_00516ed0[];
extern char s_cf_00516920[];

// USA 005164EC <- EU 005164C4 (Ghidra, non-matching)
// GLOBAL DAT_00516904 int
// GLOBAL DAT_00516908 undefined4 *
// GLOBAL DAT_0051690c undefined4
// GLOBAL DAT_00516910 undefined4
// GLOBAL DAT_00516914 undefined4 *
// GLOBAL DAT_00516918 undefined4
// GLOBAL DAT_0051691c uint
// GLOBAL DAT_00516934 int
// GLOBAL DAT_00516938 undefined4
// GLOBAL DAT_0051693c float
// GLOBAL DAT_00516940 float
// GLOBAL DAT_00516ec0 float *
// GLOBAL DAT_00516ec4 int *
// GLOBAL DAT_00516ec8 undefined *
// GLOBAL DAT_00516ecc int
// GLOBAL s_cf_00516920 string
// GLOBAL s_cState_Recover_00516ee8 string
// GLOBAL s_cState_Stop_00516edc string
// GLOBAL s_cState_Wait_00516ed0 string

/* WARNING: Variable defined which should be unmapped: objStack_c8 */

undefined4 * func_005164EC(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  float *pfVar2;
  undefined2 uVar3;
  uint auVar4 [1];
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_c8 ((uint *)(albw_frame + 0x8))
  #define local_c0 (*(int *)(albw_frame + 0x10))
  #define local_bc (*(uint * *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_b4 (*(undefined1 * *)(albw_frame + 0x1c))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac ((undefined1 *)(albw_frame + 0x24))
  #define uStack_6d (*(undefined1 *)(albw_frame + 0x63))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define local_48 ((uint *)(albw_frame + 0x88))
  #define local_40 ((uint *)(albw_frame + 0x90))
  piVar6 = func_00150E40(param_1,param_2);
  iVar10 = DAT_00516904;
  *piVar6 = DAT_00516904;
  piVar6[200] = iVar10 + 0x54;
  piVar6[0x104] = 0;
  puVar7 = func_0010A794(piVar6 + 0x105);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar18 = puVar7 + -0x105;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_0034CAA0(puVar8);
  }
  puVar8 = DAT_00516908;
  puVar7[9] = puVar9;
  uVar13 = puVar8[1];
  puVar7[0xc] = *puVar8;
  puVar7[0xd] = uVar13;
  puVar7[10] = DAT_0051690c;
  puVar7[0xb] = puVar18;
  iVar10 = func_0054D964((int)puVar18,0);
  puVar7[0xe] = iVar10;
  puVar9 = (undefined4 *)func_0010BAB4(100);
  uVar13 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    uVar13 = func_004EE484(puVar9);
  }
  puVar7[0xf] = uVar13;
  puVar9 = DAT_00516914;
  uVar13 = DAT_00516910;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = uVar13;
  uVar15 = DAT_00516918;
  uVar16 = puVar9[1];
  uVar17 = puVar9[2];
  uVar26 = CONCAT44(uVar13,DAT_00516918);
  puVar7[0x13] = *puVar9;
  puVar7[0x14] = uVar16;
  puVar7[0x15] = uVar17;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = uVar13;
  puVar7[0x19] = 0;
  puVar7[0x1a] = uVar15;
  objStack_c8[0] = 0;
  uVar13 = func_0014E428((int)puVar18,1,0,0,1,0,0);
  puVar7[-2] = uVar13;
  for (iVar10 = 0; iVar10 < (*(int **)(puVar7[-2] + 0x20))[1]; iVar10 = iVar10 + 1) {
    puVar14 = (ushort *)(**(int **)(puVar7[-2] + 0x20) + iVar10 * 0x154);
    if (puVar14 != (ushort *)0x0) {
      *puVar14 = *puVar14 | 0x400;
    }
  }
  func_00516174((int)puVar18);
  uVar13 = puVar8[2];
  uVar15 = puVar8[3];
  puVar7[0xb] = puVar18;
  puVar7[0xc] = uVar13;
  puVar7[0xd] = uVar15;
  local_48[0] = puVar7[-0x52];
  objStack_c8[0] = DAT_0051691c;
  auVar4[0] = objStack_c8[0];
  (*(undefined2 *)((char *)&objStack_c8[0] + 0)) = (undefined2)DAT_0051691c;
  uVar3 = (undefined2)objStack_c8[0];
  objStack_c8[0] = auVar4[0];
  func_0014EB8C(puVar7[0xf],puVar7[0xe],(undefined2 *)puVar7[-0x1d],local_48,
                *(undefined2 *)(puVar7 + -0xf0),0,uVar3);
  *(undefined2 *)(puVar7[0xe] + 0x28) = 0xa0;
  if (puVar7[0xf] != 0) {
    func_0014FC94((int)puVar18,puVar7[0xf]);
  }
  iVar10 = puVar7[0xe];
  uVar13 = puVar7[-0x10];
  uVar15 = puVar7[-0xf];
  *(undefined4 *)(iVar10 + 4) = puVar7[-0x11];
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  func_004356B4((int *)puVar7[0xe]);
  puVar11 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar11);
  }
  puVar7[-1] = puVar9;
  iVar10 = DAT_00516934;
  local_b4 = local_ac;
  uStack_b0 = 0x40;
  uStack_6d = 0;
  piVar6 = puVar7 + -1;
  local_b8 = DAT_00516938;
  local_ac[0] = 0;
  func_00111A20((int)&local_b8,s_Actor_Medusa_kcl_00516920,objStack_c8);
  func_004EDB28(puVar7[-1],(int)&local_b8);
  func_00491624(&local_6c,param_2[7],param_2[8],param_2[9]);
  fVar28 = DAT_00516940;
  fVar27 = DAT_0051693c;
  iVar19 = *(int *)(*piVar6 + 0x14);
  fVar25 = local_6c - *(float *)(iVar19 + 0x18);
  bVar23 = DAT_00516940 == fVar25;
  bVar24 = fVar25 <= DAT_00516940;
  if (!bVar24 || bVar23) {
    bVar23 = fVar25 == DAT_0051693c;
    bVar24 = DAT_0051693c <= fVar25;
  }
  if (bVar24 && !bVar23) {
LAB_00516884:
    bVar23 = false;
  }
  else {
    fVar25 = local_68 - *(float *)(iVar19 + 0x1c);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_64 - *(float *)(iVar19 + 0x20);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_60 - *(float *)(iVar19 + 0x24);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_5c - *(float *)(iVar19 + 0x28);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_58 - *(float *)(iVar19 + 0x2c);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_54 - *(float *)(iVar19 + 0x30);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_50 - *(float *)(iVar19 + 0x34);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    fVar25 = local_4c - *(float *)(iVar19 + 0x38);
    bVar23 = DAT_00516940 == fVar25;
    bVar24 = fVar25 <= DAT_00516940;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == DAT_0051693c;
      bVar24 = DAT_0051693c <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516884;
    bVar23 = true;
  }
  if (!bVar23) {
    bVar5 = *(byte *)(iVar19 + 0xa8);
    *(byte *)(iVar19 + 0xa8) = bVar5 | 8;
    fVar25 = ALBW_AS_F32(uVar26);
    if ((((local_6c == 1.0 && local_68 == fVar25) && (local_64 == fVar25 && local_60 == fVar25)) &&
        (local_5c == 1.0 && local_58 == fVar25)) &&
       ((local_54 == fVar25 && local_50 == fVar25) && local_4c == 1.0)) {
      uVar13 = (undefined4)((ulonglong)uVar26 >> 0x20);
      *(undefined4 *)(iVar19 + 0x18) = uVar13;
      *(float *)(iVar19 + 0x1c) = fVar25;
      *(float *)(iVar19 + 0x20) = fVar25;
      bVar5 = bVar5 & 0xfb | 8;
      *(float *)(iVar19 + 0x24) = fVar25;
      *(undefined4 *)(iVar19 + 0x28) = uVar13;
      *(float *)(iVar19 + 0x2c) = fVar25;
      *(float *)(iVar19 + 0x30) = fVar25;
      *(float *)(iVar19 + 0x34) = fVar25;
      *(undefined4 *)(iVar19 + 0x38) = uVar13;
    }
    else {
      func_001151CC((undefined4 *)(iVar19 + 0x18),&local_6c);
      bVar5 = *(byte *)(iVar19 + 0xa8) | 4;
    }
    *(byte *)(iVar19 + 0xa8) = bVar5;
  }
  func_0043625C(*(int **)(puVar7[-1] + 0x14),puVar7 + -0x11);
  iVar19 = *(int *)(*piVar6 + 0x14);
  fVar25 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar19 + 4);
  bVar23 = fVar28 == fVar25;
  bVar24 = fVar25 <= fVar28;
  if (!bVar24 || bVar23) {
    bVar23 = fVar25 == fVar27;
    bVar24 = fVar27 <= fVar25;
  }
  if (bVar24 && !bVar23) {
LAB_005169ec:
    bVar23 = false;
  }
  else {
    fVar25 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar19 + 8);
    bVar23 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_005169ec;
    fVar25 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar19 + 0xc);
    bVar23 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_005169ec;
    bVar23 = true;
  }
  if (bVar23) goto LAB_00516ae0;
  *(byte *)(iVar19 + 0xa8) = *(byte *)(iVar19 + 0xa8) | 8;
  pfVar2 = DAT_00516ec0;
  fVar25 = ALBW_AS_F32(param_2[4]) - *DAT_00516ec0;
  bVar23 = fVar28 == fVar25;
  bVar24 = fVar25 <= fVar28;
  if (!bVar24 || bVar23) {
    bVar23 = fVar25 == fVar27;
    bVar24 = fVar27 <= fVar25;
  }
  if (bVar24 && !bVar23) {
LAB_00516ac0:
    *(uint *)(iVar19 + 4) = param_2[4];
    *(uint *)(iVar19 + 8) = param_2[5];
    *(uint *)(iVar19 + 0xc) = param_2[6];
    bVar5 = *(byte *)(iVar19 + 0xa8) | 2;
  }
  else {
    fVar25 = ALBW_AS_F32(param_2[5]) - DAT_00516ec0[1];
    bVar23 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516ac0;
    fVar25 = ALBW_AS_F32(param_2[6]) - DAT_00516ec0[2];
    bVar23 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar23) {
      bVar23 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar23) goto LAB_00516ac0;
    *(float *)(iVar19 + 4) = *DAT_00516ec0;
    *(float *)(iVar19 + 8) = pfVar2[1];
    *(float *)(iVar19 + 0xc) = pfVar2[2];
    bVar5 = *(byte *)(iVar19 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar19 + 0xa8) = bVar5;
LAB_00516ae0:
  func_004ED9C8(puVar7[-1]);
  local_40[0] = puVar7[-0x52];
  func_004EDAD0(*piVar6,local_40);
  *(undefined2 *)(*piVar6 + 0x2c) = *(undefined2 *)(puVar7 + -0xf0);
  func_004A7F00(*DAT_00516ec4,*piVar6,3);
  *(undefined1 *)((int)puVar7 + 6) = 3;
  puVar7[5] = puVar18;
  iVar19 = func_0010BA78(0x30);
  puVar7[6] = iVar19;
  puVar7[7] = iVar19 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  iVar12 = 3;
  puVar9 = (undefined4 *)(iVar19 + -8);
  do {
    uVar13 = puVar8[0x13];
    iVar12 = iVar12 + -1;
    puVar9[2] = puVar8[0x12];
    puVar9[3] = uVar13;
    uVar13 = puVar8[0x13];
    puVar9[4] = puVar8[0x12];
    puVar9[5] = uVar13;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar5 = *(byte *)((int)puVar7 + 6);
  uVar20 = (uint)bVar5;
  puVar9 = (undefined4 *)func_0010BA78(uVar20 << 3);
  puVar7[8] = puVar9;
  if (uVar20 != 0) {
    puVar11 = puVar9 + -2;
    if ((bVar5 & 1) != 0) {
      uVar13 = puVar8[9];
      *puVar9 = puVar8[8];
      puVar9[1] = uVar13;
      puVar11 = puVar9;
    }
    for (iVar19 = (int)uVar20 >> 1; iVar19 != 0; iVar19 = iVar19 + -1) {
      uVar13 = puVar8[9];
      puVar11[2] = puVar8[8];
      puVar11[3] = uVar13;
      uVar13 = puVar8[9];
      puVar11[4] = puVar8[8];
      puVar11[5] = uVar13;
      puVar11 = puVar11 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar19 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 3;
    iVar19 = func_00100118((int)(puVar9 + 2),DAT_00516ec8,0x24,3);
  }
  if (iVar19 != 0) {
    puVar7[3] = iVar19;
    puVar7[2] = 3;
  }
  iVar19 = DAT_00516ecc;
  puVar7[-0x30] = puVar7;
  *(undefined2 *)(iVar19 + (int)puVar18) = 3;
  local_bc = (uint *)s_cState_Wait_00516ed0;
  local_c0 = iVar10;
  iVar19 = puVar7[3];
  puVar21 = *(uint **)(iVar19 + 4);
  (**(code **)(iVar10 + 8))(&local_c0);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_bc + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_00516c9c;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_00516c9c:
  iVar19 = *(int *)(iVar19 + 8);
  if (iVar19 <= (int)uVar20) {
    uVar20 = iVar19 - 1;
  }
  (**(code **)(local_c0 + 8))(&local_c0);
  func_0010E3C4(puVar21,local_bc,uVar20);
  *(undefined1 *)((int)puVar21 + uVar20) = 0;
  puVar9 = (undefined4 *)puVar7[6];
  uVar17 = DAT_00516908[5];
  uVar15 = DAT_00516908[8];
  uVar16 = DAT_00516908[6];
  uVar22 = DAT_00516908[7];
  uVar13 = DAT_00516908[9];
  *puVar9 = DAT_00516908[4];
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)puVar7[7];
  *puVar9 = uVar16;
  puVar9[1] = uVar22;
  puVar9 = (undefined4 *)puVar7[8];
  puVar9[1] = uVar13;
  *puVar9 = uVar15;
  local_bc = (uint *)s_cState_Stop_00516edc;
  local_c0 = iVar10;
  if ((uint)puVar7[2] < 2) {
    iVar19 = puVar7[3];
  }
  else {
    iVar19 = puVar7[3] + 0x24;
  }
  puVar21 = *(uint **)(iVar19 + 4);
  (**(code **)(iVar10 + 8))(&local_c0);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_bc + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_00516d6c;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_00516d6c:
  if (*(int *)(iVar19 + 8) <= (int)uVar20) {
    uVar20 = *(int *)(iVar19 + 8) - 1;
  }
  (**(code **)(local_c0 + 8))(&local_c0);
  func_0010E3C4(puVar21,local_bc,uVar20);
  *(undefined1 *)((int)puVar21 + uVar20) = 0;
  puVar9 = DAT_00516908;
  iVar19 = puVar7[6];
  uVar13 = DAT_00516908[8];
  uVar15 = DAT_00516908[9];
  uVar16 = DAT_00516908[0xb];
  uVar17 = DAT_00516908[0xc];
  uVar22 = DAT_00516908[0xd];
  *(undefined4 *)(iVar19 + 8) = DAT_00516908[10];
  *(undefined4 *)(iVar19 + 0xc) = uVar16;
  iVar19 = puVar7[7];
  *(undefined4 *)(iVar19 + 8) = uVar17;
  *(undefined4 *)(iVar19 + 0xc) = uVar22;
  iVar19 = puVar7[8];
  *(undefined4 *)(iVar19 + 8) = uVar13;
  *(undefined4 *)(iVar19 + 0xc) = uVar15;
  local_bc = (uint *)s_cState_Recover_00516ee8;
  local_c0 = iVar10;
  uVar20 = puVar7[2];
  if (uVar20 < 3) {
    iVar19 = puVar7[3];
    uVar1 = uVar20;
  }
  else {
    iVar19 = iVar10;
    uVar1 = puVar7[3];
  }
  if (2 < uVar20) {
    iVar19 = uVar1 + 0x48;
  }
  puVar21 = *(uint **)(iVar19 + 4);
  (**(code **)(iVar10 + 8))(&local_c0);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_bc + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_00516e38;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_00516e38:
  if (*(int *)(iVar19 + 8) <= (int)uVar20) {
    uVar20 = *(int *)(iVar19 + 8) - 1;
  }
  (**(code **)(local_c0 + 8))(&local_c0);
  func_0010E3C4(puVar21,local_bc,uVar20);
  *(undefined1 *)((int)puVar21 + uVar20) = 0;
  uVar13 = puVar9[9];
  uVar16 = puVar9[8];
  iVar10 = puVar7[6];
  uVar22 = puVar9[0xf];
  uVar15 = puVar9[0x10];
  uVar17 = puVar9[0x11];
  *(undefined4 *)(iVar10 + 0x10) = puVar9[0xe];
  *(undefined4 *)(iVar10 + 0x14) = uVar22;
  iVar10 = puVar7[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar15;
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = puVar7[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar16;
  *(undefined4 *)(iVar10 + 0x14) = uVar13;
  func_0066BA90(puVar7,0);
  return puVar18;
}

