#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002B1FDC(int param_1,int param_2);
extern int func_002B1FF4(int param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FA890(int param_1);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00547724(int *param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0019e8d0;
extern uint *DAT_0019e8d4;
extern uint *DAT_0019e8d8;
extern int DAT_0019e8dc;
extern float DAT_0019e8e0;
extern undefined4 DAT_0019e8e4;
extern undefined4 DAT_0019e8e8;
extern undefined4 DAT_0019e8ec;
extern float DAT_0019e8f0;
extern undefined4 DAT_0019e8f4;
extern int DAT_0019e8f8;
extern undefined4 *DAT_0019e8fc;
extern float DAT_0019e900;
extern int DAT_0019e904;
extern undefined *DAT_0019e908;
extern int DAT_0019e90c;
extern int DAT_0019e91c;
extern undefined4 DAT_0019ebc8;
extern float DAT_0019ebcc;
extern char s_cState_AttackSt_0019e930[];
extern char s_cState_AttackWait_0019e950[];
extern char s_cState_Attack_0019e940[];
extern char s_cState_Chase_0019e920[];
extern char s_cState_Die_0019ebbc[];
extern char s_cState_GoHome_0019eb9c[];
extern char s_cState_Hovering_0019eb8c[];
extern char s_cState_Reaction_0019ebac[];
extern char s_cState_Wait_0019e910[];
extern char s_mouth_0019ebd0[];

// USA 0019E4D4 <- EU 0019E4D4 (Ghidra, non-matching)
// GLOBAL DAT_0019e8d0 int *
// GLOBAL DAT_0019e8d4 uint *
// GLOBAL DAT_0019e8d8 uint *
// GLOBAL DAT_0019e8dc int
// GLOBAL DAT_0019e8e0 float
// GLOBAL DAT_0019e8e4 undefined4
// GLOBAL DAT_0019e8e8 undefined4
// GLOBAL DAT_0019e8ec undefined4
// GLOBAL DAT_0019e8f0 float
// GLOBAL DAT_0019e8f4 undefined4
// GLOBAL DAT_0019e8f8 int
// GLOBAL DAT_0019e8fc undefined4 *
// GLOBAL DAT_0019e900 float
// GLOBAL DAT_0019e904 int
// GLOBAL DAT_0019e908 undefined *
// GLOBAL DAT_0019e90c int
// GLOBAL DAT_0019e91c int
// GLOBAL DAT_0019ebc8 undefined4
// GLOBAL DAT_0019ebcc float
// GLOBAL s_cState_AttackSt_0019e930 string
// GLOBAL s_cState_AttackWait_0019e950 string
// GLOBAL s_cState_Attack_0019e940 string
// GLOBAL s_cState_Chase_0019e920 string
// GLOBAL s_cState_Die_0019ebbc string
// GLOBAL s_cState_GoHome_0019eb9c string
// GLOBAL s_cState_Hovering_0019eb8c string
// GLOBAL s_cState_Reaction_0019ebac string
// GLOBAL s_cState_Wait_0019e910 string
// GLOBAL s_mouth_0019ebd0 string

undefined4 * func_0019E4D4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  iVar2 = func_00547724((int *)param_2);
  puVar9 = DAT_0019e8d4;
  if (iVar2 != *DAT_0019e8d0) {
    puVar9 = DAT_0019e8d8;
  }
  piVar3 = func_004FD464(param_1,param_2,puVar9);
  iVar2 = DAT_0019e8dc;
  *piVar3 = DAT_0019e8dc;
  piVar3[200] = iVar2 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  uVar16 = DAT_0019e8e8;
  uVar13 = DAT_0019e8e4;
  pfVar11 = (float *)(puVar4 + 0xc);
  puVar12 = puVar4 + -0x22f;
  *pfVar11 = DAT_0019e8e0;
  puVar4[0xd] = uVar13;
  uVar13 = DAT_0019e8ec;
  puVar4[0xf] = uVar16;
  puVar4[0x10] = uVar13;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0xffffffff;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  uVar10 = param_2[3];
  uVar14 = param_2[1];
  fVar15 = ALBW_AS_F32(param_2[2]) + DAT_0019e8f0;
  puVar4[-0x155] = uVar14;
  puVar4[-0x154] = ALBW_AS_U32(fVar15);
  puVar4[-0x153] = uVar10;
  puVar4[-0x13b] = uVar14;
  puVar4[-0x13a] = ALBW_AS_U32(fVar15);
  puVar4[-0x139] = uVar10;
  uVar13 = DAT_0019e8f4;
  puVar4[-0xf6] = DAT_0019e8f4;
  puVar4[-0xf5] = uVar13;
  puVar4[-0xf4] = uVar13;
  func_004FB344((int)puVar12,5);
  iVar2 = DAT_0019e8f8;
  uVar10 = 0;
  do {
    func_004FACA4((int)puVar12,uVar10,(int *)(iVar2 + uVar10 * 8));
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 5);
  func_004FB468((int)puVar12);
  func_004F5BD8((int)puVar12,(uint *)0x0,(int **)0x0,pfVar11);
  fVar15 = DAT_0019e900;
  puVar6 = DAT_0019e8fc;
  puVar4[-0x11c] = *DAT_0019e8fc;
  puVar4[-0x11b] = puVar6[1];
  puVar4[-0x11a] = puVar6[2];
  puVar4[-0x116] = *puVar6;
  puVar4[-0x115] = puVar6[1];
  puVar4[-0x114] = puVar6[2];
  puVar4[0xd] = ALBW_AS_U32(ALBW_AS_F32(param_2[2]) + fVar15);
  *(undefined1 *)((int)puVar4 + 6) = 9;
  puVar4[5] = puVar12;
  iVar5 = func_0010BA78(0x90);
  puVar4[6] = iVar5;
  iVar2 = DAT_0019e904;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 9;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar2 + 0xac);
    iVar8 = iVar8 + -1;
    puVar6[2] = *(undefined4 *)(iVar2 + 0xa8);
    puVar6[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar2 + 0xac);
    puVar6[4] = *(undefined4 *)(iVar2 + 0xa8);
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar2 + 0x1c);
      *puVar6 = *(undefined4 *)(iVar2 + 0x18);
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = *(undefined4 *)(iVar2 + 0x1c);
      puVar7[2] = *(undefined4 *)(iVar2 + 0x18);
      puVar7[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar2 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar2 + 0x18);
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 9;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_0019e908,0x24,9);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 9;
  }
  iVar5 = DAT_0019e90c;
  puVar4[-0x15a] = puVar4;
  iVar8 = DAT_0019e91c;
  *(undefined2 *)(iVar5 + (int)puVar12) = 9;
  local_34 = s_cState_Wait_0019e910;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar6 = (undefined4 *)puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x10);
  uVar16 = *(undefined4 *)(iVar2 + 0xc);
  uVar17 = *(undefined4 *)(iVar2 + 0x14);
  uVar20 = *(undefined8 *)(iVar2 + 0x18);
  *puVar6 = *(undefined4 *)(iVar2 + 8);
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar13;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar20;
  puVar6[1] = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Chase_0019e920;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar5 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar2 + 0x24);
  uVar17 = *(undefined4 *)(iVar2 + 0x28);
  uVar13 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar20;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_AttackSt_0019e930;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x34);
  uVar16 = *(undefined4 *)(iVar2 + 0x38);
  uVar17 = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar16;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar20;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Attack_0019e940;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar5 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar2 + 0x44);
  uVar13 = *(undefined4 *)(iVar2 + 0x48);
  uVar16 = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(iVar5 + 0x1c) = uVar17;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar13;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar20;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_AttackWait_0019e950;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x54);
  uVar16 = *(undefined4 *)(iVar2 + 0x58);
  uVar17 = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar16;
  *(undefined4 *)(iVar5 + 0x24) = uVar17;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar20;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Hovering_0019eb8c;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,5,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 100);
  uVar16 = *(undefined4 *)(iVar2 + 0x68);
  uVar17 = *(undefined4 *)(iVar2 + 0x6c);
  uVar18 = *(undefined4 *)(iVar2 + 0x70);
  uVar19 = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar16;
  *(undefined4 *)(iVar5 + 0x2c) = uVar17;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar18;
  *(undefined4 *)(iVar5 + 0x2c) = uVar19;
  local_34 = s_cState_GoHome_0019eb9c;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,6,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x7c);
  uVar16 = *(undefined4 *)(iVar2 + 0x80);
  uVar17 = *(undefined4 *)(iVar2 + 0x84);
  uVar20 = *(undefined8 *)(iVar2 + 0x18);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar16;
  *(undefined4 *)(iVar5 + 0x34) = uVar17;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x30) = (int)uVar20;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Reaction_0019ebac;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,7,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x8c);
  uVar16 = *(undefined4 *)(iVar2 + 0x90);
  uVar17 = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar16;
  *(undefined4 *)(iVar5 + 0x3c) = uVar17;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x38) = (int)uVar20;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Die_0019ebbc;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,8,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x9c);
  uVar16 = *(undefined4 *)(iVar2 + 0xa0);
  uVar17 = *(undefined4 *)(iVar2 + 0xa4);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(iVar5 + 0x44) = uVar13;
  iVar2 = puVar4[7];
  *(undefined4 *)(iVar2 + 0x40) = uVar16;
  *(undefined4 *)(iVar2 + 0x44) = uVar17;
  iVar2 = puVar4[8];
  *(int *)(iVar2 + 0x40) = (int)uVar20;
  *(int *)(iVar2 + 0x44) = (int)((ulonglong)uVar20 >> 0x20);
  func_0065A1EC(puVar4,0);
  func_004F87F8((int)puVar12,2);
  func_004FA890((int)puVar12);
  uVar13 = DAT_0019ebc8;
  puVar4[-0xce] = puVar4[-0xce] | 0x800;
  func_004FC218((int)puVar12,'\x03',-1,(ushort)uVar13);
  func_002B1FF4((int)puVar12,0);
  func_004FBA18((int)puVar12,3,0xff,0,-1,0,(ushort)uVar13,DAT_0019ebcc,DAT_0019ebcc);
  func_002B1FDC((int)puVar12,0);
  *(undefined1 *)((int)puVar4 + -0x13f) = 4;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  local_34 = s_mouth_0019ebd0;
  local_38 = iVar8;
  uVar10 = func_00564A78(puVar4[-300],&local_38);
  if (uVar10 != 0xffff) {
    puVar4[0x11] = uVar10;
  }
  return puVar12;
}

