#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_0026186C(undefined4 *param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6, uint param_7,int param_8,uint param_9,byte param_10);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001a6b58;
extern int DAT_001a6b5c;
extern undefined4 DAT_001a6b60;
extern undefined4 DAT_001a6b64;
extern int DAT_001a6b68;
extern undefined DAT_001a6b7c;
extern int DAT_001a6b84;
extern undefined4 DAT_001a6b88;
extern undefined4 *DAT_001a6b8c;
extern int DAT_001a6b90;
extern undefined4 *DAT_001a6b94;
extern float DAT_001a6b98;
extern float DAT_001a6b9c;
extern float DAT_001a6ba0;
extern float DAT_001a6ba4;
extern undefined *DAT_001a6ba8;
extern undefined4 DAT_001a6e0c;
extern float DAT_001a6e10;
extern float DAT_001a6e14;
extern char s_HipLoop_Mask_001a6b6c[];
extern char s_cState_Die_001a6e00[];
extern char s_cState_Move_001a6bb8[];
extern char s_cState_PersonaShock_001a6ddc[];
extern char s_cState_Reaction_001a6df0[];
extern char s_cState_Search_001a6bc4[];
extern char s_cState_Wait_001a6bac[];

// USA 001A6788 <- EU 001A6788 (Ghidra, non-matching)
// GLOBAL DAT_001a6b58 uint *
// GLOBAL DAT_001a6b5c int
// GLOBAL DAT_001a6b60 undefined4
// GLOBAL DAT_001a6b64 undefined4
// GLOBAL DAT_001a6b68 int
// GLOBAL DAT_001a6b7c undefined
// GLOBAL DAT_001a6b84 int
// GLOBAL DAT_001a6b88 undefined4
// GLOBAL DAT_001a6b8c undefined4 *
// GLOBAL DAT_001a6b90 int
// GLOBAL DAT_001a6b94 undefined4 *
// GLOBAL DAT_001a6b98 float
// GLOBAL DAT_001a6b9c float
// GLOBAL DAT_001a6ba0 float
// GLOBAL DAT_001a6ba4 float
// GLOBAL DAT_001a6ba8 undefined *
// GLOBAL DAT_001a6e0c undefined4
// GLOBAL DAT_001a6e10 float
// GLOBAL DAT_001a6e14 float
// GLOBAL s_HipLoop_Mask_001a6b6c string
// GLOBAL s_cState_Die_001a6e00 string
// GLOBAL s_cState_Move_001a6bb8 string
// GLOBAL s_cState_PersonaShock_001a6ddc string
// GLOBAL s_cState_Reaction_001a6df0 string
// GLOBAL s_cState_Search_001a6bc4 string
// GLOBAL s_cState_Wait_001a6bac string

undefined4 * func_001A6788(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_001a6b58);
  iVar17 = DAT_001a6b5c;
  *piVar3 = DAT_001a6b5c;
  piVar3[200] = iVar17 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  uVar9 = DAT_001a6b60;
  puVar11 = puVar4 + -0x22f;
  puVar4[10] = 0;
  puVar4[0xb] = uVar9;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = uVar9;
  puVar4[0xf] = DAT_001a6b64;
  puVar4[0x10] = uVar9;
  puVar5 = (undefined4 *)func_0010BAB4(0x34);
  iVar17 = DAT_001a6b68;
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_40 = DAT_001a6b68;
    local_3c = s_HipLoop_Mask_001a6b6c;
    iStack_38 = DAT_001a6b68;
    local_34 = &DAT_001a6b7c;
    puVar6 = func_0026186C(puVar5,(int)puVar11,&iStack_38,0,&local_40,0,0,0,0,0xb);
  }
  iVar2 = DAT_001a6b84;
  puVar4[0x11] = puVar6;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  puVar4[0x13] = 0;
  uVar9 = *(undefined4 *)(iVar2 + 8);
  puVar4[0x16] = *(undefined4 *)(iVar2 + 4);
  puVar4[0x17] = uVar9;
  puVar4[0x14] = DAT_001a6b88;
  puVar4[0x15] = puVar11;
  puVar6 = DAT_001a6b8c;
  puVar4[0x18] = puVar4[-0x13b];
  puVar4[0x19] = puVar4[-0x13a];
  puVar4[0x1a] = puVar4[-0x139];
  uVar9 = puVar6[1];
  uVar14 = puVar6[2];
  puVar4[0x1b] = *puVar6;
  puVar4[0x1c] = uVar9;
  puVar4[0x1d] = uVar14;
  uVar9 = *puVar6;
  pfVar10 = (float *)puVar6[1];
  puVar4[0x20] = puVar6[2];
  puVar4[0x1e] = uVar9;
  puVar4[0x1f] = pfVar10;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  *(undefined2 *)(puVar4 + 0x24) = 0;
  *(undefined1 *)((int)puVar4 + 0x92) = 0;
  *(undefined1 *)((int)puVar4 + 0x93) = 0;
  *(bool *)(puVar4 + 0x25) = *(short *)((int)param_2 + 0x2a) != 0;
  func_004FB344((int)puVar11,0xc);
  iVar7 = DAT_001a6b90;
  uVar12 = 0;
  do {
    func_004FACA4((int)puVar11,uVar12,(int *)(iVar7 + uVar12 * 8));
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0xc);
  func_004FB468((int)puVar11);
  func_004F5BD8((int)puVar11,(uint *)0x0,(int **)0x0,pfVar10);
  func_0026171C(puVar4[0x11],(float *)0x0,(uint *)0x0,(float *)0x0);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  uVar14 = *(undefined4 *)(iVar2 + 0x10);
  puVar4[0x15] = puVar11;
  fVar19 = DAT_001a6b98;
  puVar4[0x16] = uVar9;
  puVar4[0x17] = uVar14;
  puVar6 = DAT_001a6b94;
  puVar4[-0x134] = puVar4 + 0x14;
  uVar12 = func_00111A64((uint *)*puVar6);
  fVar18 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
  puVar4[-0x135] = (int)((fVar18 * DAT_001a6b9c * fVar19 + DAT_001a6ba0) * DAT_001a6ba4);
  *(undefined1 *)((int)puVar4 + 6) = 6;
  puVar4[5] = puVar11;
  iVar7 = func_0010BA78(0x60);
  puVar4[6] = iVar7;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 6;
  puVar6 = (undefined4 *)(iVar7 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar2 + 0x88);
    iVar8 = iVar8 + -1;
    puVar6[2] = *(undefined4 *)(iVar2 + 0x84);
    puVar6[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar2 + 0x88);
    puVar6[4] = *(undefined4 *)(iVar2 + 0x84);
    puVar6[5] = uVar9;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar6;
  if (uVar12 != 0) {
    puVar5 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar2 + 0x28);
      *puVar6 = *(undefined4 *)(iVar2 + 0x24);
      puVar6[1] = uVar9;
      puVar5 = puVar6;
    }
    for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar9 = *(undefined4 *)(iVar2 + 0x28);
      puVar5[2] = *(undefined4 *)(iVar2 + 0x24);
      puVar5[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar2 + 0x28);
      puVar5[4] = *(undefined4 *)(iVar2 + 0x24);
      puVar5[5] = uVar9;
      puVar5 = puVar5 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar7 = func_00100118((int)(puVar6 + 2),DAT_001a6ba8,0x24,6);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 6;
  }
  puVar4[-0x15a] = puVar4;
  *(undefined2 *)((int)puVar4 + -0x562) = 6;
  local_3c = s_cState_Wait_001a6bac;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,0,&local_40);
  puVar6 = (undefined4 *)puVar4[6];
  uVar9 = *(undefined4 *)(iVar2 + 0x18);
  uVar14 = *(undefined4 *)(iVar2 + 0x1c);
  uVar15 = *(undefined4 *)(iVar2 + 0x20);
  uVar20 = *(undefined8 *)(iVar2 + 0x24);
  *puVar6 = *(undefined4 *)(iVar2 + 0x14);
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar14;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar20;
  puVar6[1] = (int)((ulonglong)uVar20 >> 0x20);
  local_3c = s_cState_Move_001a6bb8;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,1,&local_40);
  iVar7 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar2 + 0x30);
  uVar14 = *(undefined4 *)(iVar2 + 0x34);
  uVar15 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar7 + 0xc) = uVar9;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar14;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 8) = (int)uVar20;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_3c = s_cState_Search_001a6bc4;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,2,&local_40);
  iVar7 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar2 + 0x40);
  uVar9 = *(undefined4 *)(iVar2 + 0x44);
  uVar14 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar9;
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x10) = (int)uVar20;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_3c = s_cState_PersonaShock_001a6ddc;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,3,&local_40);
  iVar7 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar2 + 0x58);
  uVar13 = *(undefined4 *)(iVar2 + 0x5c);
  uVar16 = *(undefined4 *)(iVar2 + 0x60);
  uVar14 = *(undefined4 *)(iVar2 + 0x54);
  uVar15 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar14;
  *(undefined4 *)(iVar7 + 0x1c) = uVar9;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar13;
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  local_3c = s_cState_Reaction_001a6df0;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,4,&local_40);
  iVar7 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar2 + 0x68);
  uVar9 = *(undefined4 *)(iVar2 + 0x6c);
  uVar15 = *(undefined4 *)(iVar2 + 0x70);
  uVar20 = *(undefined8 *)(iVar2 + 0x24);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(iVar7 + 0x24) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar9;
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x20) = (int)uVar20;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_3c = s_cState_Die_001a6e00;
  local_40 = iVar17;
  func_0010BEC4((int)puVar4,5,&local_40);
  iVar17 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar2 + 0x78);
  uVar14 = *(undefined4 *)(iVar2 + 0x7c);
  uVar15 = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(iVar17 + 0x28) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(iVar17 + 0x2c) = uVar9;
  iVar17 = puVar4[7];
  *(undefined4 *)(iVar17 + 0x28) = uVar14;
  *(undefined4 *)(iVar17 + 0x2c) = uVar15;
  iVar17 = puVar4[8];
  *(int *)(iVar17 + 0x28) = (int)uVar20;
  *(int *)(iVar17 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  uVar20 = func_0058A474(puVar11,0x32);
  if ((int)uVar20 == 0) {
    func_0065A6FC(puVar4,1);
  }
  else {
    func_0065A6FC(puVar4,0);
  }
  uVar9 = DAT_001a6e0c;
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_004FC218((int)puVar11,'\x06',-1,(ushort)uVar9);
  *(undefined1 *)((int)puVar4 + -0x13f) = 9;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AF5FC((int)puVar11,10,-1);
  func_002AED68((int)puVar11,10);
  func_004FBA18((int)puVar11,7,8,-1,0x20,0,(ushort)uVar9,DAT_001a6e14,DAT_001a6e10);
  return puVar11;
}

