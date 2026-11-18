#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F2D8(undefined4 *param_1,undefined1 param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_002432e4;
extern undefined4 DAT_002432e8;
extern undefined4 DAT_002432ec;
extern undefined4 DAT_002432f0;
extern undefined4 DAT_002432f4;
extern undefined4 DAT_002432f8;
extern int DAT_00243308;
extern undefined4 DAT_0024330c;
extern int *DAT_00243310;
extern int *DAT_00243750;
extern int *DAT_0024376c;
extern int *DAT_00243788;
extern int *DAT_002437a4;
extern int *DAT_002437c0;
extern int *DAT_002437dc;
extern int *DAT_002437f8;
extern int *DAT_00243814;
extern undefined4 *DAT_00243cb8;
extern undefined *DAT_00243cbc;
extern char s_Actor_WaterFlowB1Ea_kcl_002437c4[];
extern char s_Actor_WaterFlowB1Eb_kcl_002437e0[];
extern char s_Actor_WaterFlowB1Nd_1_kcl_00243330[];
extern char s_Actor_WaterFlowB1Nd_2_kcl_0024334c[];
extern char s_Actor_WaterFlowB1Nd_3_kcl_00243368[];
extern char s_Actor_WaterFlowB1Ne_kcl_00243754[];
extern char s_Actor_WaterFlowB1Nf_kcl_00243770[];
extern char s_Actor_WaterFlowB1Sa_kcl_002437a8[];
extern char s_Actor_WaterFlowF1Sa_kcl_0024378c[];
extern char s_Actor_WaterFlowF1Sb_kcl_002437fc[];
extern char s_WaterFlow_002432fc[];
extern char s_cState_Close_00243cc0[];
extern char s_cState_Open_00243cf4[];
extern char s_cState_ToClose_00243d14[];
extern char s_cState_ToOpen_00243ce4[];
extern char s_cState_WaitToClose_00243d00[];
extern char s_cState_WaitToOpen_00243cd0[];
extern char s_cf_00243330[];
extern char s_cf_0024334c[];
extern char s_cf_00243368[];
extern char s_cf_00243754[];
extern char s_cf_00243770[];
extern char s_cf_0024378c[];
extern char s_cf_002437a8[];
extern char s_cf_002437c4[];
extern char s_cf_002437e0[];
extern char s_cf_002437fc[];
extern char s_dgn_WaterFordB1Nd_00243314[];
extern char s_switch_00243328[];

// USA 00242ED4 <- EU 00242ED4 (Ghidra, non-matching)
// GLOBAL DAT_002432e4 int
// GLOBAL DAT_002432e8 undefined4
// GLOBAL DAT_002432ec undefined4
// GLOBAL DAT_002432f0 undefined4
// GLOBAL DAT_002432f4 undefined4
// GLOBAL DAT_002432f8 undefined4
// GLOBAL DAT_00243308 int
// GLOBAL DAT_0024330c undefined4
// GLOBAL DAT_00243310 int *
// GLOBAL DAT_00243750 int *
// GLOBAL DAT_0024376c int *
// GLOBAL DAT_00243788 int *
// GLOBAL DAT_002437a4 int *
// GLOBAL DAT_002437c0 int *
// GLOBAL DAT_002437dc int *
// GLOBAL DAT_002437f8 int *
// GLOBAL DAT_00243814 int *
// GLOBAL DAT_00243cb8 undefined4 *
// GLOBAL DAT_00243cbc undefined *
// GLOBAL s_cf_002437c4 string
// GLOBAL s_cf_002437e0 string
// GLOBAL s_cf_00243330 string
// GLOBAL s_cf_0024334c string
// GLOBAL s_cf_00243368 string
// GLOBAL s_cf_00243754 string
// GLOBAL s_cf_00243770 string
// GLOBAL s_cf_002437a8 string
// GLOBAL s_cf_0024378c string
// GLOBAL s_cf_002437fc string
// GLOBAL s_WaterFlow_002432fc string
// GLOBAL s_cState_Close_00243cc0 string
// GLOBAL s_cState_Open_00243cf4 string
// GLOBAL s_cState_ToClose_00243d14 string
// GLOBAL s_cState_ToOpen_00243ce4 string
// GLOBAL s_cState_WaitToClose_00243d00 string
// GLOBAL s_cState_WaitToOpen_00243cd0 string
// GLOBAL s_dgn_WaterFordB1Nd_00243314 string
// GLOBAL s_switch_00243328 string

undefined4 * func_00242ED4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *unaff_r7;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_13c (*(float *)(albw_frame + 0x4))
  #define local_138 (*(float *)(albw_frame + 0x8))
  #define local_134 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_130 (*(undefined4 *)(albw_frame + 0x10))
  #define local_12c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_128 (*(undefined4 *)(albw_frame + 0x18))
  #define local_124 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_120 (*(undefined4 *)(albw_frame + 0x20))
  #define local_11c (*(uint *)(albw_frame + 0x24))
  #define local_114 ((uint *)(albw_frame + 0x2c))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_e4 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_e0 (*(int *)(albw_frame + 0x60))
  #define local_dc (*(char * *)(albw_frame + 0x64))
  #define local_d8 (*(int *)(albw_frame + 0x68))
  #define local_d4 (*(char * *)(albw_frame + 0x6c))
  #define auStack_c8 ((undefined4 *)(albw_frame + 0x78))
  #define auStack_8c ((undefined4 *)(albw_frame + 0xb4))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x108))
  piVar3 = func_00150E40(param_1,param_2);
  iVar17 = DAT_002432e4;
  piVar3[200] = DAT_002432e4 + 0x54;
  *piVar3 = iVar17;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  piVar3[0x106] = 0;
  piVar3[0x107] = 0;
  piVar3[0x108] = 0;
  piVar3[0x109] = 0;
  piVar3[0x10a] = 0;
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  piVar3[0x10c] = param_2[1];
  piVar3[0x10d] = uVar10;
  piVar3[0x10e] = uVar11;
  puVar4 = func_0010A794(piVar3 + 0x10f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar16 = DAT_002432e8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar12 = DAT_002432ec;
  puVar4[10] = uVar16;
  puVar4[0xb] = uVar12;
  puVar14 = puVar4 + -0x10f;
  puVar4[9] = 0;
  uVar16 = DAT_002432f4;
  *(bool *)(puVar4 + 0xc) = *(short *)((int)param_2 + 0x2a) != 0;
  uVar20 = CONCAT44(DAT_002432f0,uVar16);
  puVar4[-0x57] = puVar4[-0x57] | 2;
  puVar4[-0x18] = uVar16;
  puVar4[-0x17] = uVar16;
  puVar4[-0x16] = uVar16;
  piVar3 = (int *)func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar4[-0xc] = piVar3;
  (**(code **)(*piVar3 + 0x10))(piVar3,0x24);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar5,1,DAT_002432f8,1);
  }
  puVar4[-0xb] = puVar6;
  iVar17 = DAT_00243308;
  local_d4 = s_WaterFlow_002432fc;
  local_d8 = DAT_00243308;
  func_00169608((uint *)puVar4[-0xb],0,&local_d8,*(int *)(puVar4[-0x5b] + 0x1c8));
  func_0016A02C(puVar4[-0xb],-1,(int *)0xffffffff,0);
  local_138 = 4.2039e-45;
  uStack_128 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_134 = &local_130;
  local_e8 = 10;
  local_e4 = 0;
  local_130 = 0;
  local_13c = 1.4013e-45;
  local_11c = (uint)unaff_r7 | 0xff;
  local_12c = (undefined4)uVar20;
  local_124 = DAT_0024330c;
  uVar16 = DAT_0024330c;
  local_120 = uStack_128;
  func_0016898C(puVar4[-0xb],(uint *)&local_13c);
  iVar7 = func_00588BE4((int)puVar14);
  if (iVar7 == *DAT_00243310) {
    puVar5 = (undefined4 *)func_0010BAB4(0xa8);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_0016A2FC(puVar5,1,DAT_002432f8,1);
    }
    puVar4[-10] = puVar6;
    unaff_r7 = puVar4 + -10;
    local_d4 = s_dgn_WaterFordB1Nd_00243314;
    local_d8 = iVar17;
    func_00169608((uint *)puVar4[-10],0,&local_d8,*(int *)(puVar4[-0x5b] + 0x1c8));
    func_0016A02C(*unaff_r7,-1,(int *)0xffffffff,0);
    local_134 = &local_130;
    uStack_128 = (undefined4)((ulonglong)uVar20 >> 0x20);
    local_138 = 4.2039e-45;
    local_e8 = 10;
    local_e4 = 0;
    local_130 = 0;
    local_13c = 1.4013e-45;
    local_11c = (uint)unaff_r7 | 0xff;
    local_12c = (undefined4)uVar20;
    local_124 = uVar16;
    local_120 = uStack_128;
    func_0016898C(puVar4[-10],(uint *)&local_13c);
  }
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar5,1,DAT_002432f8,1);
  }
  puVar4[-9] = puVar6;
  piVar3 = puVar4 + -9;
  local_d4 = s_switch_00243328;
  local_d8 = iVar17;
  func_00169608((uint *)puVar4[-9],0,&local_d8,*(int *)(puVar4[-0x5b] + 0x1c8));
  func_0016A02C(*piVar3,-1,(int *)0xffffffff,0);
  local_134 = &local_130;
  local_138 = 4.2039e-45;
  uVar12 = 10;
  local_e8 = 10;
  local_e4 = 0;
  local_130 = 0;
  local_13c = 1.4013e-45;
  uStack_128 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_11c = (uint)unaff_r7 | 0xff;
  local_12c = (undefined4)uVar20;
  local_124 = uVar16;
  local_120 = uStack_128;
  func_0016898C(puVar4[-9],(uint *)&local_13c);
  fVar19 = ALBW_AS_F32(uVar20);
  local_38 = puVar4 + -0x4f;
  uVar10 = 1;
  puVar4[-0x3b] = *piVar3;
  *(undefined2 *)(puVar4 + -0x39) = 1;
  iVar7 = func_00588BE4((int)puVar14);
  if (iVar7 == *DAT_00243310) {
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    puVar4[-8] = puVar6;
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    puVar4[-7] = puVar6;
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    puVar4[-6] = puVar6;
    func_00689794(&local_13c,s_Actor_WaterFlowB1Nd_1_kcl_00243330,uVar10,uVar12);
    func_004EDB28(puVar4[-8],(int)&local_13c);
    func_00689794(auStack_8c,s_Actor_WaterFlowB1Nd_2_kcl_0024334c,uVar10,uVar12);
    func_004EDB28(puVar4[-7],(int)auStack_8c);
    func_00689794(&local_d8,s_Actor_WaterFlowB1Nd_3_kcl_00243368,uVar10,uVar12);
    iVar7 = puVar4[-6];
    puVar6 = auStack_c8;
LAB_002435e4:
    func_004EDB28(iVar7,(int)(puVar6 + -4));
  }
  else {
    iVar7 = func_00588BE4((int)puVar14);
    if (iVar7 == *DAT_00243750) {
      puVar5 = (undefined4 *)func_0010BAB4(0x48);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_004EDC9C(puVar5);
      }
      puVar4[-7] = puVar6;
      func_00689794(&local_13c,s_Actor_WaterFlowB1Ne_kcl_00243754,uVar10,uVar12);
      func_004EDB28(puVar4[-7],(int)&local_13c);
    }
    else {
      iVar7 = func_00588BE4((int)puVar14);
      if (iVar7 == *DAT_0024376c) {
        puVar5 = (undefined4 *)func_0010BAB4(0x48);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = func_004EDC9C(puVar5);
        }
        puVar4[-7] = puVar6;
        func_00689794(&local_13c,s_Actor_WaterFlowB1Nf_kcl_00243770,uVar10,uVar12);
        func_004EDB28(puVar4[-7],(int)&local_13c);
      }
      else {
        iVar7 = func_00588BE4((int)puVar14);
        if (iVar7 == *DAT_00243788) {
          puVar5 = (undefined4 *)func_0010BAB4(0x48);
          puVar6 = (undefined4 *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = func_004EDC9C(puVar5);
          }
          puVar4[-7] = puVar6;
          func_00689794(&local_13c,s_Actor_WaterFlowF1Sa_kcl_0024378c,uVar10,uVar12);
          func_004EDB28(puVar4[-7],(int)&local_13c);
        }
        else {
          iVar7 = func_00588BE4((int)puVar14);
          if (iVar7 == *DAT_002437a4) {
            puVar5 = (undefined4 *)func_0010BAB4(0x48);
            puVar6 = (undefined4 *)0x0;
            if (puVar5 != (undefined4 *)0x0) {
              puVar6 = func_004EDC9C(puVar5);
            }
            puVar4[-7] = puVar6;
            func_00689794(&local_13c,s_Actor_WaterFlowB1Sa_kcl_002437a8,uVar10,uVar12);
            func_004EDB28(puVar4[-7],(int)&local_13c);
          }
          else {
            iVar7 = func_00588BE4((int)puVar14);
            if (iVar7 == *DAT_002437c0) {
              puVar5 = (undefined4 *)func_0010BAB4(0x48);
              puVar6 = (undefined4 *)0x0;
              if (puVar5 != (undefined4 *)0x0) {
                puVar6 = func_004EDC9C(puVar5);
              }
              puVar4[-8] = puVar6;
              func_00689794(&local_13c,s_Actor_WaterFlowB1Ea_kcl_002437c4,uVar10,uVar12);
              func_004EDB28(puVar4[-8],(int)&local_13c);
            }
            else {
              iVar7 = func_00588BE4((int)puVar14);
              if (iVar7 == *DAT_002437dc) {
                puVar5 = (undefined4 *)func_0010BAB4(0x48);
                puVar6 = (undefined4 *)0x0;
                if (puVar5 != (undefined4 *)0x0) {
                  puVar6 = func_004EDC9C(puVar5);
                }
                puVar4[-8] = puVar6;
                func_00689794(&local_13c,s_Actor_WaterFlowB1Eb_kcl_002437e0,uVar10,uVar12);
                func_004EDB28(puVar4[-8],(int)&local_13c);
              }
              else {
                iVar7 = func_00588BE4((int)puVar14);
                if (iVar7 == *DAT_002437f8) {
                  puVar5 = (undefined4 *)func_0010BAB4(0x48);
                  puVar6 = (undefined4 *)0x0;
                  if (puVar5 != (undefined4 *)0x0) {
                    puVar6 = func_004EDC9C(puVar5);
                  }
                  puVar4[-7] = puVar6;
                  func_00689794(&local_13c,s_Actor_WaterFlowF1Sb_kcl_002437fc,uVar10,uVar12);
                  iVar7 = puVar4[-7];
                  puVar6 = &local_12c;
                  goto LAB_002435e4;
                }
              }
            }
          }
        }
      }
    }
  }
  piVar13 = DAT_00243814;
  piVar15 = puVar4 + -8;
  if (puVar4[-8] != 0) {
    func_00491624(&local_138,param_2[7],param_2[8],param_2[9]);
    func_00435ED0(*(int *)(puVar4[-8] + 0x14),&local_138);
    func_0043625C(*(int **)(*piVar15 + 0x14),puVar4 + -0x1b);
    func_0043610C(*(int *)(*piVar15 + 0x14),(float *)(param_2 + 4));
    local_13c = ALBW_AS_F32(puVar4[-0x5c]);
    func_004EDAD0(*piVar15,(uint *)&local_13c);
    *(undefined2 *)(*piVar15 + 0x2c) = *(undefined2 *)(puVar4 + -0xfa);
    func_004ED9C8(*piVar15);
    func_004A879C(*piVar13,*piVar15,2);
  }
  piVar15 = puVar4 + -7;
  if (puVar4[-7] != 0) {
    func_00491624(&local_13c,param_2[7],param_2[8],param_2[9]);
    func_00435ED0(*(int *)(puVar4[-7] + 0x14),&local_13c);
    func_0043625C(*(int **)(*piVar15 + 0x14),puVar4 + -0x1b);
    func_0043610C(*(int *)(*piVar15 + 0x14),(float *)(param_2 + 4));
    local_114[0] = puVar4[-0x5c];
    func_004EDAD0(*piVar15,local_114);
    *(undefined2 *)(*piVar15 + 0x2c) = *(undefined2 *)(puVar4 + -0xfa);
    func_004ED9C8(*piVar15);
    func_004A879C(*piVar13,*piVar15,2);
  }
  piVar15 = puVar4 + -6;
  if (puVar4[-6] != 0) {
    func_00491624(&local_13c,param_2[7],param_2[8],param_2[9]);
    func_00435ED0(*(int *)(puVar4[-6] + 0x14),&local_13c);
    func_0043625C(*(int **)(*piVar15 + 0x14),puVar4 + -0x1b);
    func_0043610C(*(int *)(*piVar15 + 0x14),(float *)(param_2 + 4));
    local_114[0] = puVar4[-0x5c];
    func_004EDAD0(*piVar15,local_114);
    *(undefined2 *)(*piVar15 + 0x2c) = *(undefined2 *)(puVar4 + -0xfa);
    func_004ED9C8(*piVar15);
    func_004A879C(*piVar13,*piVar15,2);
  }
  puVar4[5] = puVar14;
  *(undefined1 *)((int)puVar4 + 6) = 6;
  iVar7 = func_0010BA78(0x60);
  puVar6 = DAT_00243cb8;
  puVar4[6] = iVar7;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 6;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar16 = puVar6[0x1b];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar6[0x1a];
    puVar5[3] = uVar16;
    uVar16 = puVar6[0x1b];
    puVar5[4] = puVar6[0x1a];
    puVar5[5] = uVar16;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar5;
  if (uVar10 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar16;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar10 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar16 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar16;
      uVar16 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar16;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_00243cbc,0x24,6);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 6;
  }
  puVar4[-0x3a] = puVar4;
  *(undefined2 *)((int)local_38 + 0x5a) = 6;
  local_dc = s_cState_Close_00243cc0;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,0,&local_e0);
  puVar5 = (undefined4 *)puVar4[6];
  uVar18 = puVar6[1];
  uVar16 = puVar6[2];
  uVar12 = puVar6[3];
  uVar21 = puVar6[4];
  uVar22 = puVar6[5];
  *puVar5 = *puVar6;
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar16;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar21;
  puVar5[1] = uVar22;
  local_dc = s_cState_WaitToOpen_00243cd0;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,1,&local_e0);
  iVar7 = puVar4[6];
  uVar20 = *(undefined8 *)(puVar6 + 6);
  uVar16 = puVar6[8];
  uVar12 = puVar6[9];
  *(int *)(iVar7 + 8) = (int)uVar20;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar21;
  *(undefined4 *)(iVar7 + 0xc) = uVar22;
  local_dc = s_cState_ToOpen_00243ce4;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,2,&local_e0);
  iVar7 = puVar4[6];
  uVar20 = *(undefined8 *)(puVar6 + 10);
  uVar16 = puVar6[0xc];
  uVar12 = puVar6[0xd];
  *(int *)(iVar7 + 0x10) = (int)uVar20;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar16;
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar21;
  *(undefined4 *)(iVar7 + 0x14) = uVar22;
  local_dc = s_cState_Open_00243cf4;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,3,&local_e0);
  iVar7 = puVar4[6];
  uVar20 = *(undefined8 *)(puVar6 + 0xe);
  uVar16 = puVar6[0x10];
  uVar12 = puVar6[0x11];
  *(int *)(iVar7 + 0x18) = (int)uVar20;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar16;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar21;
  *(undefined4 *)(iVar7 + 0x1c) = uVar22;
  local_dc = s_cState_WaitToClose_00243d00;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,4,&local_e0);
  iVar7 = puVar4[6];
  uVar20 = *(undefined8 *)(puVar6 + 0x12);
  uVar16 = puVar6[0x14];
  uVar12 = puVar6[0x15];
  *(int *)(iVar7 + 0x20) = (int)uVar20;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar16;
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar21;
  *(undefined4 *)(iVar7 + 0x24) = uVar22;
  local_dc = s_cState_ToClose_00243d14;
  local_e0 = iVar17;
  func_0010BEC4((int)puVar4,5,&local_e0);
  uVar12 = puVar6[0x18];
  uVar16 = puVar6[0x19];
  iVar17 = puVar4[6];
  piVar13 = (int *)puVar6[0x17];
  *(undefined4 *)(iVar17 + 0x28) = puVar6[0x16];
  *(int **)(iVar17 + 0x2c) = piVar13;
  iVar17 = puVar4[7];
  *(undefined4 *)(iVar17 + 0x28) = uVar12;
  *(undefined4 *)(iVar17 + 0x2c) = uVar16;
  iVar17 = puVar4[8];
  *(undefined4 *)(iVar17 + 0x28) = uVar21;
  *(undefined4 *)(iVar17 + 0x2c) = uVar22;
  if ((((*(short *)((int)puVar4 + -0x406) == 0) ||
       ((*(char *)(puVar4 + 0xc) == '\0' && (bVar2 = func_00588BF0((int)puVar14,0), bVar2)))) ||
      ((*(char *)(puVar4 + 0xc) == '\x01' && (bVar2 = func_00588BF0((int)puVar14,0), !bVar2)))) ||
     (puVar4[-9] == 0)) {
    func_0065F2D8(puVar4,3);
    iVar17 = extraout_r1_02;
    if (puVar4[-9] == 0) goto LAB_00243be4;
    iVar7 = *(int *)(puVar4[-9] + 0x14);
    iVar17 = iVar7;
    if (*(float *)(iVar7 + 8) == *(float *)(iVar7 + 0x14)) goto LAB_00243be4;
    *(float *)(iVar7 + 8) = *(float *)(iVar7 + 0x14);
  }
  else {
    func_0065F2D8(puVar4,0);
    iVar7 = puVar4[-9];
    iVar17 = extraout_r1;
    if (iVar7 == 0) goto LAB_00243be4;
    iVar17 = *(int *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 0x14);
    if (*(float *)(iVar7 + 8) == fVar19) goto LAB_00243be4;
    *(float *)(iVar7 + 8) = fVar19;
  }
  *(undefined1 *)(iVar7 + 0x26) = 1;
LAB_00243be4:
  if ((int *)puVar4[-0xb] != (int *)0x0) {
    func_00169A80((int *)puVar4[-0xb],iVar17,uVar12,piVar13);
    uVar12 = 0;
    func_00168E9C((int *)puVar4[-0xb],puVar4[-0xc],(int *)0x0);
    iVar17 = extraout_r1_00;
  }
  if ((int *)puVar4[-10] != (int *)0x0) {
    func_00169A80((int *)puVar4[-10],iVar17,uVar12,piVar13);
    uVar12 = 0;
    func_00168E9C((int *)puVar4[-10],puVar4[-0xc],(int *)0x0);
    iVar17 = extraout_r1_01;
  }
  if ((int *)puVar4[-9] != (int *)0x0) {
    func_00169A80((int *)puVar4[-9],iVar17,uVar12,piVar13);
    func_00168E9C((int *)*piVar3,puVar4[-0xc],(int *)0x0);
  }
  func_004CEAF0(puVar4[-0xc]);
  iVar17 = puVar4[-0xc];
  *(uint *)(iVar17 + 0x164) = *(uint *)(iVar17 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar17 + 0x80),0,puVar4[-0x15],0);
  iVar17 = puVar4[-0xc];
  *(uint *)(iVar17 + 0x164) = *(uint *)(iVar17 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar17 + 0x8c) = puVar4[-0x1b];
  *(undefined4 *)(iVar17 + 0x9c) = puVar4[-0x1a];
  *(undefined4 *)(iVar17 + 0xac) = puVar4[-0x19];
  func_004CEAF0(puVar4[-0xc]);
  return puVar14;
}

