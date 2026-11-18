#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_00425D24(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00428AB4(int *param_1,undefined1 param_2);
extern int func_00441330(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern int func_00487AFC(int param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B948C(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004885cc;
extern undefined4 *DAT_004885dc;
extern int DAT_004885e0;
extern uint DAT_004885e4;
extern undefined DAT_004885e8;
extern undefined DAT_004885ec;
extern undefined DAT_0048861c;
extern int DAT_00488648;
extern undefined4 *DAT_00488a28;
extern undefined *DAT_00488a2c;
extern char s_Action_004885f0[];
extern char s_Color_00488640[];
extern char s_InOutBtn2_004885f8[];
extern char s_InOutBtn3_00488604[];
extern char s_InOutBtn4_00488610[];
extern char s_InSaveIcon_00488624[];
extern char s_L_ArrowIcon_00_004885bc[];
extern char s_L_Btn__02d_0048864c[];
extern char s_LoopSaveIcon_00488630[];
extern char s_N_Window_00_00488a90[];
extern char s_T_3lines_00_004885d0[];
extern char s_W_Name_00_00488a1c[];
extern char s_cState_Branch_00488a70[];
extern char s_cState_BtnIn_00488a50[];
extern char s_cState_BtnOut_00488a80[];
extern char s_cState_BtnWait_00488a60[];
extern char s_cState_Invalid_00488a30[];
extern char s_cState_WriteMsg_00488a40[];
extern char s_cf_0048864c[];

// USA 00488234 <- EU 0048820C (Ghidra, non-matching)
// GLOBAL DAT_004885cc int
// GLOBAL DAT_004885dc undefined4 *
// GLOBAL DAT_004885e0 int
// GLOBAL DAT_004885e4 uint
// GLOBAL DAT_004885e8 undefined
// GLOBAL DAT_004885ec undefined
// GLOBAL DAT_0048861c undefined
// GLOBAL DAT_00488648 int
// GLOBAL DAT_00488a28 undefined4 *
// GLOBAL DAT_00488a2c undefined *
// GLOBAL s_Action_004885f0 string
// GLOBAL s_Color_00488640 string
// GLOBAL s_InOutBtn2_004885f8 string
// GLOBAL s_InOutBtn3_00488604 string
// GLOBAL s_InOutBtn4_00488610 string
// GLOBAL s_InSaveIcon_00488624 string
// GLOBAL s_L_ArrowIcon_00_004885bc string
// GLOBAL s_cf_0048864c string
// GLOBAL s_LoopSaveIcon_00488630 string
// GLOBAL s_N_Window_00_00488a90 string
// GLOBAL s_T_3lines_00_004885d0 string
// GLOBAL s_W_Name_00_00488a1c string
// GLOBAL s_cState_Branch_00488a70 string
// GLOBAL s_cState_BtnIn_00488a50 string
// GLOBAL s_cState_BtnOut_00488a80 string
// GLOBAL s_cState_BtnWait_00488a60 string
// GLOBAL s_cState_Invalid_00488a30 string
// GLOBAL s_cState_WriteMsg_00488a40 string

int func_00488234(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_80 (*(int *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(int *)(albw_frame + 0x18))
  #define local_74 (*(char * *)(albw_frame + 0x1c))
  #define local_68 (*(int *)(albw_frame + 0x28))
  #define local_64 (*(char * *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c ((char *)(albw_frame + 0x34))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0x43))
  #define local_48 (*(int *)(albw_frame + 0x48))
  #define local_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_40 (*(int *)(albw_frame + 0x50))
  #define local_3c (*(char * *)(albw_frame + 0x54))
  iVar8 = DAT_004885cc;
  local_7c = s_L_ArrowIcon_00_004885bc;
  local_3c = s_T_3lines_00_004885d0;
  local_80 = DAT_004885cc;
  local_40 = DAT_004885cc;
  if (param_2 < 10) {
    local_44 = DAT_004885dc[param_2];
  }
  else {
    local_44 = *DAT_004885dc;
  }
  local_48 = DAT_004885cc;
  piVar2 = func_00441330(param_1,&local_48,&local_40,&local_80);
  iVar6 = DAT_004885e0;
  *piVar2 = DAT_004885e0;
  piVar2[0xe] = iVar6 + 0xac;
  puVar3 = func_0010A794(piVar2 + 0x39);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  uVar14 = DAT_004885e4;
  uVar16 = (ulonglong)DAT_004885e4;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar14;
  puVar13 = puVar3 + -0x39;
  puVar3[0xb] = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0xffff;
  puVar3[0xd] = uVar14;
  puVar3[0xe] = 0;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  *(undefined2 *)((int)puVar3 + 0x3e) = 0xffff;
  puVar3[0x10] = uVar14;
  puVar3[0x11] = 0;
  *(undefined2 *)(puVar3 + 0x12) = 0;
  *(undefined2 *)((int)puVar3 + 0x4a) = 0xffff;
  puVar3[0x13] = uVar14;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = uVar14;
  piVar2 = (int *)puVar3[-0x32];
  if (param_2 == 9) {
    func_0016773C((int)piVar2,9);
  }
  else if (param_2 == 4) {
    func_0016773C((int)piVar2,8);
  }
  else {
    func_0016773C((int)piVar2,7);
  }
  local_7c = &DAT_004885e8;
  local_80 = iVar8;
  func_00166C20(piVar2,0,&local_80,0);
  local_7c = &DAT_004885ec;
  local_80 = iVar8;
  func_00166C20(piVar2,1,&local_80,0);
  local_7c = s_Action_004885f0;
  local_80 = iVar8;
  func_00166C20(piVar2,2,&local_80,0);
  local_7c = s_InOutBtn2_004885f8;
  local_80 = iVar8;
  func_00166C20(piVar2,3,&local_80,0);
  local_7c = s_InOutBtn3_00488604;
  local_80 = iVar8;
  func_00166C20(piVar2,4,&local_80,0);
  local_7c = s_InOutBtn4_00488610;
  local_80 = iVar8;
  func_00166C20(piVar2,5,&local_80,0);
  local_7c = &DAT_0048861c;
  uVar11 = 0;
  local_80 = iVar8;
  func_00166C20(piVar2,6,&local_80,0);
  if (param_2 == 9) {
    local_74 = s_InSaveIcon_00488624;
    local_78 = iVar8;
    func_00166C20(piVar2,7,&local_78,0);
    local_74 = s_LoopSaveIcon_00488630;
    uVar14 = 8;
LAB_00488490:
    local_78 = iVar8;
    uVar11 = 0;
    func_00166C20(piVar2,uVar14,&local_78,0);
  }
  else if (param_2 == 4) {
    local_74 = s_Color_00488640;
    uVar14 = 7;
    goto LAB_00488490;
  }
  puVar3[-0x2f] = piVar2;
  *(undefined2 *)((int)puVar3 + -0xc2) = 0;
  *(undefined2 *)(puVar3 + -0x31) = 0;
  puVar3[-0x2c] = piVar2;
  *(undefined2 *)((int)puVar3 + -0xb6) = 1;
  *(undefined2 *)(puVar3 + -0x2e) = 0;
  puVar3[0xe] = piVar2;
  *(undefined2 *)((int)puVar3 + 0x32) = 3;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  puVar3[0x11] = piVar2;
  *(undefined2 *)((int)puVar3 + 0x3e) = 4;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  puVar3[0x14] = piVar2;
  *(undefined2 *)((int)puVar3 + 0x4a) = 5;
  *(undefined2 *)(puVar3 + 0x12) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  puVar3[-0x34] = puVar5;
  func_002C00D4(puVar5,puVar13,piVar2);
  uVar14 = 0;
  *(undefined4 *)(puVar3[-0x34] + 0xc) = 0x1b;
  *(ushort *)(puVar3[-0x34] + 0x16) = *(ushort *)(puVar3[-0x34] + 0x16) | 1;
  local_64 = local_5c;
  uStack_60 = 0x10;
  uStack_4d = 0;
  local_5c[0] = '\0';
  local_68 = DAT_00488648;
  do {
    func_004994B0((int)&local_68,s_L_Btn__02d_0048864c,uVar14,uVar11);
    local_8c = (char *)func_0010BAB4(0x7c);
    puVar5 = (undefined4 *)0x0;
    if (local_8c != (char *)0x0) {
      (**(code **)(local_68 + 8))(&local_68);
      local_78 = iVar8;
      local_74 = local_64;
      puVar5 = func_00425D24((undefined4 *)local_8c,(int *)puVar3[-0x32],&local_78);
    }
    puVar3[uVar14 + 0x16] = puVar5;
    func_004B948C((int)puVar13,(int)puVar5);
    uVar15 = (undefined4)uVar16;
    iVar6 = uVar14 + 0x16;
    uVar14 = uVar14 + 1;
    *(undefined1 *)(puVar3[iVar6] + 0xe) = 1;
  } while (uVar14 != 4);
  *(undefined2 *)(puVar3 + -1) = 0;
  if (param_2 == 9) {
    if (puVar3[0x1a] != 0) goto LAB_004886d0;
  }
  else {
    local_8c = s_W_Name_00_00488a1c;
    local_90 = iVar8;
    iVar6 = func_005229AC((int *)puVar3[-0x32],&local_90);
    puVar3[0x1a] = iVar6;
    if (iVar6 != 0) {
      puVar3[0x1b] = *(undefined4 *)(iVar6 + 0x3c);
LAB_004886d0:
      func_00428AB4(puVar3 + -0x1c,1);
      goto LAB_004886f4;
    }
  }
  func_00428AB4(puVar3 + -0x1c,0);
LAB_004886f4:
  puVar3[5] = puVar13;
  *(undefined1 *)((int)puVar3 + 6) = 6;
  iVar6 = func_0010BA78(0x60);
  puVar5 = DAT_00488a28;
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 6;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = puVar5[0x1b];
    iVar9 = iVar9 + -1;
    puVar4[2] = puVar5[0x1a];
    puVar4[3] = uVar11;
    uVar11 = puVar5[0x1b];
    puVar4[4] = puVar5[0x1a];
    puVar4[5] = uVar11;
    puVar4 = puVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar4;
  if (uVar14 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar5[5];
      *puVar4 = puVar5[4];
      puVar4[1] = uVar11;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = puVar5[5];
      puVar7[2] = puVar5[4];
      puVar7[3] = uVar11;
      uVar11 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar11;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_00488a2c,0x24,6);
  }
  if (iVar6 != 0) {
    puVar3[2] = 6;
    puVar3[3] = iVar6;
  }
  local_7c = s_cState_Invalid_00488a30;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,0,&local_80);
  puVar4 = (undefined4 *)puVar3[6];
  uVar12 = puVar5[1];
  uVar11 = puVar5[2];
  uVar10 = puVar5[3];
  uVar17 = puVar5[4];
  uVar18 = puVar5[5];
  *puVar4 = *puVar5;
  puVar4[1] = uVar12;
  puVar4 = (undefined4 *)puVar3[7];
  *puVar4 = uVar11;
  puVar4[1] = uVar10;
  puVar4 = (undefined4 *)puVar3[8];
  *puVar4 = uVar17;
  puVar4[1] = uVar18;
  local_7c = s_cState_WriteMsg_00488a40;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,1,&local_80);
  iVar6 = puVar3[6];
  uVar11 = puVar5[8];
  uVar12 = puVar5[9];
  uVar10 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = puVar5[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar17;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  local_7c = s_cState_BtnIn_00488a50;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,2,&local_80);
  iVar6 = puVar3[6];
  uVar11 = puVar5[0xb];
  uVar10 = puVar5[0xc];
  uVar12 = puVar5[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar5[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar10;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar17;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  local_7c = s_cState_BtnWait_00488a60;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,3,&local_80);
  iVar6 = puVar3[6];
  uVar10 = puVar5[0xf];
  uVar11 = puVar5[0x10];
  uVar12 = puVar5[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar5[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar17;
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  local_7c = s_cState_Branch_00488a70;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,4,&local_80);
  iVar6 = puVar3[6];
  uVar11 = puVar5[0x13];
  uVar10 = puVar5[0x14];
  uVar12 = puVar5[0x15];
  *(undefined4 *)(iVar6 + 0x20) = puVar5[0x12];
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar10;
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x20) = uVar17;
  *(undefined4 *)(iVar6 + 0x24) = uVar18;
  local_7c = s_cState_BtnOut_00488a80;
  local_80 = iVar8;
  func_0010BEC4((int)puVar3,5,&local_80);
  uVar10 = puVar5[0x18];
  uVar11 = puVar5[0x19];
  iVar6 = puVar3[6];
  uVar12 = puVar5[0x17];
  *(undefined4 *)(iVar6 + 0x28) = puVar5[0x16];
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar10;
  *(undefined4 *)(iVar6 + 0x2c) = uVar11;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x28) = uVar17;
  *(undefined4 *)(iVar6 + 0x2c) = uVar18;
  local_7c = s_N_Window_00_00488a90;
  local_80 = iVar8;
  iVar8 = func_005229AC((int *)puVar3[-0x32],&local_80);
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0x20) = uVar15;
    *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
  }
  func_00487AFC((int)puVar13,(uint)*(byte *)(puVar3 + -0x17));
  return (int)puVar13;
}

