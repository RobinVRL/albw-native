#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_001695F8(int param_1,uint param_2,int *param_3);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E40DC(int param_1,int param_2);
extern int func_001E40F4(int param_1,int param_2);
extern int func_001E4318(int param_1);
extern void func_001E4378(int param_1);
extern int func_002E021C(int param_1,float fparam_0);
extern int func_002E0274(undefined4 *param_1,uint *param_2);
extern int func_00332434(int param_1,int param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00547514(int param_1);
extern int func_00547538(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00333140;
extern float DAT_00333144;
extern undefined *DAT_00333148;
extern float DAT_0033314c;
extern undefined4 DAT_00333150;
extern int *DAT_00333154;
extern float DAT_0033318c;
extern float DAT_00333190;
extern float DAT_00333194;
extern float *DAT_00333840;
extern int *DAT_00333844;
extern int DAT_00333848;
extern int DAT_0033384c;
extern undefined4 *DAT_00333850;
extern undefined *DAT_00333854;
extern int DAT_00333858;
extern float DAT_003338d4;
extern char s_Actor_DoorSwitchGanon_kcl_00333170[];
extern char s_Actor_DoorSwitch_kcl_00333158[];
extern char s_cState_CloseStay_003338a0[];
extern char s_cState_Close_00333880[];
extern char s_cState_OpenStay_0033385c[];
extern char s_cState_Open_003338c8[];
extern char s_cState_TurnBack_00333890[];
extern char s_cState_WaitClosed_0033386c[];
extern char s_cState_WaitOpened_003338b4[];
extern char s_cf_00333158[];
extern char s_cf_00333170[];

// USA 00332D8C <- EU 00332D68 (Ghidra, non-matching)
// GLOBAL DAT_00333140 int
// GLOBAL DAT_00333144 float
// GLOBAL DAT_00333148 undefined *
// GLOBAL DAT_0033314c float
// GLOBAL DAT_00333150 undefined4
// GLOBAL DAT_00333154 int *
// GLOBAL DAT_0033318c float
// GLOBAL DAT_00333190 float
// GLOBAL DAT_00333194 float
// GLOBAL DAT_00333840 float *
// GLOBAL DAT_00333844 int *
// GLOBAL DAT_00333848 int
// GLOBAL DAT_0033384c int
// GLOBAL DAT_00333850 undefined4 *
// GLOBAL DAT_00333854 undefined *
// GLOBAL DAT_00333858 int
// GLOBAL DAT_003338d4 float
// GLOBAL s_cf_00333158 string
// GLOBAL s_cf_00333170 string
// GLOBAL s_cState_CloseStay_003338a0 string
// GLOBAL s_cState_Close_00333880 string
// GLOBAL s_cState_OpenStay_0033385c string
// GLOBAL s_cState_Open_003338c8 string
// GLOBAL s_cState_TurnBack_00333890 string
// GLOBAL s_cState_WaitClosed_0033386c string
// GLOBAL s_cState_WaitOpened_003338b4 string

int func_00332D8C(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  float *pfVar2;
  uint *puVar3;
  bool bVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_cc (*(uint * *)(albw_frame + 0x24))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 (*(float *)(albw_frame + 0x2c))
  #define local_c0 (*(float *)(albw_frame + 0x30))
  #define local_bc (*(char * *)(albw_frame + 0x34))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b4 (*(uint * *)(albw_frame + 0x3c))
  #define local_b0 (*(int *)(albw_frame + 0x40))
  #define local_ac ((undefined1 *)(albw_frame + 0x44))
  #define uStack_6d (*(undefined1 *)(albw_frame + 0x83))
  #define local_60 (*(uint *)(albw_frame + 0x90))
  #define afStack_5c ((float *)(albw_frame + 0x94))
  piVar6 = func_002E0274(param_1,param_2);
  iVar8 = DAT_00333140;
  *piVar6 = DAT_00333140;
  piVar6[200] = iVar8 + 0x5c;
  puVar7 = func_0010A794(piVar6 + 0x130);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  fVar20 = DAT_00333144;
  puVar7[10] = 0;
  puVar7[0xb] = ALBW_AS_U32(fVar20);
  iVar8 = func_00100118((int)(puVar7 + 0xf),DAT_00333148,4,4);
  *(undefined4 *)(iVar8 + 0x10) = 0;
  iVar9 = iVar8 + -0x4fc;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  *(undefined1 *)(iVar8 + 0x18) = 0;
  *(undefined1 *)(iVar8 + 0x19) = 0;
  *(undefined1 *)(iVar8 + 0x1a) = 0;
  *(undefined1 *)(iVar8 + 0x1b) = 0;
  *(undefined1 *)(iVar8 + 0x1c) = 0;
  *(undefined1 *)(iVar8 + 0x1d) = 0;
  bVar4 = func_00547538((int)param_2);
  if (bVar4) {
    *(undefined1 *)(iVar8 + -0x225) = 1;
    func_00547514(iVar8 + -0x4f8);
    return iVar9;
  }
  if (*(char *)(iVar8 + -0x225) != '\0') {
    return iVar9;
  }
  func_001E3FD8(iVar9);
  puVar10 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar10);
  }
  fVar1 = DAT_0033314c;
  piVar6 = (int *)(iVar8 + -0x78);
  *(undefined4 **)(iVar8 + -0x78) = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    local_b4 = (uint *)local_ac;
    local_b0 = 0x40;
    uStack_6d = 0;
    local_ac[0] = 0;
    local_b8 = DAT_00333150;
    iVar11 = func_00588BE4(iVar9);
    puVar3 = local_b4;
    local_d0 = fVar1;
    if (iVar11 != *DAT_00333154) {
      local_cc = (uint *)s_Actor_DoorSwitchGanon_kcl_00333170;
    }
    else {
      local_cc = (uint *)s_Actor_DoorSwitch_kcl_00333158;
    }
    if (iVar11 != *DAT_00333154) {
      (**(code **)((int)ALBW_AS_U32(fVar1) + 8))(&local_d0);
      uVar16 = 0;
      do {
        if (*(char *)((int)local_cc + uVar16) == '\0') {
          if ((int)uVar16 < 0x40001) goto LAB_00332f40;
          break;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < 0x40001);
      uVar16 = 0;
LAB_00332f40:
      if (local_b0 <= (int)uVar16) goto LAB_00332f00;
    }
    else {
      (**(code **)((int)ALBW_AS_U32(fVar1) + 8))();
      uVar16 = 0;
      do {
        if (*(char *)((int)local_cc + uVar16) == '\0') {
          if ((int)uVar16 < 0x40001) goto LAB_00332ef4;
          break;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < 0x40001);
      uVar16 = 0;
LAB_00332ef4:
      if (local_b0 <= (int)uVar16) {
LAB_00332f00:
        uVar16 = local_b0 - 1;
      }
    }
    (**(code **)((int)ALBW_AS_U32(local_d0) + 8))(&local_d0);
    func_0010E3C4(puVar3,local_cc,uVar16);
    *(undefined1 *)((int)puVar3 + uVar16) = 0;
    func_004EDB28(*(int *)(iVar8 + -0x78),(int)&local_b8);
    local_e0 = DAT_0033318c;
    local_dc = DAT_0033318c;
    local_d8 = DAT_0033318c;
    local_d0 = DAT_0033318c;
    local_cc = (uint *)ALBW_PTR_BITS(DAT_0033318c);
    local_c8 = DAT_0033318c;
    fVar25 = DAT_0033318c;
    local_e4 = fVar20;
    local_d4 = fVar20;
    local_c4 = fVar20;
    func_00491624(afStack_5c,0,*(uint *)(iVar8 + -0x114),0);
    func_0011549C(&local_e4,&local_e4,afStack_5c);
    fVar26 = DAT_00333194;
    fVar21 = DAT_00333190;
    iVar11 = *(int *)(*piVar6 + 0x14);
    fVar19 = local_e4 - *(float *)(iVar11 + 0x18);
    bVar4 = DAT_00333194 == fVar19;
    bVar18 = fVar19 <= DAT_00333194;
    if (!bVar18 || bVar4) {
      bVar4 = fVar19 == DAT_00333190;
      bVar18 = DAT_00333190 <= fVar19;
    }
    if (bVar18 && !bVar4) {
LAB_00333124:
      bVar4 = false;
    }
    else {
      fVar19 = local_e0 - *(float *)(iVar11 + 0x1c);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_dc - *(float *)(iVar11 + 0x20);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_d8 - *(float *)(iVar11 + 0x24);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_d4 - *(float *)(iVar11 + 0x28);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_d0 - *(float *)(iVar11 + 0x2c);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = ALBW_AS_F32(local_cc) - *(float *)(iVar11 + 0x30);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_c8 - *(float *)(iVar11 + 0x34);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      fVar19 = local_c4 - *(float *)(iVar11 + 0x38);
      bVar4 = DAT_00333194 == fVar19;
      bVar18 = fVar19 <= DAT_00333194;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_00333190;
        bVar18 = DAT_00333190 <= fVar19;
      }
      if (bVar18 && !bVar4) goto LAB_00333124;
      bVar4 = true;
    }
    if (!bVar4) {
      bVar5 = *(byte *)(iVar11 + 0xa8);
      *(byte *)(iVar11 + 0xa8) = bVar5 | 8;
      if ((((local_e4 == 1.0 && local_e0 == fVar25) && (local_dc == fVar25 && local_d8 == fVar25))
          && (local_d4 == 1.0 && local_d0 == fVar25)) &&
         ((ALBW_AS_F32(local_cc) == fVar25 && local_c8 == fVar25) && local_c4 == 1.0)) {
        bVar5 = bVar5 & 0xfb | 8;
        *(float *)(iVar11 + 0x18) = fVar20;
        *(float *)(iVar11 + 0x1c) = fVar25;
        *(float *)(iVar11 + 0x20) = fVar25;
        *(float *)(iVar11 + 0x24) = fVar25;
        *(float *)(iVar11 + 0x28) = fVar20;
        *(float *)(iVar11 + 0x2c) = fVar25;
        *(float *)(iVar11 + 0x30) = fVar25;
        *(float *)(iVar11 + 0x34) = fVar25;
        *(float *)(iVar11 + 0x38) = fVar20;
      }
      else {
        func_001151CC((undefined4 *)(iVar11 + 0x18),&local_e4);
        bVar5 = *(byte *)(iVar11 + 0xa8) | 4;
      }
      *(byte *)(iVar11 + 0xa8) = bVar5;
    }
    func_0043625C(*(int **)(*(int *)(iVar8 + -0x78) + 0x14),(undefined4 *)(iVar8 + -300));
    pfVar2 = DAT_00333840;
    iVar11 = *(int *)(*piVar6 + 0x14);
    fVar20 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar11 + 4);
    bVar4 = fVar26 == fVar20;
    bVar18 = fVar20 <= fVar26;
    if (!bVar18 || bVar4) {
      bVar4 = fVar20 == fVar21;
      bVar18 = fVar21 <= fVar20;
    }
    if (bVar18 && !bVar4) {
LAB_003332a4:
      bVar4 = false;
    }
    else {
      fVar20 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar11 + 8);
      bVar4 = fVar26 == fVar20;
      bVar18 = fVar20 <= fVar26;
      if (!bVar18 || bVar4) {
        bVar4 = fVar20 == fVar21;
        bVar18 = fVar21 <= fVar20;
      }
      if (bVar18 && !bVar4) goto LAB_003332a4;
      fVar20 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar11 + 0xc);
      bVar4 = fVar26 == fVar20;
      bVar18 = fVar20 <= fVar26;
      if (!bVar18 || bVar4) {
        bVar4 = fVar20 == fVar21;
        bVar18 = fVar21 <= fVar20;
      }
      if (bVar18 && !bVar4) goto LAB_003332a4;
      bVar4 = true;
    }
    if (!bVar4) {
      *(byte *)(iVar11 + 0xa8) = *(byte *)(iVar11 + 0xa8) | 8;
      fVar20 = ALBW_AS_F32(param_2[4]) - *pfVar2;
      bVar4 = fVar26 == fVar20;
      bVar18 = fVar20 <= fVar26;
      if (!bVar18 || bVar4) {
        bVar4 = fVar20 == fVar21;
        bVar18 = fVar21 <= fVar20;
      }
      if (bVar18 && !bVar4) {
LAB_00333378:
        *(uint *)(iVar11 + 4) = param_2[4];
        *(uint *)(iVar11 + 8) = param_2[5];
        *(uint *)(iVar11 + 0xc) = param_2[6];
        bVar5 = *(byte *)(iVar11 + 0xa8) | 2;
      }
      else {
        fVar20 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
        bVar4 = fVar26 == fVar20;
        bVar18 = fVar20 <= fVar26;
        if (!bVar18 || bVar4) {
          bVar4 = fVar20 == fVar21;
          bVar18 = fVar21 <= fVar20;
        }
        if (bVar18 && !bVar4) goto LAB_00333378;
        fVar20 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
        bVar4 = fVar26 == fVar20;
        bVar18 = fVar20 <= fVar26;
        if (!bVar18 || bVar4) {
          bVar4 = fVar20 == fVar21;
          bVar18 = fVar21 <= fVar20;
        }
        if (bVar18 && !bVar4) goto LAB_00333378;
        *(float *)(iVar11 + 4) = *pfVar2;
        *(float *)(iVar11 + 8) = pfVar2[1];
        *(float *)(iVar11 + 0xc) = pfVar2[2];
        bVar5 = *(byte *)(iVar11 + 0xa8) & 0xfd;
      }
      *(byte *)(iVar11 + 0xa8) = bVar5;
    }
    local_60 = *(uint *)(iVar8 + -0x230);
    func_004EDAD0(*(int *)(iVar8 + -0x78),&local_60);
    *(undefined2 *)(*piVar6 + 0x2c) = *(undefined2 *)(iVar8 + -0x4a8);
    func_004ED9C8(*piVar6);
    func_004A879C(*DAT_00333844,*piVar6,0);
  }
  func_001E40F4(iVar9,2);
  iVar11 = DAT_00333848;
  uVar16 = 0;
  do {
    func_00169678(iVar9,uVar16,iVar11 + uVar16 * 8);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 2);
  func_001E4378(iVar9);
  func_001E40DC(iVar9,2);
  iVar11 = DAT_0033384c;
  uVar16 = 0;
  do {
    func_001695F8(iVar9,uVar16,iVar11 + uVar16 * 8);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 2);
  func_001E4318(iVar9);
  *(int *)(iVar8 + -0x28) = iVar9;
  *(undefined1 *)(iVar8 + -0x36) = 7;
  iVar11 = func_0010BA78(0x70);
  puVar7 = DAT_00333850;
  *(int *)(iVar8 + -0x24) = iVar11;
  *(uint *)(iVar8 + -0x20) = iVar11 + (uint)*(byte *)(iVar8 + -0x36) * 8;
  iVar12 = 7;
  puVar10 = (undefined4 *)(iVar11 + -8);
  do {
    uVar17 = puVar7[0x23];
    iVar12 = iVar12 + -1;
    puVar10[2] = puVar7[0x22];
    puVar10[3] = uVar17;
    uVar17 = puVar7[0x23];
    puVar10[4] = puVar7[0x22];
    puVar10[5] = uVar17;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  bVar5 = *(byte *)(iVar8 + -0x36);
  uVar16 = (uint)bVar5;
  puVar10 = (undefined4 *)func_0010BA78(uVar16 << 3);
  *(undefined4 **)(iVar8 + -0x1c) = puVar10;
  if (uVar16 != 0) {
    puVar13 = puVar10 + -2;
    if ((bVar5 & 1) != 0) {
      uVar17 = puVar7[5];
      *puVar10 = puVar7[4];
      puVar10[1] = uVar17;
      puVar13 = puVar10;
    }
    for (iVar11 = (int)uVar16 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar17 = puVar7[5];
      puVar13[2] = puVar7[4];
      puVar13[3] = uVar17;
      uVar17 = puVar7[5];
      puVar13[4] = puVar7[4];
      puVar13[5] = uVar17;
      puVar13 = puVar13 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar11 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 7;
    iVar11 = func_00100118((int)(puVar10 + 2),DAT_00333854,0x24,7);
  }
  if (iVar11 != 0) {
    *(undefined4 *)(iVar8 + -0x34) = 7;
    *(int *)(iVar8 + -0x30) = iVar11;
  }
  iVar11 = DAT_00333858;
  *(int *)(iVar8 + -0x1a8) = iVar8 + -0x3c;
  *(undefined2 *)(iVar11 + iVar9) = 7;
  local_bc = s_cState_OpenStay_0033385c;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,0,(int *)&local_c0);
  puVar10 = *(undefined4 **)(iVar8 + -0x24);
  uVar17 = puVar7[2];
  uVar15 = puVar7[1];
  uVar14 = puVar7[3];
  uVar24 = puVar7[4];
  uVar22 = puVar7[5];
  *puVar10 = *puVar7;
  puVar10[1] = uVar15;
  puVar10 = *(undefined4 **)(iVar8 + -0x20);
  *puVar10 = uVar17;
  puVar10[1] = uVar14;
  puVar10 = *(undefined4 **)(iVar8 + -0x1c);
  *puVar10 = uVar24;
  puVar10[1] = uVar22;
  local_bc = s_cState_WaitClosed_0033386c;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,1,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar17 = puVar7[8];
  uVar15 = puVar7[9];
  uVar14 = puVar7[7];
  *(undefined4 *)(iVar11 + 8) = puVar7[6];
  *(undefined4 *)(iVar11 + 0xc) = uVar14;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 8) = uVar17;
  *(undefined4 *)(iVar11 + 0xc) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(undefined4 *)(iVar11 + 8) = uVar24;
  *(undefined4 *)(iVar11 + 0xc) = uVar22;
  local_bc = s_cState_Close_00333880;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,2,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar17 = puVar7[0xb];
  uVar14 = puVar7[0xc];
  uVar15 = puVar7[0xd];
  uVar22 = puVar7[0xe];
  uVar24 = puVar7[0xf];
  *(undefined4 *)(iVar11 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar11 + 0x14) = uVar17;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 0x10) = uVar14;
  *(undefined4 *)(iVar11 + 0x14) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(undefined4 *)(iVar11 + 0x10) = uVar22;
  *(undefined4 *)(iVar11 + 0x14) = uVar24;
  local_bc = s_cState_TurnBack_00333890;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,3,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar17 = puVar7[0x11];
  uVar14 = puVar7[0x12];
  uVar15 = puVar7[0x13];
  uVar23 = *(undefined8 *)(puVar7 + 4);
  *(undefined4 *)(iVar11 + 0x18) = puVar7[0x10];
  *(undefined4 *)(iVar11 + 0x1c) = uVar17;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 0x18) = uVar14;
  *(undefined4 *)(iVar11 + 0x1c) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(int *)(iVar11 + 0x18) = (int)uVar23;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  local_bc = s_cState_CloseStay_003338a0;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,4,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar17 = puVar7[0x16];
  uVar15 = puVar7[0x17];
  uVar14 = puVar7[0x15];
  *(undefined4 *)(iVar11 + 0x20) = puVar7[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 0x20) = uVar17;
  *(undefined4 *)(iVar11 + 0x24) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(int *)(iVar11 + 0x20) = (int)uVar23;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  local_bc = s_cState_WaitOpened_003338b4;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,5,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar17 = puVar7[0x19];
  uVar14 = puVar7[0x1a];
  uVar15 = puVar7[0x1b];
  *(undefined4 *)(iVar11 + 0x28) = puVar7[0x18];
  *(undefined4 *)(iVar11 + 0x2c) = uVar17;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 0x28) = uVar14;
  *(undefined4 *)(iVar11 + 0x2c) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(int *)(iVar11 + 0x28) = (int)uVar23;
  *(int *)(iVar11 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  local_bc = s_cState_Open_003338c8;
  local_c0 = fVar1;
  func_0010BEC4(iVar8 + -0x3c,6,(int *)&local_c0);
  iVar11 = *(int *)(iVar8 + -0x24);
  uVar14 = puVar7[0x1f];
  uVar24 = puVar7[0x20];
  uVar17 = puVar7[0x21];
  uVar15 = puVar7[0x1d];
  uVar22 = puVar7[0x1e];
  *(undefined4 *)(iVar11 + 0x30) = puVar7[0x1c];
  *(undefined4 *)(iVar11 + 0x34) = uVar15;
  iVar11 = *(int *)(iVar8 + -0x20);
  *(undefined4 *)(iVar11 + 0x30) = uVar22;
  *(undefined4 *)(iVar11 + 0x34) = uVar14;
  iVar11 = *(int *)(iVar8 + -0x1c);
  *(undefined4 *)(iVar11 + 0x30) = uVar24;
  *(undefined4 *)(iVar11 + 0x34) = uVar17;
  if (*(short *)(iVar8 + -0x4ca) == 0) {
    bVar4 = func_00588BF0(iVar9,1);
    if (!bVar4) {
      *(undefined1 *)(iVar8 + -0x68) = 0;
      func_00588C14(iVar9,0,1);
      func_00332434(iVar9,0);
      func_006657B4((undefined4 *)(iVar8 + -0x3c),4);
      goto LAB_003337f8;
    }
  }
  else {
    bVar4 = func_00588BF0(iVar9,0);
    if ((bVar4) && (*(short *)(iVar8 + -0x4d0) == 0 || *(short *)(iVar8 + -0x4d0) == 2)) {
      *(undefined1 *)(iVar8 + -0x68) = 0;
      func_00332434(iVar9,0);
      func_006657B4((undefined4 *)(iVar8 + -0x3c),4);
      goto LAB_003337f8;
    }
  }
  *(undefined1 *)(iVar8 + -0x68) = 1;
  func_00332434(iVar9,1);
  func_006657B4((undefined4 *)(iVar8 + -0x3c),0);
LAB_003337f8:
  func_001E3FD8(iVar9);
  func_002E021C(iVar9,DAT_003338d4);
  func_004ECF6C(iVar9);
  if (*(short *)(iVar8 + -0x4d0) == 2) {
    uVar16 = *(uint *)(iVar8 + -0x21c) | 2;
  }
  else {
    uVar16 = *(uint *)(iVar8 + -0x21c) | 4;
  }
  *(uint *)(iVar8 + -0x21c) = uVar16;
  return iVar9;
}

