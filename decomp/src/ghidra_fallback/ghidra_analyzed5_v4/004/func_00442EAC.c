#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00441934(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00443250;
extern int DAT_00443254;
extern undefined1 *DAT_00443258;
extern undefined4 DAT_0044325c;
extern undefined DAT_00443260;
extern int DAT_00443264;
extern undefined DAT_00443270;
extern undefined4 *DAT_0044370c;
extern undefined *DAT_00443710;
extern int *DAT_004437b4;
extern int *DAT_004437b8;
extern char s_G_BG_00_00443268[];
extern char s_G_CautionWindow_00_00443280[];
extern char s_G_Pause_00_00443274[];
extern char s_InBtnLR_004432a8[];
extern char s_InBtnTB_00443294[];
extern char s_L_BtnLB_00_004432bc[];
extern char s_L_BtnRT_00_004432c8[];
extern char s_OutBtnLR_004432b0[];
extern char s_OutBtnTB_0044329c[];
extern char s_cState_BtnInEnd_00443760[];
extern char s_cState_BtnIn_00443714[];
extern char s_cState_BtnOutCancel_00443794[];
extern char s_cState_BtnOutEnd_0044374c[];
extern char s_cState_End_004437a8[];
extern char s_cState_SelectCancel_00443770[];
extern char s_cState_SelectCnt_00443724[];
extern char s_cState_SelectEnd_00443738[];
extern char s_cState_SelectOK_00443784[];

// USA 00442EAC <- EU 00442E8C (Ghidra, non-matching)
// GLOBAL DAT_00443250 int
// GLOBAL DAT_00443254 int
// GLOBAL DAT_00443258 undefined1 *
// GLOBAL DAT_0044325c undefined4
// GLOBAL DAT_00443260 undefined
// GLOBAL DAT_00443264 int
// GLOBAL DAT_00443270 undefined
// GLOBAL DAT_0044370c undefined4 *
// GLOBAL DAT_00443710 undefined *
// GLOBAL DAT_004437b4 int *
// GLOBAL DAT_004437b8 int *
// GLOBAL s_G_BG_00_00443268 string
// GLOBAL s_G_CautionWindow_00_00443280 string
// GLOBAL s_G_Pause_00_00443274 string
// GLOBAL s_InBtnLR_004432a8 string
// GLOBAL s_InBtnTB_00443294 string
// GLOBAL s_L_BtnLB_00_004432bc string
// GLOBAL s_L_BtnRT_00_004432c8 string
// GLOBAL s_OutBtnLR_004432b0 string
// GLOBAL s_OutBtnTB_0044329c string
// GLOBAL s_cState_BtnInEnd_00443760 string
// GLOBAL s_cState_BtnIn_00443714 string
// GLOBAL s_cState_BtnOutCancel_00443794 string
// GLOBAL s_cState_BtnOutEnd_0044374c string
// GLOBAL s_cState_End_004437a8 string
// GLOBAL s_cState_SelectCancel_00443770 string
// GLOBAL s_cState_SelectCnt_00443724 string
// GLOBAL s_cState_SelectEnd_00443738 string
// GLOBAL s_cState_SelectOK_00443784 string

int * func_00442EAC(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004B9A10(param_1,3);
  iVar7 = DAT_00443254;
  iVar12 = DAT_00443250;
  piVar3[0xe] = DAT_00443250 + 0x54;
  *piVar3 = iVar12;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar7;
  piVar3[0x1f] = 0;
  *(undefined2 *)(piVar3 + 0x20) = 0;
  *(undefined2 *)((int)piVar3 + 0x82) = 0xffff;
  piVar3[0x21] = iVar7;
  piVar3[0x22] = 0;
  *(undefined2 *)(piVar3 + 0x23) = 0;
  *(undefined2 *)((int)piVar3 + 0x8e) = 0xffff;
  piVar3[0x24] = iVar7;
  piVar3[0x25] = 0;
  puVar4 = func_0010A794(piVar3 + 0x26);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  piVar3 = puVar4 + -0x26;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  puVar2 = DAT_00443258;
  puVar4[0xc] = puVar6;
  uVar15 = DAT_0044325c;
  *puVar2 = 1;
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar15,0);
  piVar13 = (int *)puVar4[-0x1f];
  func_0016773C((int)piVar13,10);
  iVar12 = DAT_00443264;
  local_34 = &DAT_00443260;
  local_38 = DAT_00443264;
  local_3c = s_G_BG_00_00443268;
  local_40 = DAT_00443264;
  (**(code **)(DAT_00443264 + 8))(&local_40);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_3c);
  func_00166C20(piVar13,0,&local_38,iVar7);
  local_3c = &DAT_00443270;
  local_40 = iVar12;
  local_34 = s_G_BG_00_00443268;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
  func_00166C20(piVar13,1,&local_40,iVar7);
  local_3c = &DAT_00443260;
  local_40 = iVar12;
  local_34 = s_G_Pause_00_00443274;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
  func_00166C20(piVar13,2,&local_40,iVar7);
  local_3c = &DAT_00443270;
  local_40 = iVar12;
  local_34 = s_G_Pause_00_00443274;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
  func_00166C20(piVar13,3,&local_40,iVar7);
  local_3c = &DAT_00443260;
  local_40 = iVar12;
  local_34 = s_G_CautionWindow_00_00443280;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
  func_00166C20(piVar13,4,&local_40,iVar7);
  local_3c = &DAT_00443270;
  local_40 = iVar12;
  local_34 = s_G_CautionWindow_00_00443280;
  local_38 = iVar12;
  (**(code **)(iVar12 + 8))(&local_38);
  iVar7 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_34);
  func_00166C20(piVar13,5,&local_40,iVar7);
  local_3c = s_InBtnTB_00443294;
  local_40 = iVar12;
  func_00166C20(piVar13,6,&local_40,0);
  local_3c = s_OutBtnTB_0044329c;
  local_40 = iVar12;
  func_00166C20(piVar13,7,&local_40,0);
  local_3c = s_InBtnLR_004432a8;
  local_40 = iVar12;
  func_00166C20(piVar13,8,&local_40,0);
  local_3c = s_OutBtnLR_004432b0;
  local_40 = iVar12;
  func_00166C20(piVar13,9,&local_40,0);
  puVar4[-0x1c] = piVar13;
  *(undefined2 *)((int)puVar4 + -0x76) = 0;
  *(undefined2 *)(puVar4 + -0x1e) = 0;
  puVar4[-0x19] = piVar13;
  *(undefined2 *)((int)puVar4 + -0x6a) = 1;
  *(undefined2 *)(puVar4 + -0x1b) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x4c);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_3c = s_L_BtnLB_00_004432bc;
    local_40 = iVar12;
    puVar6 = func_00441934(puVar5,piVar13,&local_40);
  }
  puVar4[9] = puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x4c);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_3c = s_L_BtnRT_00_004432c8;
    local_40 = iVar12;
    puVar6 = func_00441934(puVar5,piVar13,&local_40);
  }
  puVar4[10] = puVar6;
  *(undefined1 *)((int)puVar4 + -0x89) = 0x11;
  puVar4[-0x20] = puVar4[-0x20] | 0x40;
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 9;
  iVar7 = func_0010BA78(0x90);
  puVar6 = DAT_0044370c;
  puVar4[6] = iVar7;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 9;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar6[0x27];
    iVar11 = iVar11 + -1;
    puVar5[2] = puVar6[0x26];
    puVar5[3] = uVar15;
    uVar15 = puVar6[0x27];
    puVar5[4] = puVar6[0x26];
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar5;
  if (uVar14 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar15;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar15;
      uVar15 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 9;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_00443710,0x24,9);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 9;
  }
  local_3c = s_cState_BtnIn_00443714;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,0,&local_40);
  puVar5 = (undefined4 *)puVar4[6];
  uVar15 = puVar6[2];
  uVar19 = puVar6[4];
  uVar17 = puVar6[3];
  uVar18 = puVar6[5];
  uVar16 = puVar6[1];
  *puVar5 = *puVar6;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar15;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar19;
  puVar5[1] = uVar18;
  local_3c = s_cState_SelectCnt_00443724;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,1,&local_40);
  iVar7 = puVar4[6];
  uVar17 = puVar6[7];
  uVar15 = puVar6[8];
  uVar16 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar19;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  local_3c = s_cState_SelectEnd_00443738;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,2,&local_40);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0xb];
  uVar16 = puVar6[0xc];
  uVar17 = puVar6[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar16;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar19;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  local_3c = s_cState_BtnOutEnd_0044374c;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,3,&local_40);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0xf];
  uVar16 = puVar6[0x10];
  uVar17 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar16;
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar19;
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  local_3c = s_cState_BtnInEnd_00443760;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,4,&local_40);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0x13];
  uVar16 = puVar6[0x14];
  uVar17 = puVar6[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar16;
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar19;
  *(undefined4 *)(iVar7 + 0x24) = uVar18;
  local_3c = s_cState_SelectCancel_00443770;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,5,&local_40);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0x17];
  uVar16 = puVar6[0x18];
  uVar17 = puVar6[0x19];
  *(undefined4 *)(iVar7 + 0x28) = puVar6[0x16];
  *(undefined4 *)(iVar7 + 0x2c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar16;
  *(undefined4 *)(iVar7 + 0x2c) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x28) = uVar19;
  *(undefined4 *)(iVar7 + 0x2c) = uVar18;
  local_3c = s_cState_SelectOK_00443784;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,6,&local_40);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0x1b];
  uVar17 = puVar6[0x1c];
  uVar16 = puVar6[0x1d];
  *(undefined4 *)(iVar7 + 0x30) = puVar6[0x1a];
  *(undefined4 *)(iVar7 + 0x34) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar17;
  *(undefined4 *)(iVar7 + 0x34) = uVar16;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x30) = uVar19;
  *(undefined4 *)(iVar7 + 0x34) = uVar18;
  local_3c = s_cState_BtnOutCancel_00443794;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,7,&local_40);
  iVar7 = puVar4[6];
  uVar16 = puVar6[0x1f];
  uVar17 = puVar6[0x20];
  uVar15 = puVar6[0x21];
  *(undefined4 *)(iVar7 + 0x38) = puVar6[0x1e];
  *(undefined4 *)(iVar7 + 0x3c) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar17;
  *(undefined4 *)(iVar7 + 0x3c) = uVar15;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x38) = uVar19;
  *(undefined4 *)(iVar7 + 0x3c) = uVar18;
  local_3c = s_cState_End_004437a8;
  local_40 = iVar12;
  func_0010BEC4((int)puVar4,8,&local_40);
  iVar12 = puVar4[6];
  uVar16 = puVar6[0x23];
  uVar15 = puVar6[0x24];
  uVar17 = puVar6[0x25];
  *(undefined4 *)(iVar12 + 0x40) = puVar6[0x22];
  *(undefined4 *)(iVar12 + 0x44) = uVar16;
  iVar12 = puVar4[7];
  *(undefined4 *)(iVar12 + 0x40) = uVar15;
  *(undefined4 *)(iVar12 + 0x44) = uVar17;
  piVar13 = DAT_004437b4;
  iVar12 = puVar4[8];
  *(undefined4 *)(iVar12 + 0x40) = uVar19;
  *(undefined4 *)(iVar12 + 0x44) = uVar18;
  piVar9 = (int *)func_005229AC((int *)puVar4[-0x1f],piVar13);
  piVar13 = DAT_004437b8;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (piVar10 == piVar13) goto LAB_004436dc;
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_004436dc:
  puVar4[0xb] = piVar9;
  if (piVar9 != (int *)0x0) {
    puVar6 = (undefined4 *)puVar4[0xc];
    *puVar6 = piVar9 + 0x45;
    piVar9[0x4a] = (int)puVar6;
  }
  *puVar2 = 0;
  return piVar3;
}

