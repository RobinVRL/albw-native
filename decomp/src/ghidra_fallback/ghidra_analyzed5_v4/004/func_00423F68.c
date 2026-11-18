#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_0031B348(int param_1,uint param_2);
extern int func_0031BFA0(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern undefined4 DAT_00424338;
extern undefined4 DAT_0042433c;
extern int DAT_00424354;
extern undefined DAT_00424438;
extern int DAT_00424818;
extern undefined4 *DAT_0042481c;
extern undefined *DAT_00424820;
extern int DAT_00424c88;
extern char *DAT_00424c8c;
extern char s_ChangeShortCut_00424420[];
extern char s_Default_004243e0[];
extern char s_Disable_004243e8[];
extern char s_G_ScrollBtnB_00_004243a8[];
extern char s_G_ScrollBtnT_00_00424398[];
extern char s_InIcon_00424430[];
extern char s_L_Item_00_00424444[];
extern char s_N_BtnAll_00_0042480c[];
extern char s_Normal_004243f0[];
extern char s_OpenNormal_00424404[];
extern char s_OpenShortCut_00424410[];
extern char s_OutIcon_0042443c[];
extern char s_SelectEmpty_004243d4[];
extern char s_Select_004243cc[];
extern char s_ShortCut_004243f8[];
extern char s_TouchDecideDefault_00424358[];
extern char s_TouchDecideScrollX_00424c90[];
extern char s_TouchDecideScrollY_004243b8[];
extern char s_TouchOnOffDefault_00424340[];
extern char s_TouchOnOffScrollBtnX_00424c70[];
extern char s_TouchOnOffScrollBtnY_00424380[];
extern char s_TouchOnOffScrollX_00424c5c[];
extern char s_TouchOnOffScrollY_0042436c[];
extern char s_cState_BarDecide_00424854[];
extern char s_cState_BarIn_00424834[];
extern char s_cState_BarOut_00424884[];
extern char s_cState_BarTap_00424844[];
extern char s_cState_BarWait_00424874[];
extern char s_cState_Change_00424c4c[];
extern char s_cState_Disable_00424c30[];
extern char s_cState_Hide_00424c18[];
extern char s_cState_OffIdle_00424824[];
extern char s_cState_OnIdle_00424bf8[];
extern char s_cState_OnPush_00424c08[];
extern char s_cState_Open_00424c40[];
extern char s_cState_PushOn_00424894[];
extern char s_cState_Set_00424c24[];
extern char s_cState_Slot_00424868[];

// USA 00423F68 <- EU 00423F48 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00424338 undefined4
// GLOBAL DAT_0042433c undefined4
// GLOBAL DAT_00424354 int
// GLOBAL DAT_00424438 undefined
// GLOBAL DAT_00424818 int
// GLOBAL DAT_0042481c undefined4 *
// GLOBAL DAT_00424820 undefined *
// GLOBAL DAT_00424c88 int
// GLOBAL DAT_00424c8c char *
// GLOBAL s_ChangeShortCut_00424420 string
// GLOBAL s_Default_004243e0 string
// GLOBAL s_Disable_004243e8 string
// GLOBAL s_G_ScrollBtnB_00_004243a8 string
// GLOBAL s_G_ScrollBtnT_00_00424398 string
// GLOBAL s_InIcon_00424430 string
// GLOBAL s_L_Item_00_00424444 string
// GLOBAL s_N_BtnAll_00_0042480c string
// GLOBAL s_Normal_004243f0 string
// GLOBAL s_OpenNormal_00424404 string
// GLOBAL s_OpenShortCut_00424410 string
// GLOBAL s_OutIcon_0042443c string
// GLOBAL s_SelectEmpty_004243d4 string
// GLOBAL s_Select_004243cc string
// GLOBAL s_ShortCut_004243f8 string
// GLOBAL s_TouchDecideDefault_00424358 string
// GLOBAL s_TouchDecideScrollX_00424c90 string
// GLOBAL s_TouchDecideScrollY_004243b8 string
// GLOBAL s_TouchOnOffDefault_00424340 string
// GLOBAL s_TouchOnOffScrollBtnX_00424c70 string
// GLOBAL s_TouchOnOffScrollBtnY_00424380 string
// GLOBAL s_TouchOnOffScrollX_00424c5c string
// GLOBAL s_TouchOnOffScrollY_0042436c string
// GLOBAL s_cState_BarDecide_00424854 string
// GLOBAL s_cState_BarIn_00424834 string
// GLOBAL s_cState_BarOut_00424884 string
// GLOBAL s_cState_BarTap_00424844 string
// GLOBAL s_cState_BarWait_00424874 string
// GLOBAL s_cState_Change_00424c4c string
// GLOBAL s_cState_Disable_00424c30 string
// GLOBAL s_cState_Hide_00424c18 string
// GLOBAL s_cState_OffIdle_00424824 string
// GLOBAL s_cState_OnIdle_00424bf8 string
// GLOBAL s_cState_OnPush_00424c08 string
// GLOBAL s_cState_Open_00424c40 string
// GLOBAL s_cState_PushOn_00424894 string
// GLOBAL s_cState_Set_00424c24 string
// GLOBAL s_cState_Slot_00424868 string

int func_00423F68(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  puVar2 = func_001B6E04(param_1);
  *puVar2 = DAT_00424338;
  puVar2 = func_0010A794(puVar2 + 0xe);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_4;
  iVar3 = func_0031BFA0(puVar2 + 10);
  iVar12 = iVar3 + -0x60;
  *(undefined2 *)(iVar3 + 0x50) = 0;
  uVar5 = DAT_0042433c;
  *(undefined2 *)(iVar3 + 0x52) = 0xffff;
  *(undefined4 *)(iVar3 + 0x54) = uVar5;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined2 *)(iVar3 + 0x5c) = 0;
  *(undefined2 *)(iVar3 + 0x5e) = 0xffff;
  *(undefined4 *)(iVar3 + 0x60) = uVar5;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined2 *)(iVar3 + 0x68) = 0;
  *(undefined2 *)(iVar3 + 0x6a) = 0xffff;
  *(undefined4 *)(iVar3 + 0x6c) = uVar5;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(undefined2 *)(iVar3 + 0x74) = 0;
  *(undefined2 *)(iVar3 + 0x76) = 0xffff;
  *(undefined4 *)(iVar3 + 0x78) = uVar5;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(undefined1 *)(iVar3 + 0x84) = 0xff;
  *(undefined4 *)(iVar3 + 0x88) = uVar5;
  *(undefined4 *)(iVar3 + 0x8c) = uVar5;
  *(undefined4 *)(iVar3 + 0x90) = uVar5;
  *(undefined2 *)(iVar3 + 0x94) = 0;
  *(char *)(iVar3 + 0x96) = (char)param_5;
  *(undefined1 *)(iVar3 + 0x97) = 1;
  puVar2 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar2 == (undefined4 *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = func_00168434(puVar2);
  }
  func_00168100(piVar13,param_2,param_3);
  *(int **)(iVar3 + -0x44) = piVar13;
  *(uint *)(iVar3 + -0x48) = *(uint *)(iVar3 + -0x48) | 0x10;
  func_0016773C((int)piVar13,0x12);
  iVar15 = DAT_00424354;
  local_3c = s_TouchOnOffDefault_00424340;
  local_40 = DAT_00424354;
  func_00166C20(piVar13,0,&local_40,0);
  local_3c = s_TouchDecideDefault_00424358;
  local_40 = iVar15;
  func_00166C20(piVar13,1,&local_40,0);
  local_38 = iVar15;
  if (param_5 == 0) {
    local_34 = s_TouchOnOffScrollX_00424c5c;
    func_00166C20(piVar13,2,&local_38,0);
    local_34 = s_TouchOnOffScrollBtnX_00424c70;
    local_38 = iVar15;
    local_2c = (char *)DAT_00424c88;
    local_30 = iVar15;
    (**(code **)(iVar15 + 8))(&local_30);
    iVar4 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_2c);
    func_00166C20(piVar13,3,&local_38,iVar4);
    local_2c = s_TouchOnOffScrollBtnX_00424c70;
    local_30 = iVar15;
    local_34 = DAT_00424c8c;
    local_38 = iVar15;
    (**(code **)(iVar15 + 8))(&local_38);
    iVar4 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
    func_00166C20(piVar13,4,&local_30,iVar4);
    local_2c = s_TouchDecideScrollX_00424c90;
    local_30 = iVar15;
    func_00166C20(piVar13,5,&local_30,0);
  }
  else {
    local_34 = s_TouchOnOffScrollY_0042436c;
    func_00166C20(piVar13,2,&local_38,0);
    local_34 = s_TouchOnOffScrollBtnY_00424380;
    local_38 = iVar15;
    local_2c = s_G_ScrollBtnT_00_00424398;
    local_30 = iVar15;
    (**(code **)(iVar15 + 8))(&local_30);
    iVar4 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_2c);
    func_00166C20(piVar13,3,&local_38,iVar4);
    local_2c = s_TouchOnOffScrollBtnY_00424380;
    local_30 = iVar15;
    local_34 = s_G_ScrollBtnB_00_004243a8;
    local_38 = iVar15;
    (**(code **)(iVar15 + 8))(&local_38);
    iVar4 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
    func_00166C20(piVar13,4,&local_30,iVar4);
    local_2c = s_TouchDecideScrollY_004243b8;
    local_30 = iVar15;
    func_00166C20(piVar13,5,&local_30,0);
  }
  local_3c = s_Select_004243cc;
  local_40 = iVar15;
  func_00166C20(piVar13,6,&local_40,0);
  local_3c = s_SelectEmpty_004243d4;
  local_40 = iVar15;
  func_00166C20(piVar13,7,&local_40,0);
  local_3c = s_Default_004243e0;
  local_40 = iVar15;
  func_00166C20(piVar13,8,&local_40,0);
  local_3c = s_Disable_004243e8;
  local_40 = iVar15;
  func_00166C20(piVar13,9,&local_40,0);
  local_3c = s_Normal_004243f0;
  local_40 = iVar15;
  func_00166C20(piVar13,10,&local_40,0);
  local_3c = s_ShortCut_004243f8;
  local_40 = iVar15;
  func_00166C20(piVar13,0xb,&local_40,0);
  local_3c = s_OpenNormal_00424404;
  local_40 = iVar15;
  func_00166C20(piVar13,0xc,&local_40,0);
  local_3c = s_OpenShortCut_00424410;
  local_40 = iVar15;
  func_00166C20(piVar13,0xd,&local_40,0);
  local_3c = s_ChangeShortCut_00424420;
  local_40 = iVar15;
  func_00166C20(piVar13,0xe,&local_40,0);
  local_3c = s_InIcon_00424430;
  local_40 = iVar15;
  func_00166C20(piVar13,0xf,&local_40,0);
  local_3c = &DAT_00424438;
  local_40 = iVar15;
  func_00166C20(piVar13,0x10,&local_40,0);
  local_3c = s_OutIcon_0042443c;
  local_40 = iVar15;
  func_00166C20(piVar13,0x11,&local_40,0);
  *(int **)(iVar3 + 0x70) = piVar13;
  *(undefined2 *)(iVar3 + 0x6a) = 3;
  *(undefined2 *)(iVar3 + 0x68) = 0;
  *(int **)(iVar3 + 0x7c) = piVar13;
  *(undefined2 *)(iVar3 + 0x76) = 4;
  *(undefined2 *)(iVar3 + 0x74) = 0;
  local_3c = s_L_Item_00_00424444;
  local_40 = iVar15;
  func_0031B220(iVar3,piVar13,&local_40);
  func_0031B348(iVar3,0);
  local_3c = s_N_BtnAll_00_0042480c;
  local_40 = iVar15;
  uVar5 = func_005229AC(piVar13,&local_40);
  *(undefined4 *)(iVar3 + 0x80) = uVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = func_002C0294(puVar6);
  }
  *(undefined4 **)(iVar3 + -0x4c) = puVar2;
  func_002C00D4(puVar2,iVar12,*(int **)(iVar3 + -0x44));
  *(int *)(iVar3 + -0x14) = iVar12;
  *(undefined1 *)(iVar3 + -0x22) = 0xf;
  iVar7 = func_0010BA78(0xf0);
  iVar4 = DAT_00424818;
  *(int *)(iVar3 + -0x10) = iVar7;
  *(uint *)(iVar3 + -0xc) = iVar7 + (uint)*(byte *)(iVar3 + -0x22) * 8;
  iVar8 = 0xf;
  puVar2 = (undefined4 *)(iVar7 + -8);
  do {
    uVar5 = DAT_0042481c[0xfb];
    iVar8 = iVar8 + -1;
    puVar2[2] = DAT_0042481c[0xfa];
    puVar2[3] = uVar5;
    uVar5 = *(undefined4 *)(iVar4 + 0xec);
    puVar2[4] = *(undefined4 *)(iVar4 + 0xe8);
    puVar2[5] = uVar5;
    puVar2 = puVar2 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)(iVar3 + -0x22);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar2 = DAT_0042481c;
  *(undefined4 **)(iVar3 + -8) = puVar6;
  if (uVar14 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar5;
      puVar9 = puVar6;
    }
    for (iVar4 = (int)uVar14 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar5 = puVar2[5];
      puVar9[2] = puVar2[4];
      puVar9[3] = uVar5;
      uVar5 = puVar2[5];
      puVar9[4] = puVar2[4];
      puVar9[5] = uVar5;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x224,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xf;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_00424820,0x24,0xf);
  }
  if (iVar4 != 0) {
    *(int *)(iVar3 + -0x1c) = iVar4;
    *(undefined4 *)(iVar3 + -0x20) = 0xf;
  }
  local_3c = s_cState_OffIdle_00424824;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,0,&local_40);
  puVar6 = *(undefined4 **)(iVar3 + -0x10);
  uVar10 = puVar2[1];
  uVar5 = puVar2[2];
  uVar11 = puVar2[3];
  uVar18 = puVar2[4];
  uVar16 = puVar2[5];
  *puVar6 = *puVar2;
  puVar6[1] = uVar10;
  puVar6 = *(undefined4 **)(iVar3 + -0xc);
  *puVar6 = uVar5;
  puVar6[1] = uVar11;
  puVar6 = *(undefined4 **)(iVar3 + -8);
  *puVar6 = uVar18;
  puVar6[1] = uVar16;
  local_3c = s_cState_BarIn_00424834;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,1,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar5 = puVar2[7];
  uVar10 = puVar2[8];
  uVar11 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 8) = uVar18;
  *(undefined4 *)(iVar4 + 0xc) = uVar16;
  local_3c = s_cState_BarTap_00424844;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,2,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar5 = puVar2[0xb];
  uVar11 = puVar2[0xc];
  uVar10 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar5;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x10) = uVar11;
  *(undefined4 *)(iVar4 + 0x14) = uVar10;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x10) = uVar18;
  *(undefined4 *)(iVar4 + 0x14) = uVar16;
  local_3c = s_cState_BarDecide_00424854;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,3,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar11 = puVar2[0xf];
  uVar5 = puVar2[0x10];
  uVar10 = puVar2[0x11];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar11;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x18) = uVar5;
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x18) = uVar18;
  *(undefined4 *)(iVar4 + 0x1c) = uVar16;
  local_3c = s_cState_Slot_00424868;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,4,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar10 = puVar2[0x13];
  uVar5 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x12];
  *(undefined4 *)(iVar4 + 0x24) = uVar10;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x20) = uVar5;
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x20) = uVar18;
  *(undefined4 *)(iVar4 + 0x24) = uVar16;
  local_3c = s_cState_BarWait_00424874;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,5,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar5 = puVar2[0x17];
  uVar10 = puVar2[0x18];
  uVar11 = puVar2[0x19];
  *(undefined4 *)(iVar4 + 0x28) = puVar2[0x16];
  *(undefined4 *)(iVar4 + 0x2c) = uVar5;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x28) = uVar10;
  *(undefined4 *)(iVar4 + 0x2c) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x28) = uVar18;
  *(undefined4 *)(iVar4 + 0x2c) = uVar16;
  local_3c = s_cState_BarOut_00424884;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,6,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar10 = puVar2[0x1b];
  uVar5 = puVar2[0x1c];
  uVar11 = puVar2[0x1d];
  *(undefined4 *)(iVar4 + 0x30) = puVar2[0x1a];
  *(undefined4 *)(iVar4 + 0x34) = uVar10;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x30) = uVar5;
  *(undefined4 *)(iVar4 + 0x34) = uVar11;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x30) = uVar18;
  *(undefined4 *)(iVar4 + 0x34) = uVar16;
  local_3c = s_cState_PushOn_00424894;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,7,&local_40);
  uVar5 = puVar2[0x20];
  uVar10 = puVar2[0x21];
  uVar11 = puVar2[0x1f];
  iVar4 = *(int *)(iVar3 + -0x10);
  *(undefined4 *)(iVar4 + 0x38) = puVar2[0x1e];
  *(undefined4 *)(iVar4 + 0x3c) = uVar11;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x38) = uVar5;
  *(undefined4 *)(iVar4 + 0x3c) = uVar10;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x38) = uVar18;
  *(undefined4 *)(iVar4 + 0x3c) = uVar16;
  local_3c = s_cState_OnIdle_00424bf8;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,8,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar5 = puVar2[0x25];
  uVar10 = puVar2[0x24];
  uVar11 = puVar2[0x23];
  *(undefined4 *)(iVar4 + 0x40) = puVar2[0x22];
  *(undefined4 *)(iVar4 + 0x44) = uVar11;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x40) = uVar10;
  *(undefined4 *)(iVar4 + 0x44) = uVar5;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x40) = uVar18;
  *(undefined4 *)(iVar4 + 0x44) = uVar16;
  local_3c = s_cState_OnPush_00424c08;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,9,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar10 = puVar2[0x27];
  uVar11 = puVar2[0x28];
  uVar5 = puVar2[0x29];
  *(undefined4 *)(iVar4 + 0x48) = puVar2[0x26];
  *(undefined4 *)(iVar4 + 0x4c) = uVar10;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x48) = uVar11;
  *(undefined4 *)(iVar4 + 0x4c) = uVar5;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x48) = uVar18;
  *(undefined4 *)(iVar4 + 0x4c) = uVar16;
  local_3c = s_cState_Hide_00424c18;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,10,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar10 = puVar2[0x2b];
  uVar16 = puVar2[0x2c];
  uVar5 = puVar2[0x2d];
  uVar11 = puVar2[0x2e];
  uVar18 = puVar2[0x2f];
  *(undefined4 *)(iVar4 + 0x50) = puVar2[0x2a];
  *(undefined4 *)(iVar4 + 0x54) = uVar10;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x50) = uVar16;
  *(undefined4 *)(iVar4 + 0x54) = uVar5;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x50) = uVar11;
  *(undefined4 *)(iVar4 + 0x54) = uVar18;
  local_3c = s_cState_Set_00424c24;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,0xb,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar16 = puVar2[0x31];
  uVar18 = puVar2[0x32];
  uVar5 = puVar2[0x34];
  uVar11 = puVar2[0x35];
  uVar10 = puVar2[0x33];
  *(undefined4 *)(iVar4 + 0x58) = puVar2[0x30];
  *(undefined4 *)(iVar4 + 0x5c) = uVar16;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x58) = uVar18;
  *(undefined4 *)(iVar4 + 0x5c) = uVar10;
  iVar4 = *(int *)(iVar3 + -8);
  *(undefined4 *)(iVar4 + 0x58) = uVar5;
  *(undefined4 *)(iVar4 + 0x5c) = uVar11;
  local_3c = s_cState_Disable_00424c30;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,0xc,&local_40);
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar5 = puVar2[0x39];
  uVar10 = puVar2[0x38];
  uVar11 = puVar2[0x37];
  uVar17 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar4 + 0x60) = puVar2[0x36];
  *(undefined4 *)(iVar4 + 100) = uVar11;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x60) = uVar10;
  *(undefined4 *)(iVar4 + 100) = uVar5;
  iVar4 = *(int *)(iVar3 + -8);
  *(int *)(iVar4 + 0x60) = (int)uVar17;
  *(int *)(iVar4 + 100) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Open_00424c40;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,0xd,&local_40);
  uVar5 = puVar2[0x3d];
  iVar4 = *(int *)(iVar3 + -0x10);
  uVar10 = puVar2[0x3b];
  uVar11 = puVar2[0x3c];
  *(undefined4 *)(iVar4 + 0x68) = puVar2[0x3a];
  *(undefined4 *)(iVar4 + 0x6c) = uVar10;
  iVar4 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar4 + 0x68) = uVar11;
  *(undefined4 *)(iVar4 + 0x6c) = uVar5;
  iVar4 = *(int *)(iVar3 + -8);
  *(int *)(iVar4 + 0x68) = (int)uVar17;
  *(int *)(iVar4 + 0x6c) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Change_00424c4c;
  local_40 = iVar15;
  func_0010BEC4(iVar3 + -0x28,0xe,&local_40);
  iVar15 = *(int *)(iVar3 + -0x10);
  uVar11 = DAT_0042481c[0x40];
  uVar5 = DAT_0042481c[0x3f];
  uVar10 = DAT_0042481c[0x41];
  *(undefined4 *)(iVar15 + 0x70) = DAT_0042481c[0x3e];
  *(undefined4 *)(iVar15 + 0x74) = uVar5;
  iVar15 = *(int *)(iVar3 + -0xc);
  *(undefined4 *)(iVar15 + 0x70) = uVar11;
  *(undefined4 *)(iVar15 + 0x74) = uVar10;
  iVar15 = *(int *)(iVar3 + -8);
  *(int *)(iVar15 + 0x70) = (int)uVar17;
  *(int *)(iVar15 + 0x74) = (int)((ulonglong)uVar17 >> 0x20);
  func_0066BFFC((undefined4 *)(iVar3 + -0x28),'\0');
  return iVar12;
}

