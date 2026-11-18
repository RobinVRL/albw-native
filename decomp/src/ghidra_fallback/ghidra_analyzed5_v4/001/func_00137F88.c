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
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00657070(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0000000a;
extern int DAT_001383d0;
extern undefined4 DAT_001383d4;
extern undefined4 DAT_001383d8;
extern undefined4 DAT_001383dc;
extern int *DAT_001383e0;
extern int *DAT_001383e4;
extern uint DAT_001383e8;
extern int *DAT_001383f8;
extern undefined DAT_00138408;
extern undefined DAT_00138410;
extern undefined4 DAT_00138418;
extern int *DAT_0013841c;
extern undefined4 DAT_00138420;
extern float DAT_00138434;
extern float DAT_00138438;
extern float *DAT_00138968;
extern int *DAT_0013897c;
extern undefined4 *DAT_00138980;
extern undefined *DAT_00138984;
extern int DAT_00138988;
extern undefined8 *DAT_00138c68;
extern char s_Actor_FanL_kcl_00138424[];
extern char s_Actor_FanS_kcl_0013896c[];
extern char s_FanLWind_001383fc[];
extern char s_FanSWind_001383ec[];
extern char s_cState_Off_0013898c[];
extern char s_cState_On_00138c6c[];
extern char s_cState_ToOff_00138c78[];
extern char s_cState_ToOn_00138998[];
extern char s_cf_00138424[];
extern char s_cf_0013896c[];

// USA 00137F88 <- EU 00137F88 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_001383d0 int
// GLOBAL DAT_001383d4 undefined4
// GLOBAL DAT_001383d8 undefined4
// GLOBAL DAT_001383dc undefined4
// GLOBAL DAT_001383e0 int *
// GLOBAL DAT_001383e4 int *
// GLOBAL DAT_001383e8 uint
// GLOBAL DAT_001383f8 int *
// GLOBAL DAT_00138408 undefined
// GLOBAL DAT_00138410 undefined
// GLOBAL DAT_00138418 undefined4
// GLOBAL DAT_0013841c int *
// GLOBAL DAT_00138420 undefined4
// GLOBAL DAT_00138434 float
// GLOBAL DAT_00138438 float
// GLOBAL DAT_00138968 float *
// GLOBAL DAT_0013897c int *
// GLOBAL DAT_00138980 undefined4 *
// GLOBAL DAT_00138984 undefined *
// GLOBAL DAT_00138988 int
// GLOBAL DAT_00138c68 undefined8 *
// GLOBAL s_cf_00138424 string
// GLOBAL s_cf_0013896c string
// GLOBAL s_FanLWind_001383fc string
// GLOBAL s_FanSWind_001383ec string
// GLOBAL s_cState_Off_0013898c string
// GLOBAL s_cState_On_00138c6c string
// GLOBAL s_cState_ToOff_00138c78 string
// GLOBAL s_cState_ToOn_00138998 string

/* WARNING: Variable defined which should be unmapped: objStack_128 */
/* WARNING: Variable defined which should be unmapped: objStack_124 */
/* WARNING: Variable defined which should be unmapped: objStack_120 */

undefined4 * func_00137F88(undefined4 *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  float *pfVar3;
  byte bVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 extraout_r1;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint unaff_r10;
  uint *puVar22;
  undefined4 uVar23;
  bool bVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define objStack_128 ((uint *)(albw_frame + 0x8))
  #define objStack_124 ((uint *)(albw_frame + 0xc))
  #define objStack_120 ((uint *)(albw_frame + 0x10))
  #define local_118 (*(uint *)(albw_frame + 0x18))
  #define local_114 (*(uint * *)(albw_frame + 0x1c))
  #define local_110 (*(float *)(albw_frame + 0x20))
  #define local_10c (*(float *)(albw_frame + 0x24))
  #define local_108 (*(float *)(albw_frame + 0x28))
  #define local_104 (*(float *)(albw_frame + 0x2c))
  #define local_100 (*(float *)(albw_frame + 0x30))
  #define local_fc (*(float *)(albw_frame + 0x34))
  #define local_f8 (*(float *)(albw_frame + 0x38))
  #define local_f4 (*(float *)(albw_frame + 0x3c))
  #define local_f0 (*(float *)(albw_frame + 0x40))
  #define local_ec ((uint *)(albw_frame + 0x44))
  #define local_e4 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_dc (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_d8 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_cc (*(uint *)(albw_frame + 0x64))
  #define local_98 (*(undefined4 *)(albw_frame + 0x98))
  #define local_94 (*(undefined1 *)(albw_frame + 0x9c))
  #define local_8c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_88 (*(undefined1 * *)(albw_frame + 0xa8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0xac))
  #define local_80 ((undefined1 *)(albw_frame + 0xb0))
  #define uStack_41 (*(undefined1 *)(albw_frame + 0xef))
  #define local_40 (*(undefined4 * *)(albw_frame + 0xf0))
  piVar6 = func_00150E40(param_1,param_2);
  iVar9 = DAT_001383d0;
  *piVar6 = DAT_001383d0;
  piVar6[200] = iVar9 + 0x54;
  puVar7 = func_0010A794(piVar6 + 0x103);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  objStack_128[0] = 1;
  objStack_124[0] = 0;
  objStack_120[0] = 0;
  uVar8 = func_0014E428((int)(puVar7 + -0x103),0,0,0,1,0,0);
  puVar7[9] = uVar8;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  uVar8 = DAT_001383d4;
  puVar7[0xd] = 0;
  puVar7[0xe] = uVar8;
  uVar17 = DAT_001383d8;
  puVar15 = puVar7 + -0x103;
  local_40 = puVar7 + -3;
  uVar26 = CONCAT44(uVar8,DAT_001383d8);
  *(bool *)(puVar7 + 0xf) = *(short *)((int)param_2 + 0x2a) != 0;
  puVar7[0x10] = uVar17;
  iVar9 = puVar7[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar9 + 0x80),puVar7[-9],(float *)(puVar7 + -0xf));
  iVar9 = puVar7[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  *(uint *)(iVar9 + 0x74) = param_2[4];
  *(uint *)(iVar9 + 0x78) = param_2[5];
  *(uint *)(iVar9 + 0x7c) = param_2[6];
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar11 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar11 = func_0016A2FC(puVar10,1,DAT_001383dc,1);
  }
  puVar7[10] = puVar11;
  iVar9 = func_00588BE4((int)puVar15);
  uVar18 = DAT_001383e8;
  piVar6 = DAT_001383e4;
  if (iVar9 == *DAT_001383e0) {
    objStack_120[1] = (uint)s_FanSWind_001383ec;
    objStack_120[0] = DAT_001383e8;
    func_00169688((uint *)puVar7[10],0,(int *)objStack_120,*(int *)(puVar7[-0x4f] + 0x1c8));
  }
  else {
    iVar9 = func_00588BE4((int)puVar15);
    if (iVar9 == *DAT_001383f8) {
      objStack_120[1] = (uint)s_FanLWind_001383fc;
      objStack_120[0] = uVar18;
      func_00169688((uint *)puVar7[10],0,(int *)objStack_120,*(int *)(puVar7[-0x4f] + 0x1c8));
    }
    else {
      iVar9 = func_00588BE4((int)puVar15);
      objStack_120[0] = uVar18;
      if (iVar9 == *piVar6) {
        objStack_120[1] = (uint)&DAT_00138408;
        func_00169688((uint *)puVar7[10],0,(int *)objStack_120,*(int *)(puVar7[-0x4f] + 0x1c8));
      }
      else {
        objStack_120[1] = (uint)&DAT_00138410;
        func_00169688((uint *)puVar7[10],0,(int *)objStack_120,*(int *)(puVar7[-0x4f] + 0x1c8));
      }
    }
  }
  func_0016A02C(puVar7[10],-1,(int *)0xffffffff,0);
  local_e4 = &local_e0;
  uStack_d8 = (undefined4)((ulonglong)uVar26 >> 0x20);
  piVar14 = (int *)&DAT_0000000a;
  local_ec[1] = 3;
  puVar11 = &local_dc;
  local_98 = 10;
  local_94 = 0;
  local_ec[0] = 1;
  local_e0 = 0;
  local_cc = unaff_r10 | 0xff;
  local_dc = (undefined4)uVar26;
  uStack_d4 = DAT_00138418;
  uStack_d0 = uStack_d8;
  func_0016898C(puVar7[10],local_ec);
  func_00169A80((int *)puVar7[10],extraout_r1,puVar11,piVar14);
  func_00168E9C((int *)puVar7[10],puVar7[9],(int *)0x0);
  func_004CEAF0(puVar7[9]);
  iVar9 = func_00588BE4((int)puVar15);
  piVar14 = DAT_0013841c;
  if ((iVar9 != *piVar6) && (iVar9 = func_00588BE4((int)puVar15), iVar9 != *piVar14))
  goto LAB_00138718;
  puVar10 = (undefined4 *)func_0010BAB4(0x48);
  puVar11 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar11 = func_004EDC9C(puVar10);
  }
  puVar7[0xb] = puVar11;
  piVar6 = puVar7 + 0xb;
  iVar9 = func_00588BE4((int)puVar15);
  if (iVar9 == *piVar14) {
    objStack_128[0] = (uint)s_Actor_FanL_kcl_00138424;
  }
  else {
    objStack_128[0] = (uint)s_Actor_FanS_kcl_0013896c;
  }
  local_88 = local_80;
  uStack_84 = 0x40;
  uStack_41 = 0;
  local_8c = DAT_00138420;
  local_80[0] = 0;
  func_00111A20((int)&local_8c,objStack_128[0],objStack_124);
  func_004EDB28(puVar7[0xb],(int)&local_8c);
  func_00491624(&local_110,param_2[7],param_2[8],param_2[9]);
  fVar28 = DAT_00138438;
  fVar27 = DAT_00138434;
  iVar9 = *(int *)(puVar7[0xb] + 0x14);
  fVar25 = local_110 - *(float *)(iVar9 + 0x18);
  bVar5 = DAT_00138438 == fVar25;
  bVar24 = fVar25 <= DAT_00138438;
  if (!bVar24 || bVar5) {
    bVar5 = fVar25 == DAT_00138434;
    bVar24 = DAT_00138434 <= fVar25;
  }
  if (bVar24 && !bVar5) {
LAB_001384ac:
    bVar5 = false;
  }
  else {
    fVar25 = local_10c - *(float *)(iVar9 + 0x1c);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_108 - *(float *)(iVar9 + 0x20);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_104 - *(float *)(iVar9 + 0x24);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_100 - *(float *)(iVar9 + 0x28);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_fc - *(float *)(iVar9 + 0x2c);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_f8 - *(float *)(iVar9 + 0x30);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_f4 - *(float *)(iVar9 + 0x34);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    fVar25 = local_f0 - *(float *)(iVar9 + 0x38);
    bVar5 = DAT_00138438 == fVar25;
    bVar24 = fVar25 <= DAT_00138438;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == DAT_00138434;
      bVar24 = DAT_00138434 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001384ac;
    bVar5 = true;
  }
  if (!bVar5) {
    bVar4 = *(byte *)(iVar9 + 0xa8);
    *(byte *)(iVar9 + 0xa8) = bVar4 | 8;
    fVar25 = ALBW_AS_F32(uVar26);
    if ((((local_110 == 1.0 && local_10c == fVar25) && (local_108 == fVar25 && local_104 == fVar25))
        && (local_100 == 1.0 && local_fc == fVar25)) &&
       ((local_f8 == fVar25 && local_f4 == fVar25) && local_f0 == 1.0)) {
      uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
      *(undefined4 *)(iVar9 + 0x18) = uVar8;
      *(float *)(iVar9 + 0x1c) = fVar25;
      *(float *)(iVar9 + 0x20) = fVar25;
      bVar4 = bVar4 & 0xfb | 8;
      *(float *)(iVar9 + 0x24) = fVar25;
      *(undefined4 *)(iVar9 + 0x28) = uVar8;
      *(float *)(iVar9 + 0x2c) = fVar25;
      *(float *)(iVar9 + 0x30) = fVar25;
      *(float *)(iVar9 + 0x34) = fVar25;
      *(undefined4 *)(iVar9 + 0x38) = uVar8;
    }
    else {
      func_001151CC((undefined4 *)(iVar9 + 0x18),&local_110);
      bVar4 = *(byte *)(iVar9 + 0xa8) | 4;
    }
    *(byte *)(iVar9 + 0xa8) = bVar4;
  }
  func_0043625C(*(int **)(puVar7[0xb] + 0x14),puVar7 + -0xf);
  pfVar3 = DAT_00138968;
  iVar9 = *(int *)(*piVar6 + 0x14);
  fVar25 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar9 + 4);
  bVar5 = fVar28 == fVar25;
  bVar24 = fVar25 <= fVar28;
  if (!bVar24 || bVar5) {
    bVar5 = fVar25 == fVar27;
    bVar24 = fVar27 <= fVar25;
  }
  if (bVar24 && !bVar5) {
LAB_001385d0:
    bVar5 = false;
  }
  else {
    fVar25 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar9 + 8);
    bVar5 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001385d0;
    fVar25 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar9 + 0xc);
    bVar5 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_001385d0;
    bVar5 = true;
  }
  if (!bVar5) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(iVar9 + 0xa8) | 8;
    fVar25 = ALBW_AS_F32(param_2[4]) - *pfVar3;
    bVar5 = fVar28 == fVar25;
    bVar24 = fVar25 <= fVar28;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar27;
      bVar24 = fVar27 <= fVar25;
    }
    if (bVar24 && !bVar5) {
LAB_001386bc:
      *(uint *)(iVar9 + 4) = param_2[4];
      *(uint *)(iVar9 + 8) = param_2[5];
      *(uint *)(iVar9 + 0xc) = param_2[6];
      bVar4 = *(byte *)(iVar9 + 0xa8) | 2;
    }
    else {
      fVar25 = ALBW_AS_F32(param_2[5]) - pfVar3[1];
      bVar5 = fVar28 == fVar25;
      bVar24 = fVar25 <= fVar28;
      if (!bVar24 || bVar5) {
        bVar5 = fVar25 == fVar27;
        bVar24 = fVar27 <= fVar25;
      }
      if (bVar24 && !bVar5) goto LAB_001386bc;
      fVar25 = ALBW_AS_F32(param_2[6]) - pfVar3[2];
      bVar5 = fVar28 == fVar25;
      bVar24 = fVar25 <= fVar28;
      if (!bVar24 || bVar5) {
        bVar5 = fVar25 == fVar27;
        bVar24 = fVar27 <= fVar25;
      }
      if (bVar24 && !bVar5) goto LAB_001386bc;
      *(float *)(iVar9 + 4) = *pfVar3;
      *(float *)(iVar9 + 8) = pfVar3[1];
      *(float *)(iVar9 + 0xc) = pfVar3[2];
      bVar4 = *(byte *)(iVar9 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar9 + 0xa8) = bVar4;
  }
  objStack_128[0] = puVar7[-0x50];
  func_004EDAD0(puVar7[0xb],objStack_128);
  *(undefined2 *)(*piVar6 + 0x2c) = *(undefined2 *)(puVar7 + -0xee);
  func_004ED9C8(*piVar6);
  func_004A879C(*DAT_0013897c,*piVar6,2);
LAB_00138718:
  (**(code **)(*(int *)puVar7[9] + 0x10))((int *)puVar7[9],0x24);
  puVar7[-0x4b] = puVar7[-0x4b] | 2;
  *(undefined1 *)((int)puVar7 + 6) = 4;
  puVar7[5] = puVar15;
  iVar9 = func_0010BA78(0x40);
  puVar7[6] = iVar9;
  puVar11 = DAT_00138980;
  puVar7[7] = iVar9 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  iVar13 = 4;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar8 = puVar11[0x13];
    iVar13 = iVar13 + -1;
    puVar10[2] = puVar11[0x12];
    puVar10[3] = uVar8;
    uVar8 = puVar11[0x13];
    puVar10[4] = puVar11[0x12];
    puVar10[5] = uVar8;
    puVar10 = puVar10 + 4;
  } while (iVar13 != 0);
  bVar4 = *(byte *)((int)puVar7 + 6);
  uVar16 = (uint)bVar4;
  puVar10 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar7[8] = puVar10;
  if (uVar16 != 0) {
    puVar12 = puVar10 + -2;
    if ((bVar4 & 1) != 0) {
      uVar8 = puVar11[5];
      *puVar10 = puVar11[4];
      puVar10[1] = uVar8;
      puVar12 = puVar10;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar8 = puVar11[5];
      puVar12[2] = puVar11[4];
      puVar12[3] = uVar8;
      uVar8 = puVar11[5];
      puVar12[4] = puVar11[4];
      puVar12[5] = uVar8;
      puVar12 = puVar12 + 4;
    }
  }
  puVar11 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = 0x24;
    puVar11[1] = 4;
    iVar9 = func_00100118((int)(puVar11 + 2),DAT_00138984,0x24,4);
  }
  if (iVar9 != 0) {
    puVar7[3] = iVar9;
    puVar7[2] = 4;
  }
  iVar9 = DAT_00138988;
  puVar7[-0x2e] = puVar7;
  *(undefined2 *)(iVar9 + (int)puVar15) = 4;
  local_114 = (uint *)s_cState_Off_0013898c;
  local_118 = uVar18;
  iVar9 = puVar7[3];
  puVar22 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar18 + 8))(&local_118);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_114 + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_001388bc;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_001388bc:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar16) {
    uVar16 = iVar9 - 1;
  }
  (**(code **)(local_118 + 8))(&local_118);
  func_0010E3C4(puVar22,local_114,uVar16);
  *(undefined1 *)((int)puVar22 + uVar16) = 0;
  puVar11 = (undefined4 *)puVar7[6];
  uVar8 = DAT_00138980[1];
  uVar17 = DAT_00138980[2];
  uVar20 = DAT_00138980[3];
  uVar21 = DAT_00138980[4];
  uVar23 = DAT_00138980[5];
  *puVar11 = *DAT_00138980;
  puVar11[1] = uVar8;
  puVar11 = (undefined4 *)puVar7[7];
  *puVar11 = uVar17;
  puVar11[1] = uVar20;
  puVar11 = (undefined4 *)puVar7[8];
  *puVar11 = uVar21;
  puVar11[1] = uVar23;
  local_114 = (uint *)s_cState_ToOn_00138998;
  local_118 = uVar18;
  if ((uint)puVar7[2] < 2) {
    iVar9 = puVar7[3];
  }
  else {
    iVar9 = puVar7[3] + 0x24;
  }
  puVar22 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar18 + 8))(&local_118);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_114 + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_001389b0;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_001389b0:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_118 + 8))(&local_118);
  func_0010E3C4(puVar22,local_114,uVar16);
  *(undefined1 *)((int)puVar22 + uVar16) = 0;
  iVar9 = puVar7[6];
  uVar1 = *DAT_00138c68;
  uVar8 = *(undefined4 *)((int)DAT_00138c68 + 0xc);
  uVar17 = *(undefined4 *)(DAT_00138c68 + 2);
  uVar20 = *(undefined4 *)((int)DAT_00138c68 + 0x14);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(DAT_00138c68 + 1);
  *(undefined4 *)(iVar9 + 0xc) = uVar8;
  iVar9 = puVar7[7];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  iVar9 = puVar7[8];
  *(int *)(iVar9 + 8) = (int)uVar1;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  local_114 = (uint *)s_cState_On_00138c6c;
  local_118 = uVar18;
  if ((uint)puVar7[2] < 3) {
    iVar9 = puVar7[3];
  }
  else {
    iVar9 = puVar7[3] + 0x48;
  }
  puVar22 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar18 + 8))(&local_118);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_114 + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00138a74;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00138a74:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_118 + 8))(&local_118);
  func_0010E3C4(puVar22,local_114,uVar16);
  *(undefined1 *)((int)puVar22 + uVar16) = 0;
  puVar11 = DAT_00138980;
  iVar9 = puVar7[6];
  uVar21 = DAT_00138980[0xc];
  uVar8 = DAT_00138980[4];
  uVar17 = DAT_00138980[0xd];
  uVar20 = DAT_00138980[5];
  uVar23 = DAT_00138980[0xb];
  *(undefined4 *)(iVar9 + 0x10) = DAT_00138980[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar23;
  iVar9 = puVar7[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar21;
  *(undefined4 *)(iVar9 + 0x14) = uVar17;
  iVar9 = puVar7[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar8;
  *(undefined4 *)(iVar9 + 0x14) = uVar20;
  local_114 = (uint *)s_cState_ToOff_00138c78;
  local_118 = uVar18;
  uVar16 = puVar7[2];
  if (uVar16 < 4) {
    uVar19 = puVar7[3];
    uVar2 = uVar16;
  }
  else {
    uVar19 = uVar18;
    uVar2 = puVar7[3];
  }
  if (3 < uVar16) {
    uVar19 = uVar2 + 0x6c;
  }
  puVar22 = *(uint **)(uVar19 + 4);
  (**(code **)(uVar18 + 8))(&local_118);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_114 + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_00138b4c;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_00138b4c:
  if (*(int *)(uVar19 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(uVar19 + 8) - 1;
  }
  (**(code **)(local_118 + 8))(&local_118);
  func_0010E3C4(puVar22,local_114,uVar18);
  *(undefined1 *)((int)puVar22 + uVar18) = 0;
  uVar8 = puVar11[0x10];
  uVar20 = puVar11[0xf];
  uVar17 = puVar11[0x11];
  iVar9 = puVar7[6];
  uVar21 = puVar11[4];
  uVar23 = puVar11[5];
  *(undefined4 *)(iVar9 + 0x18) = puVar11[0xe];
  *(undefined4 *)(iVar9 + 0x1c) = uVar20;
  iVar9 = puVar7[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar8;
  *(undefined4 *)(iVar9 + 0x1c) = uVar17;
  iVar9 = puVar7[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar21;
  *(undefined4 *)(iVar9 + 0x1c) = uVar23;
  if (((*(short *)((int)puVar7 + -0x3d6) == 0) ||
      ((*(char *)(local_40 + 0x12) == '\0' && (bVar5 = func_00588BF0((int)puVar15,0), bVar5)))) ||
     ((*(char *)(local_40 + 0x12) == '\x01' && (bVar5 = func_00588BF0((int)puVar15,0), !bVar5)))) {
    *(int *)(*(int *)(puVar7[10] + 0x14) + 0x10) = (int)((ulonglong)uVar26 >> 0x20);
    func_00657070(puVar7,2);
  }
  else {
    *(int *)(*(int *)(puVar7[10] + 0x14) + 0x10) = (int)uVar26;
    func_00657070(puVar7,0);
  }
  return puVar15;
}

