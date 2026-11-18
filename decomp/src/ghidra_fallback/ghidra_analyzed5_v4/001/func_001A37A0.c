#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_003C3428(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6,float fparam_0,float fparam_1);
extern int func_003C34C8(int param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);
extern float fRam001a3c40;
extern float fRam001a3c48;
extern float fRam001a3c74;
extern float fRam001a3c78;
extern float fRam001a41a8;
extern float fRam001a41ac;
extern float fRam001a41b4;
extern int iRam001a413c;
extern undefined4 uRam001a3c3c;
extern undefined4 uRam001a3c50;
extern undefined4 uRam001a3c64;
extern undefined4 uRam001a3c7c;
extern undefined4 uRam001a41a4;
extern int *piRam001a3c44;
extern int *piRam001a3c4c;
extern int *piRam001a41a0;
extern undefined4 *puRam001a3c70;
extern undefined4 *puRam001a4138;
extern undefined4 *puRam001a41b0;
extern uint *DAT_001a3c0c;
extern int DAT_001a3c10;
extern undefined4 DAT_001a3c14;
extern uint DAT_001a3c18;
extern undefined4 DAT_001a3c1c;
extern uint DAT_001a3c20;
extern int DAT_001a3c24;
extern undefined4 DAT_001a3c28;
extern undefined4 DAT_001a3c2c;
extern int DAT_001a3c30;
extern char s_Eyegore_001a3c34[];
extern char s_Eyegore_EyeMsk_001a3c54[];
extern char s_cState_Die_001a4194[];
extern char s_cState_EyeClose_001a4174[];
extern char s_cState_EyeOpen_001a414c[];
extern char s_cState_Reaction_001a4184[];
extern char s_cState_Turn_001a4168[];
extern char s_cState_Wait_001a4140[];
extern char s_cState_Walk_001a415c[];
extern char s_chest_001a3c68[];

// USA 001A37A0 <- EU 001A37A0 (Ghidra, non-matching)
// GLOBAL DAT_001a3c0c uint *
// GLOBAL DAT_001a3c10 int
// GLOBAL DAT_001a3c14 undefined4
// GLOBAL DAT_001a3c18 uint
// GLOBAL DAT_001a3c1c undefined4
// GLOBAL DAT_001a3c20 uint
// GLOBAL DAT_001a3c24 int
// GLOBAL DAT_001a3c28 undefined4
// GLOBAL DAT_001a3c2c undefined4
// GLOBAL DAT_001a3c30 int
// GLOBAL UNK_001a3c3c uint
// GLOBAL UNK_001a3c40 float
// GLOBAL UNK_001a3c44 int *
// GLOBAL UNK_001a3c48 float
// GLOBAL UNK_001a3c4c int *
// GLOBAL UNK_001a3c50 undefined4
// GLOBAL UNK_001a3c64 undefined4
// GLOBAL UNK_001a3c70 undefined4 *
// GLOBAL UNK_001a3c74 float
// GLOBAL UNK_001a3c78 float
// GLOBAL UNK_001a3c7c undefined4
// GLOBAL UNK_001a4138 undefined *
// GLOBAL UNK_001a413c int
// GLOBAL UNK_001a41a0 int *
// GLOBAL UNK_001a41a4 undefined4
// GLOBAL UNK_001a41a8 float
// GLOBAL UNK_001a41ac float
// GLOBAL UNK_001a41b0 undefined4 *
// GLOBAL UNK_001a41b4 float
// GLOBAL s_Eyegore_001a3c34 string
// GLOBAL s_Eyegore_EyeMsk_001a3c54 string
// GLOBAL s_cState_Die_001a4194 string
// GLOBAL s_cState_EyeClose_001a4174 string
// GLOBAL s_cState_EyeOpen_001a414c string
// GLOBAL s_cState_Reaction_001a4184 string
// GLOBAL s_cState_Turn_001a4168 string
// GLOBAL s_cState_Wait_001a4140 string
// GLOBAL s_cState_Walk_001a415c string
// GLOBAL s_chest_001a3c68 string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 * func_001A37A0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ushort uVar13;
  undefined4 uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint unaff_r11;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define uStack_94 (*(uint *)(albw_frame + 0xc))
  #define uStack_90 (*(uint *)(albw_frame + 0x10))
  #define pcStack_8c (*(char * *)(albw_frame + 0x14))
  #define auStack_88 ((uint *)(albw_frame + 0x18))
  #define puStack_80 (*(undefined4 * *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_78 (*(float *)(albw_frame + 0x28))
  #define fStack_74 (*(float *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define fStack_6c (*(float *)(albw_frame + 0x34))
  #define uStack_68 (*(uint *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined1 *)(albw_frame + 0x70))
  puVar9 = objStack_a0;
  piVar2 = func_004FD464(param_1,param_2,DAT_001a3c0c);
  iVar4 = DAT_001a3c10;
  *piVar2 = DAT_001a3c10;
  piVar2[200] = iVar4 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  iVar4 = func_0054DDF4((int)(puVar3 + -0x22f),1);
  puVar3[9] = iVar4;
  uVar19 = DAT_001a3c14;
  puVar3[0xc] = 0xffffffff;
  puVar3[0xd] = 0;
  puVar3[10] = uVar19;
  puVar3[0xb] = puVar3 + -0x22f;
  puVar3[0xe] = 0;
  puVar5 = (undefined4 *)func_003C34C8((int)(puVar3 + 0xf));
  iVar4 = func_0054D964((int)(puVar5 + -0x23e),0);
  puVar5[0x1b] = iVar4;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = func_004EDC9C(puVar6);
  }
  uVar17 = DAT_001a3c18;
  puVar5[0x1c] = puVar3;
  uVar19 = DAT_001a3c1c;
  puVar5[0x1e] = uVar17;
  puVar5[0x1f] = uVar19;
  puVar5[0x1d] = 0;
  puVar5[0x21] = uVar17;
  puVar5[0x22] = uVar19;
  puVar5[0x20] = 0;
  puVar5[0x24] = uVar17;
  puVar5[0x25] = uVar19;
  puVar5[0x23] = 0;
  uVar19 = DAT_001a3c28;
  iVar4 = DAT_001a3c24;
  uVar23 = (ulonglong)DAT_001a3c20;
  puVar3 = (undefined4 *)(DAT_001a3c24 + 0x14);
  uVar14 = *(undefined4 *)(DAT_001a3c24 + 0xc);
  uVar18 = *(undefined4 *)(DAT_001a3c24 + 0x10);
  puVar5[0x28] = puVar5 + -0x23e;
  puVar5[0x29] = uVar14;
  puVar5[0x2a] = uVar18;
  puVar5[0x27] = uVar19;
  uVar14 = *puVar3;
  uVar18 = *(undefined4 *)(iVar4 + 0x18);
  puVar3 = puVar5 + -0x23e;
  puVar5[0x2b] = uVar19;
  puVar5[0x2c] = puVar3;
  puVar5[0x2d] = uVar14;
  puVar5[0x2e] = uVar18;
  uVar14 = *(undefined4 *)(iVar4 + 0x1c);
  puVar5[0x32] = *(undefined4 *)(iVar4 + 0x20);
  uVar19 = DAT_001a3c2c;
  puVar5[0x31] = uVar14;
  puVar5[0x2f] = uVar19;
  puVar5[0x30] = puVar3;
  puVar5[0x33] = 0;
  *(undefined2 *)(puVar5 + 0x34) = 0;
  *(undefined1 *)((int)puVar5 + 0xd2) = 0;
  puVar5[-0x143] = puVar5 + 0x27;
  func_004FB344((int)puVar3,9);
  iVar4 = DAT_001a3c30;
  uVar16 = 0;
  do {
    func_004FACA4((int)puVar3,uVar16,(int *)(iVar4 + uVar16 * 8));
    fVar20 = ALBW_AS_F32(uVar23);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 9);
  func_004FB468((int)puVar3);
  piVar2 = (int *)0x0;
  func_004FABDC((int)puVar3,0,0xffffffff,0);
  puVar5[-0xd7] = puVar5[-0xd7] & 0xfffffdff;
  func_004FB30C((int)puVar3,1);
  uVar16 = uRam001a3c3c;
  objStack_a0[1] = (uint)s_Eyegore_001a3c34;
  objStack_a0[0] = uRam001a3c3c;
  func_004FAC70((int)puVar3,0,(int *)objStack_a0);
  func_004FB408((int)puVar3);
  fVar21 = fRam001a3c40;
  func_004FB4C4((int)puVar3,fRam001a3c40);
  iVar4 = func_00588BE4((int)puVar3);
  if (iVar4 == *piRam001a3c44) {
    func_004FB070((int)puVar3,fRam001a3c48);
  }
  else {
    iVar4 = func_00588BE4((int)puVar3);
    if (iVar4 == *piRam001a3c4c) {
      func_004FB070((int)puVar3,fVar20);
    }
    else {
      func_004FB070((int)puVar3,fVar21);
    }
  }
  func_004FACD4((int)puVar3,(int *)0x1,puVar9,piVar2);
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar7,1,uRam001a3c50,1);
  }
  puVar5[0x26] = puVar6;
  piVar2 = puVar5 + 0x26;
  objStack_a0[1] = (uint)s_Eyegore_EyeMsk_001a3c54;
  objStack_a0[0] = uVar16;
  func_00169608((uint *)puVar5[0x26],0,(int *)objStack_a0,*(int *)(puVar5[-0x18a] + 0x1c8));
  func_00133870(*piVar2,0,puVar5[-0x13b]);
  func_0016A02C(*piVar2,-1,(int *)0xffffffff,0);
  auStack_88[1] = 3;
  puStack_80 = &uStack_7c;
  uStack_68 = unaff_r11 | 0xff;
  uStack_34 = 10;
  uStack_30 = 0;
  uStack_7c = 0;
  auStack_88[0] = 1;
  uStack_70 = uRam001a3c64;
  fStack_78 = fVar21;
  fStack_74 = fVar20;
  fStack_6c = fVar20;
  func_0016898C(puVar5[0x26],auStack_88);
  *(float *)(*(int *)(*piVar2 + 0x14) + 0x10) = fVar21;
  iVar4 = *(int *)(puVar5[0x26] + 0x14);
  if (*(short *)(puVar5 + -0x232) == 1) {
    if (*(float *)(iVar4 + 8) == fVar20) goto LAB_001a3b34;
    *(float *)(iVar4 + 8) = fVar20;
  }
  else {
    if (*(float *)(iVar4 + 8) == fVar21) goto LAB_001a3b34;
    *(float *)(iVar4 + 8) = fVar21;
  }
  *(undefined1 *)(iVar4 + 0x26) = 1;
LAB_001a3b34:
  func_00168E9C((int *)puVar5[0x26],puVar5[-0x13b],(int *)0x0);
  objStack_a0[1] = (uint)s_chest_001a3c68;
  objStack_a0[0] = uVar16;
  uVar8 = func_00564A78(puVar5[-0x13b],(int *)objStack_a0);
  if (uVar8 != uVar17) {
    puVar5[-3] = uVar8;
    puVar9 = (uint *)(*(int *)(*(int *)(puVar5[-0x13b] + 0x24) + 0xc) + uVar8 * 0x40);
    *puVar9 = *puVar9 | 0x10;
  }
  objStack_a0[1] = (uint)puRam001a3c70;
  *(undefined4 **)(puVar5[-0x13b] + 0x16c) = puVar5 + -5;
  objStack_a0[0] = objStack_a0[1] + -4;
  pfVar15 = (float *)(objStack_a0[1] + -8);
  func_003C3428(puVar5,2,(undefined4 *)(objStack_a0[1] + -0xc),pfVar15,(undefined4 *)objStack_a0[0],
                (undefined4 *)objStack_a0[1],fRam001a3c78,fRam001a3c74);
  puVar5[-2] = 2;
  func_004F5BD8((int)puVar3,(uint *)0x0,(int **)0x0,pfVar15);
  if (*(short *)(puVar5 + -0x232) == 1) {
    func_003521F0((int)(puVar5 + -0x175),1);
  }
  else {
    func_003521F0((int)(puVar5 + -0x175),0);
  }
  uVar19 = uRam001a3c7c;
  puVar5[0x24] = 3;
  puVar5[0x25] = uVar19;
  puVar5[0x23] = 0;
  *(undefined1 *)((int)puVar5 + -0x36) = 7;
  puVar7 = puVar5 + -0xf;
  puVar5[-10] = puVar3;
  iVar10 = func_0010BA78(0x70);
  puVar5[-9] = iVar10;
  iVar4 = DAT_001a3c24;
  puVar5[-8] = iVar10 + (uint)*(byte *)((int)puVar5 + -0x36) * 8;
  iVar11 = 7;
  puVar6 = (undefined4 *)(iVar10 + -8);
  do {
    uVar19 = *(undefined4 *)(iVar4 + 0xa0);
    iVar11 = iVar11 + -1;
    puVar6[2] = *(undefined4 *)(iVar4 + 0x9c);
    puVar6[3] = uVar19;
    uVar19 = *(undefined4 *)(iVar4 + 0xa0);
    puVar6[4] = *(undefined4 *)(iVar4 + 0x9c);
    puVar6[5] = uVar19;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x36);
  uVar17 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar5[-7] = puVar6;
  if (uVar17 != 0) {
    puVar12 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = *(undefined4 *)(iVar4 + 0x38);
      *puVar6 = *(undefined4 *)(iVar4 + 0x34);
      puVar6[1] = uVar19;
      puVar12 = puVar6;
    }
    for (iVar10 = (int)uVar17 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar19 = *(undefined4 *)(iVar4 + 0x38);
      puVar12[2] = *(undefined4 *)(iVar4 + 0x34);
      puVar12[3] = uVar19;
      uVar19 = *(undefined4 *)(iVar4 + 0x38);
      puVar12[4] = *(undefined4 *)(iVar4 + 0x34);
      puVar12[5] = uVar19;
      puVar12 = puVar12 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar10 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar10 = func_00100118((int)(puVar6 + 2),puRam001a4138,0x24,7);
  }
  if (iVar10 != 0) {
    puVar5[-0xc] = iVar10;
    puVar5[-0xd] = 7;
  }
  iVar10 = iRam001a413c;
  puVar5[-0x169] = puVar7;
  *(undefined2 *)(iVar10 + (int)puVar3) = 7;
  pcStack_8c = s_cState_Wait_001a4140;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,0,(int *)&uStack_90);
  puVar6 = (undefined4 *)puVar5[-9];
  uVar24 = *(undefined4 *)(iVar4 + 0x34);
  uVar22 = *(undefined4 *)(iVar4 + 0x38);
  uVar19 = *(undefined4 *)(iVar4 + 0x28);
  uVar14 = *(undefined4 *)(iVar4 + 0x2c);
  uVar18 = *(undefined4 *)(iVar4 + 0x30);
  *puVar6 = *(undefined4 *)(iVar4 + 0x24);
  puVar6[1] = uVar19;
  puVar6 = (undefined4 *)puVar5[-8];
  *puVar6 = uVar14;
  puVar6[1] = uVar18;
  puVar6 = (undefined4 *)puVar5[-7];
  *puVar6 = uVar24;
  puVar6[1] = uVar22;
  pcStack_8c = s_cState_EyeOpen_001a414c;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,1,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar18 = *(undefined4 *)(iVar4 + 0x40);
  uVar19 = *(undefined4 *)(iVar4 + 0x44);
  uVar14 = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar10 = puVar5[-8];
  *(undefined4 *)(iVar10 + 8) = uVar19;
  *(undefined4 *)(iVar10 + 0xc) = uVar14;
  iVar10 = puVar5[-7];
  *(undefined4 *)(iVar10 + 8) = uVar24;
  *(undefined4 *)(iVar10 + 0xc) = uVar22;
  pcStack_8c = s_cState_Walk_001a415c;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,2,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar19 = *(undefined4 *)(iVar4 + 0x50);
  uVar14 = *(undefined4 *)(iVar4 + 0x54);
  uVar18 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(iVar10 + 0x14) = uVar19;
  iVar10 = puVar5[-8];
  *(undefined4 *)(iVar10 + 0x10) = uVar14;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  iVar10 = puVar5[-7];
  *(undefined4 *)(iVar10 + 0x10) = uVar24;
  *(undefined4 *)(iVar10 + 0x14) = uVar22;
  pcStack_8c = s_cState_Turn_001a4168;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,3,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar18 = *(undefined4 *)(iVar4 + 0x60);
  uVar19 = *(undefined4 *)(iVar4 + 100);
  uVar14 = *(undefined4 *)(iVar4 + 0x68);
  *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar4 + 0x5c);
  *(undefined4 *)(iVar10 + 0x1c) = uVar18;
  iVar10 = puVar5[-8];
  *(undefined4 *)(iVar10 + 0x18) = uVar19;
  *(undefined4 *)(iVar10 + 0x1c) = uVar14;
  iVar10 = puVar5[-7];
  *(undefined4 *)(iVar10 + 0x18) = uVar24;
  *(undefined4 *)(iVar10 + 0x1c) = uVar22;
  pcStack_8c = s_cState_EyeClose_001a4174;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,4,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar19 = *(undefined4 *)(iVar4 + 0x70);
  uVar14 = *(undefined4 *)(iVar4 + 0x74);
  uVar18 = *(undefined4 *)(iVar4 + 0x78);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar4 + 0x6c);
  *(undefined4 *)(iVar10 + 0x24) = uVar19;
  iVar10 = puVar5[-8];
  *(undefined4 *)(iVar10 + 0x20) = uVar14;
  *(undefined4 *)(iVar10 + 0x24) = uVar18;
  iVar10 = puVar5[-7];
  *(undefined4 *)(iVar10 + 0x20) = uVar24;
  *(undefined4 *)(iVar10 + 0x24) = uVar22;
  pcStack_8c = s_cState_Reaction_001a4184;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,5,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar19 = *(undefined4 *)(iVar4 + 0x80);
  uVar14 = *(undefined4 *)(iVar4 + 0x84);
  uVar18 = *(undefined4 *)(iVar4 + 0x88);
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar4 + 0x7c);
  *(undefined4 *)(iVar10 + 0x2c) = uVar19;
  iVar10 = puVar5[-8];
  *(undefined4 *)(iVar10 + 0x28) = uVar14;
  *(undefined4 *)(iVar10 + 0x2c) = uVar18;
  iVar10 = puVar5[-7];
  *(undefined4 *)(iVar10 + 0x28) = uVar24;
  *(undefined4 *)(iVar10 + 0x2c) = uVar22;
  pcStack_8c = s_cState_Die_001a4194;
  uStack_90 = uVar16;
  func_0010BEC4((int)puVar7,6,(int *)&uStack_90);
  iVar10 = puVar5[-9];
  uVar18 = *(undefined4 *)(iVar4 + 0x90);
  uVar19 = *(undefined4 *)(iVar4 + 0x94);
  uVar14 = *(undefined4 *)(iVar4 + 0x98);
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar4 + 0x8c);
  *(undefined4 *)(iVar10 + 0x34) = uVar18;
  iVar4 = puVar5[-8];
  *(undefined4 *)(iVar4 + 0x30) = uVar19;
  *(undefined4 *)(iVar4 + 0x34) = uVar14;
  iVar4 = puVar5[-7];
  *(undefined4 *)(iVar4 + 0x30) = uVar24;
  *(undefined4 *)(iVar4 + 0x34) = uVar22;
  iVar4 = puVar5[0x1b];
  uVar14 = puVar5[-0x14a];
  fVar20 = func_0054DE3C(puVar3,0,1);
  fVar21 = ALBW_AS_F32(puVar5[-0x149]);
  uVar19 = puVar5[-0x148];
  *(undefined4 *)(iVar4 + 4) = uVar14;
  *(float *)(iVar4 + 8) = fVar20 + fVar21;
  *(undefined4 *)(iVar4 + 0xc) = uVar19;
  func_004356B4((int *)puVar5[0x1b]);
  piVar2 = puVar5 + 0x1c;
  *(undefined4 *)(puVar5[0x1c] + 0x18) = puVar5[0x1b];
  uStack_94 = puVar5[-0x18b];
  func_004EDAD0(puVar5[0x1c],&uStack_94);
  *(undefined2 *)(*piVar2 + 0x2c) = *(undefined2 *)(puVar5 + -0x229);
  func_004A7F00(*piRam001a41a0,*piVar2,3);
  uVar19 = uRam001a41a4;
  *(undefined4 **)(*piVar2 + 0x28) = puVar5 + 0x2f;
  puVar5[-0xd7] = puVar5[-0xd7] | 0x8800;
  uVar13 = (ushort)uVar19;
  func_002B1FB4((int)puVar3,-1,uVar13);
  func_002B1440((int)puVar3,-1,uVar13,0);
  objStack_a0[0] = 0x16;
  objStack_a0[1] = 0;
  func_004FBA18((int)puVar3,5,6,-1,0x16,0,uVar13,fRam001a41ac,fRam001a41a8);
  func_002AF5FC((int)puVar3,8,-1);
  *(undefined1 *)((int)puVar5 + -0x17b) = 7;
  *(undefined1 *)((int)puVar5 + -0x17a) = 0xff;
  *(undefined1 *)((int)puVar5 + -0x179) = 0;
  func_002AED68((int)puVar3,8);
  fVar20 = fRam001a41b4;
  func_004F8864((int)puVar3,puRam001a41b0,0,fRam001a41b4);
  puVar6 = puRam001a41b0;
  puVar5[-0x116] = ALBW_AS_U32(fVar20);
  puVar5[-0x115] = ALBW_AS_U32(fVar20);
  puVar5[-0x114] = ALBW_AS_U32(fVar20);
  puVar5[-0x119] = *puVar6;
  puVar5[-0x118] = puVar6[1];
  puVar5[-0x117] = puVar6[2];
  func_0065A474(puVar7,0);
  return puVar3;
}

