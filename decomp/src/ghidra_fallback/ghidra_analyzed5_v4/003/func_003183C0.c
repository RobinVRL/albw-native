#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_0031816C(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054F774(int param_1,float *param_2,uint param_3,uint *param_4);
extern int func_0066501C(undefined4 *param_1,undefined1 param_2);
extern int DAT_003187a8;
extern undefined4 DAT_003187ac;
extern undefined4 DAT_003187b0;
extern float DAT_003187b4;
extern undefined4 DAT_003187b8;
extern int *DAT_003187bc;
extern uint *DAT_003187c0;
extern undefined4 DAT_003187c4;
extern undefined4 *DAT_003187c8;
extern uint *DAT_003187cc;
extern undefined4 *DAT_003187d0;
extern undefined4 *DAT_003187d4;
extern undefined *DAT_003187d8;
extern int DAT_003187ec;
extern char s_cState_Appear_00318aa4[];
extern char s_cState_Erase_00318ab4[];
extern char s_cState_Prepare_003187dc[];

// USA 003183C0 <- EU 0031839C (Ghidra, non-matching)
// GLOBAL DAT_003187a8 int
// GLOBAL DAT_003187ac undefined4
// GLOBAL DAT_003187b0 undefined4
// GLOBAL DAT_003187b4 float
// GLOBAL DAT_003187b8 undefined4
// GLOBAL DAT_003187bc int *
// GLOBAL DAT_003187c0 uint *
// GLOBAL DAT_003187c4 undefined4
// GLOBAL DAT_003187c8 undefined4 *
// GLOBAL DAT_003187cc uint *
// GLOBAL DAT_003187d0 undefined4 *
// GLOBAL DAT_003187d4 undefined4 *
// GLOBAL DAT_003187d8 undefined *
// GLOBAL DAT_003187ec int
// GLOBAL s_cState_Appear_00318aa4 string
// GLOBAL s_cState_Erase_00318ab4 string
// GLOBAL s_cState_Prepare_003187dc string

undefined4 * func_003183C0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  float fVar16;
  float in_s2;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(uint * *)(albw_frame + 0x4))
  #define local_64 ((uint *)(albw_frame + 0xc))
  #define auStack_5c ((undefined4 *)(albw_frame + 0x14))
  #define local_34 (*(undefined4 * *)(albw_frame + 0x3c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_003187a8;
  *piVar3 = DAT_003187a8;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar12 = puVar4 + -0x103;
  puVar4[8] = 0;
  iVar5 = func_0054D964((int)puVar12,0);
  puVar4[9] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  puVar4[10] = uVar7;
  uVar7 = DAT_003187ac;
  puVar4[0xb] = 0;
  puVar4[0xd] = uVar7;
  iVar5 = func_0054D964((int)puVar12,0);
  puVar4[0xe] = *(undefined4 *)(iVar5 + 0x60);
  uVar14 = (uint)(short)param_2[10];
  *(undefined1 *)(puVar4[10] + 0x61) = 0;
  iVar5 = func_0054DDF4((int)puVar12,0);
  puVar4[-0x1b] = iVar5;
  puVar4[-0x1a] = iVar5;
  local_64[0] = puVar4[-0x50];
  func_0014EB8C(puVar4[10],puVar4[9],(undefined2 *)puVar4[-0x1b],local_64,(short)param_2[0x14],0,
                (short)DAT_003187b0);
  if (uVar14 == 0) {
    *(ushort *)(puVar4[10] + 0x30) = *(ushort *)(puVar4[10] + 0x30) >> 1;
  }
  fVar16 = DAT_003187b4;
  uVar8 = *(uint *)(puVar4[9] + 0x2c) & 0xfffffff7;
  *(uint *)(puVar4[9] + 0x2c) = uVar8;
  *(uint *)(puVar4[9] + 0x2c) = uVar8 | 0x40000;
  *(uint *)(puVar4[9] + 0x2c) = uVar8 | 0x60000;
  iVar5 = puVar4[10];
  func_004D80A4((float *)(iVar5 + 0x24),puVar4[-9],fVar16);
  piVar3 = DAT_003187bc;
  *(undefined4 *)(iVar5 + 0x28) = DAT_003187b8;
  puVar6 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,param_2[0x13]);
  uVar17 = DAT_003187c4;
  if (puVar6 == (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar4 + -0x135) = 1;
  }
  else {
    if (((*DAT_003187c0 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_003187c0), iVar5 != 0)) {
      *DAT_003187c8 = uVar17;
    }
    iVar5 = (**(code **)*puVar6)(puVar6,DAT_003187c8);
    puVar13 = puVar6;
    if (iVar5 == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    if (((*DAT_003187cc & 1) == 0) && (iVar5 = func_00100174((int *)DAT_003187cc), iVar5 != 0)) {
      *DAT_003187d0 = uVar17;
    }
    iVar5 = (**(code **)*puVar6)(puVar6,DAT_003187d0);
    if (iVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    puVar9 = (undefined4 *)((uint)puVar13 | (uint)puVar6);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar4 + -0x135) = 1;
    }
    else {
      if (puVar13 != (undefined4 *)0x0) {
        puVar9 = puVar13 + 0x26d;
      }
      if (puVar13 == (undefined4 *)0x0) {
        puVar9 = puVar6 + 0x38c;
      }
      fVar16 = func_0054F774((int)puVar9,(float *)(puVar4 + -0xf),puVar4[-9],(uint *)0x0);
      uVar8 = puVar4[-9] + 0x20000000 >> 0x1e;
      if ((uVar14 == 1) && (uVar8 == 3 || uVar8 == 1)) {
        puVar4[0xd] = uVar7;
      }
      else {
        puVar4[0xd] = SQRT((ALBW_AS_F32(puVar4[-0xf]) - fVar16) * (ALBW_AS_F32(puVar4[-0xf]) - fVar16) +
                           (ALBW_AS_F32(puVar4[-0xd]) - in_s2) * (ALBW_AS_F32(puVar4[-0xd]) - in_s2));
      }
      puVar4[5] = puVar12;
      *(undefined1 *)((int)puVar4 + 6) = 3;
      iVar5 = func_0010BA78(0x30);
      puVar13 = DAT_003187d4;
      puVar4[6] = iVar5;
      puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
      iVar11 = 3;
      puVar9 = (undefined4 *)(iVar5 + -8);
      do {
        uVar7 = puVar13[0x11];
        iVar11 = iVar11 + -1;
        puVar9[2] = puVar13[0x10];
        puVar9[3] = uVar7;
        uVar7 = puVar13[0x11];
        puVar9[4] = puVar13[0x10];
        puVar9[5] = uVar7;
        puVar9 = puVar9 + 4;
      } while (iVar11 != 0);
      bVar1 = *(byte *)((int)puVar4 + 6);
      uVar8 = (uint)bVar1;
      puVar9 = (undefined4 *)func_0010BA78(uVar8 << 3);
      puVar4[8] = puVar9;
      if (uVar8 != 0) {
        puVar10 = puVar9 + -2;
        if ((bVar1 & 1) != 0) {
          uVar7 = puVar13[0xb];
          *puVar9 = puVar13[10];
          puVar9[1] = uVar7;
          puVar10 = puVar9;
        }
        for (iVar5 = (int)uVar8 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar7 = puVar13[0xb];
          puVar10[2] = puVar13[10];
          puVar10[3] = uVar7;
          uVar7 = puVar13[0xb];
          puVar10[4] = puVar13[10];
          puVar10[5] = uVar7;
          puVar10 = puVar10 + 4;
        }
      }
      puVar9 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
      iVar5 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x24;
        puVar9[1] = 3;
        iVar5 = func_00100118((int)(puVar9 + 2),DAT_003187d8,0x24,3);
      }
      if (iVar5 != 0) {
        puVar4[2] = 3;
        puVar4[3] = iVar5;
      }
      puVar4[-0x2e] = puVar4;
      iVar5 = DAT_003187ec;
      *(undefined2 *)((int)puVar4 + -0xb2) = 3;
      local_6c = (uint *)s_cState_Prepare_003187dc;
      local_70 = iVar5;
      iVar11 = puVar4[3];
      puVar15 = *(uint **)(iVar11 + 4);
      local_34 = puVar4;
      (**(code **)(iVar5 + 8))(&local_70);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_6c + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_00318810;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_00318810:
      iVar11 = *(int *)(iVar11 + 8);
      if (iVar11 <= (int)uVar8) {
        uVar8 = iVar11 - 1;
      }
      (**(code **)(local_70 + 8))(&local_70);
      func_0010E3C4(puVar15,local_6c,uVar8);
      *(undefined1 *)((int)puVar15 + uVar8) = 0;
      puVar9 = (undefined4 *)puVar4[6];
      uVar7 = DAT_003187d4[1];
      uVar17 = DAT_003187d4[2];
      uVar18 = DAT_003187d4[3];
      uVar19 = DAT_003187d4[4];
      uVar20 = DAT_003187d4[5];
      *puVar9 = *DAT_003187d4;
      puVar9[1] = uVar7;
      puVar9 = (undefined4 *)puVar4[7];
      *puVar9 = uVar17;
      puVar9[1] = uVar18;
      puVar9 = (undefined4 *)puVar4[8];
      *puVar9 = uVar19;
      puVar9[1] = uVar20;
      local_6c = (uint *)s_cState_Appear_00318aa4;
      uVar8 = puVar4[2];
      if (uVar8 < 2) {
        puVar13 = (undefined4 *)puVar4[3];
        uVar2 = uVar8;
      }
      else {
        uVar2 = puVar4[3];
      }
      if (1 < uVar8) {
        puVar13 = (undefined4 *)(uVar2 + 0x24);
      }
      puVar15 = (uint *)puVar13[1];
      local_70 = iVar5;
      (**(code **)(iVar5 + 8))(&local_70);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_6c + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_003188d0;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_003188d0:
      if ((int)puVar13[2] <= (int)uVar8) {
        uVar8 = puVar13[2] - 1;
      }
      (**(code **)(local_70 + 8))(&local_70);
      func_0010E3C4(puVar15,local_6c,uVar8);
      puVar9 = DAT_003187d4;
      *(undefined1 *)((int)puVar15 + uVar8) = 0;
      iVar11 = puVar4[6];
      uVar17 = puVar9[8];
      uVar7 = puVar9[9];
      uVar18 = puVar9[10];
      uVar19 = puVar9[7];
      uVar20 = puVar9[0xb];
      *(undefined4 *)(iVar11 + 8) = puVar9[6];
      *(undefined4 *)(iVar11 + 0xc) = uVar19;
      iVar11 = puVar4[7];
      *(undefined4 *)(iVar11 + 8) = uVar17;
      *(undefined4 *)(iVar11 + 0xc) = uVar7;
      iVar11 = puVar4[8];
      *(undefined4 *)(iVar11 + 8) = uVar18;
      *(undefined4 *)(iVar11 + 0xc) = uVar20;
      local_6c = (uint *)s_cState_Erase_00318ab4;
      uVar8 = puVar4[2];
      if (uVar8 < 3) {
        puVar13 = (undefined4 *)puVar4[3];
        uVar2 = uVar8;
      }
      else {
        uVar2 = puVar4[3];
      }
      if (2 < uVar8) {
        puVar13 = (undefined4 *)(uVar2 + 0x48);
      }
      puVar15 = (uint *)puVar13[1];
      local_70 = iVar5;
      (**(code **)(iVar5 + 8))(&local_70);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_6c + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_003189b0;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_003189b0:
      if ((int)puVar13[2] <= (int)uVar8) {
        uVar8 = puVar13[2] - 1;
      }
      (**(code **)(local_70 + 8))(&local_70);
      func_0010E3C4(puVar15,local_6c,uVar8);
      puVar13 = DAT_003187d4;
      *(undefined1 *)((int)puVar15 + uVar8) = 0;
      iVar5 = puVar4[6];
      uVar17 = puVar13[0xf];
      uVar18 = puVar13[0xd];
      uVar20 = puVar13[0xe];
      uVar19 = puVar13[10];
      uVar7 = puVar13[0xb];
      *(undefined4 *)(iVar5 + 0x10) = puVar13[0xc];
      *(undefined4 *)(iVar5 + 0x14) = uVar18;
      iVar5 = puVar4[7];
      *(undefined4 *)(iVar5 + 0x10) = uVar20;
      *(undefined4 *)(iVar5 + 0x14) = uVar17;
      iVar5 = puVar4[8];
      *(undefined4 *)(iVar5 + 0x10) = uVar19;
      *(undefined4 *)(iVar5 + 0x14) = uVar7;
      piVar3 = (int *)func_00521028((int)puVar12);
      (**(code **)(*piVar3 + 8))(piVar3);
      func_003529A0(auStack_5c,piVar3[1],puVar4 + -0x3b);
      func_002C41BC(puVar4 + -0x3b,auStack_5c,0);
      if (puVar6 == (undefined4 *)0x0) {
        if (2 < uVar14) {
          uVar14 = 1;
        }
      }
      else {
        uVar14 = 2;
      }
      func_003521F0((int)(puVar4 + -0x3a),uVar14);
      func_0066501C(local_34,0);
      func_0031816C((int)puVar12);
    }
  }
  return puVar12;
}

