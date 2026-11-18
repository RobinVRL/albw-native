#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001566B4(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FA890(int param_1);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00520FC0(void);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00156dc8;
extern int DAT_00156dcc;
extern undefined4 DAT_00156dd0;
extern undefined4 DAT_00156dd4;
extern uint DAT_00156dd8;
extern uint DAT_00156ddc;
extern undefined4 *DAT_00156de0;
extern int DAT_00156de4;
extern float DAT_00156de8;
extern float DAT_00156dec;
extern int DAT_00156df0;
extern float DAT_00156df4;
extern int DAT_00156df8;
extern undefined *DAT_00156dfc;
extern int DAT_00156e00;
extern int DAT_00156e10;
extern float DAT_00156f88;
extern char s_cState_Attack_00156e24[];
extern char s_cState_Die_00156f7c[];
extern char s_cState_GoHome_00156e34[];
extern char s_cState_Hovering_00156e14[];
extern char s_cState_Reaction_00156f6c[];
extern char s_cState_Wait_00156e04[];

// USA 001569E8 <- EU 001569EC (Ghidra, non-matching)
// GLOBAL DAT_00156dc8 uint *
// GLOBAL DAT_00156dcc int
// GLOBAL DAT_00156dd0 undefined4
// GLOBAL DAT_00156dd4 undefined4
// GLOBAL DAT_00156dd8 uint
// GLOBAL DAT_00156ddc uint
// GLOBAL DAT_00156de0 undefined4 *
// GLOBAL DAT_00156de4 int
// GLOBAL DAT_00156de8 float
// GLOBAL DAT_00156dec float
// GLOBAL DAT_00156df0 int
// GLOBAL DAT_00156df4 float
// GLOBAL DAT_00156df8 int
// GLOBAL DAT_00156dfc undefined *
// GLOBAL DAT_00156e00 int
// GLOBAL DAT_00156e10 int
// GLOBAL DAT_00156f88 float
// GLOBAL s_cState_Attack_00156e24 string
// GLOBAL s_cState_Die_00156f7c string
// GLOBAL s_cState_GoHome_00156e34 string
// GLOBAL s_cState_Hovering_00156e14 string
// GLOBAL s_cState_Reaction_00156f6c string
// GLOBAL s_cState_Wait_00156e04 string

undefined4 * func_001569E8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  float fVar20;
  undefined8 uVar19;
  float fVar21;
  ulonglong uVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_00156dc8);
  iVar6 = DAT_00156dcc;
  *piVar3 = DAT_00156dcc;
  piVar3[200] = iVar6 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar14 = DAT_00156dd0;
  puVar4[8] = 0;
  uVar11 = DAT_00156dd4;
  puVar4[10] = uVar14;
  puVar4[0xb] = uVar11;
  uVar13 = DAT_00156ddc;
  lVar18 = (ulonglong)DAT_00156ddc << 0x20;
  puVar4[9] = 0;
  puVar4[0xc] = uVar13;
  puVar4[0xd] = uVar13;
  puVar4[0xe] = uVar13;
  puVar5 = puVar4 + -0x22f;
  puVar4[0xf] = uVar13;
  puVar4[0x10] = uVar13;
  puVar4[0x11] = uVar13;
  uVar22 = (ulonglong)DAT_00156dd8;
  pfVar12 = (float *)DAT_00156de0[1];
  uVar14 = DAT_00156de0[2];
  puVar4[0x12] = *DAT_00156de0;
  puVar4[0x13] = pfVar12;
  puVar4[0x14] = uVar14;
  puVar4[0x15] = uVar13;
  puVar4[0x16] = uVar13;
  puVar4[0x17] = uVar13;
  puVar4[0x18] = 0;
  *(undefined2 *)(puVar4 + 0x19) = 0;
  *(undefined2 *)((int)puVar4 + 0x66) = 0;
  func_004FB344((int)puVar5,6);
  iVar6 = DAT_00156de4;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar5,uVar13,(int *)(iVar6 + uVar13 * 8));
    fVar21 = ALBW_AS_F32(uVar22);
    fVar20 = ALBW_AS_F32(((ulonglong)lVar18 >> 0x20));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 6);
  func_004FB468((int)puVar5);
  iVar6 = func_00520FC0();
  fVar17 = DAT_00156de8;
  fVar16 = *(float *)(iVar6 + 4);
  puVar4[0x17] = ALBW_AS_U32(fVar16);
  fVar17 = (ALBW_AS_F32(puVar4[-0x13a]) - fVar16) * fVar17 * DAT_00156dec;
  if ((fVar20 <= fVar17) && (fVar20 = fVar17, DAT_00156df0 < (int)ALBW_AS_U32(fVar17))) {
    fVar20 = DAT_00156df4;
  }
  puVar4[-0xf3] = ALBW_AS_U32(fVar20 + fVar21);
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar12);
  puVar4[0x12] = puVar4[-0x113];
  puVar4[0x13] = puVar4[-0x112];
  puVar4[0x14] = puVar4[-0x111];
  func_001566B4((int)puVar5);
  *(undefined1 *)((int)puVar4 + 6) = 6;
  puVar4[5] = puVar5;
  iVar7 = func_0010BA78(0x60);
  puVar4[6] = iVar7;
  iVar6 = DAT_00156df8;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 6;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar14 = *(undefined4 *)(iVar6 + 0x74);
    iVar8 = iVar8 + -1;
    puVar9[2] = *(undefined4 *)(iVar6 + 0x70);
    puVar9[3] = uVar14;
    uVar14 = *(undefined4 *)(iVar6 + 0x74);
    puVar9[4] = *(undefined4 *)(iVar6 + 0x70);
    puVar9[5] = uVar14;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar9;
  if (uVar13 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = *(undefined4 *)(iVar6 + 0x1c);
      *puVar9 = *(undefined4 *)(iVar6 + 0x18);
      puVar9[1] = uVar14;
      puVar10 = puVar9;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar14 = *(undefined4 *)(iVar6 + 0x1c);
      puVar10[2] = *(undefined4 *)(iVar6 + 0x18);
      puVar10[3] = uVar14;
      uVar14 = *(undefined4 *)(iVar6 + 0x1c);
      puVar10[4] = *(undefined4 *)(iVar6 + 0x18);
      puVar10[5] = uVar14;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar2 = DAT_00156dfc;
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 6;
    *puVar9 = 0x24;
    iVar7 = func_00100118((int)(puVar9 + 2),puVar2,0x24,6);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 6;
  }
  iVar7 = DAT_00156e00;
  puVar4[-0x15a] = puVar4;
  iVar8 = DAT_00156e10;
  *(undefined2 *)(iVar7 + (int)puVar5) = 6;
  local_3c = s_cState_Wait_00156e04;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,0,&local_40);
  puVar9 = (undefined4 *)puVar4[6];
  uVar11 = *(undefined4 *)(iVar6 + 0xc);
  uVar14 = *(undefined4 *)(iVar6 + 0x10);
  uVar15 = *(undefined4 *)(iVar6 + 0x14);
  uVar19 = *(undefined8 *)(iVar6 + 0x18);
  *puVar9 = *(undefined4 *)(iVar6 + 8);
  puVar9[1] = uVar11;
  puVar9 = (undefined4 *)puVar4[7];
  *puVar9 = uVar14;
  puVar9[1] = uVar15;
  puVar9 = (undefined4 *)puVar4[8];
  *puVar9 = (int)uVar19;
  puVar9[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_3c = s_cState_Hovering_00156e14;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,1,&local_40);
  iVar7 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar6 + 0x28);
  uVar15 = *(undefined4 *)(iVar6 + 0x2c);
  uVar11 = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar14;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 8) = (int)uVar19;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_3c = s_cState_Attack_00156e24;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,2,&local_40);
  iVar7 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar6 + 0x38);
  uVar15 = *(undefined4 *)(iVar6 + 0x3c);
  uVar11 = *(undefined4 *)(iVar6 + 0x34);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar14;
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x10) = (int)uVar19;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_3c = s_cState_GoHome_00156e34;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,3,&local_40);
  iVar7 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar6 + 0x44);
  uVar14 = *(undefined4 *)(iVar6 + 0x48);
  uVar11 = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar14;
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x18) = (int)uVar19;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_3c = s_cState_Reaction_00156f6c;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,4,&local_40);
  iVar7 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar6 + 0x54);
  uVar11 = *(undefined4 *)(iVar6 + 0x58);
  uVar15 = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(iVar7 + 0x24) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar11;
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x20) = (int)uVar19;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  local_3c = s_cState_Die_00156f7c;
  local_40 = iVar8;
  func_0010BEC4((int)puVar4,5,&local_40);
  iVar7 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar6 + 100);
  uVar11 = *(undefined4 *)(iVar6 + 0x68);
  uVar15 = *(undefined4 *)(iVar6 + 0x6c);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar6 + 0x60);
  *(undefined4 *)(iVar7 + 0x2c) = uVar14;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar11;
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x28) = (int)uVar19;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  func_00657E5C(puVar4,0);
  func_004F87F8((int)puVar5,2);
  func_004FA890((int)puVar5);
  fVar20 = DAT_00156f88;
  *(undefined1 *)((int)puVar4 + -0x13f) = 5;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_004FBA18((int)puVar5,4,0xff,-1,-1,0,0x7fff,fVar20,fVar20);
  func_004FC218((int)puVar5,'\x03',-1,0x7fff);
  return puVar5;
}

