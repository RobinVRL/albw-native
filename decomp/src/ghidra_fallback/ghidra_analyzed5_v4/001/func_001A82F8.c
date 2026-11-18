#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
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
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001a8704;
extern int DAT_001a8708;
extern undefined4 DAT_001a870c;
extern undefined4 DAT_001a8710;
extern int DAT_001a8714;
extern undefined4 DAT_001a8718;
extern int DAT_001a871c;
extern int DAT_001a8728;
extern undefined4 DAT_001a872c;
extern undefined *DAT_001a8738;
extern int DAT_001a8aa0;
extern float DAT_001a8b28;
extern float DAT_001a8b2c;
extern char s_Kodongo_001a8720[];
extern char s_cState_Die_001a8b1c[];
extern char s_cState_FireEd_001a8afc[];
extern char s_cState_FireSt_001a8ae0[];
extern char s_cState_Fire_001a8af0[];
extern char s_cState_Move_001a8ab0[];
extern char s_cState_Reaction_001a8b0c[];
extern char s_cState_ToPlayerEd_001a8acc[];
extern char s_cState_ToPlayer_001a8abc[];
extern char s_cState_Wait_001a8aa4[];
extern char s_mouth_001a8730[];

// USA 001A82F8 <- EU 001A82F8 (Ghidra, non-matching)
// GLOBAL DAT_001a8704 uint *
// GLOBAL DAT_001a8708 int
// GLOBAL DAT_001a870c undefined4
// GLOBAL DAT_001a8710 undefined4
// GLOBAL DAT_001a8714 int
// GLOBAL DAT_001a8718 undefined4
// GLOBAL DAT_001a871c int
// GLOBAL DAT_001a8728 int
// GLOBAL DAT_001a872c undefined4
// GLOBAL DAT_001a8738 undefined *
// GLOBAL DAT_001a8aa0 int
// GLOBAL DAT_001a8b28 float
// GLOBAL DAT_001a8b2c float
// GLOBAL s_Kodongo_001a8720 string
// GLOBAL s_cState_Die_001a8b1c string
// GLOBAL s_cState_FireEd_001a8afc string
// GLOBAL s_cState_FireSt_001a8ae0 string
// GLOBAL s_cState_Fire_001a8af0 string
// GLOBAL s_cState_Move_001a8ab0 string
// GLOBAL s_cState_Reaction_001a8b0c string
// GLOBAL s_cState_ToPlayerEd_001a8acc string
// GLOBAL s_cState_ToPlayer_001a8abc string
// GLOBAL s_cState_Wait_001a8aa4 string
// GLOBAL s_mouth_001a8730 string

undefined4 * func_001A82F8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  float fparam_0;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004FD464(param_1,param_2,DAT_001a8704);
  iVar4 = DAT_001a8708;
  *piVar2 = DAT_001a8708;
  piVar2[200] = iVar4 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar14 = puVar3 + -0x22f;
  puVar3[8] = 0;
  iVar4 = func_0054D964((int)puVar14,1);
  puVar3[9] = iVar4;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar6 = func_004EE484(puVar5);
  }
  puVar3[10] = uVar6;
  uVar6 = DAT_001a870c;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = uVar6;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = uVar6;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = uVar6;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = uVar6;
  puVar3[0x17] = 0x8000000;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  uVar12 = DAT_001a8710;
  uVar19 = CONCAT44(DAT_001a8710,uVar6);
  *(byte *)(puVar3 + 0x1a) = (byte)((uint)(puVar3[-0x135] + 0x20000000) >> 0x1e);
  puVar3[0x1b] = uVar12;
  puVar3[0x1d] = 0xffffffff;
  puVar3[0x1c] = 0;
  *(undefined1 *)(puVar3 + 0x1e) = 0;
  iVar4 = DAT_001a8714;
  *(undefined1 *)((int)puVar3 + 0x79) = 0;
  *(undefined1 *)((int)puVar3 + 0x7a) = 0;
  *(undefined1 *)((int)puVar3 + 0x7b) = 0;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  *(undefined1 *)((int)puVar3 + 0x7d) = 0;
  uVar12 = *(undefined4 *)(iVar4 + 8);
  puVar3[0x22] = *(undefined4 *)(iVar4 + 4);
  puVar3[0x23] = uVar12;
  uVar12 = DAT_001a8718;
  puVar3[0x20] = DAT_001a8718;
  puVar3[0x21] = puVar14;
  pfVar13 = *(float **)(iVar4 + 0xc);
  puVar3[0x27] = *(undefined4 *)(iVar4 + 0x10);
  puVar3[0x26] = pfVar13;
  puVar3[0x24] = uVar12;
  puVar3[0x25] = puVar14;
  puVar3[0x28] = uVar6;
  puVar3[0x29] = 0;
  puVar3[0x2b] = 0;
  func_004FB344((int)puVar14,0xd);
  iVar4 = DAT_001a871c;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar4 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0xd);
  func_004FB468((int)puVar14);
  func_004FB30C((int)puVar14,1);
  iVar4 = DAT_001a8728;
  local_34 = s_Kodongo_001a8720;
  piVar2 = &local_38;
  local_38 = DAT_001a8728;
  func_004FAC70((int)puVar14,0,piVar2);
  func_004FB408((int)puVar14);
  puVar3[-200] = puVar3[-200] & 0xfffffdff;
  if (*(short *)(puVar3 + -0x223) == 0) {
    fparam_0 = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
  }
  else {
    fparam_0 = ALBW_AS_F32(uVar19);
  }
  func_004FB070((int)puVar14,fparam_0);
  func_004FB4C4((int)puVar14,ALBW_AS_F32(((ulonglong)uVar19 >> 0x20)));
  func_004FACD4((int)puVar14,(int *)0x0,piVar2,(int *)pfVar13);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  piVar2 = puVar3 + 9;
  *(undefined1 *)(puVar3[10] + 0x61) = 0;
  *(undefined2 *)(puVar3[9] + 0x28) = 0x1a0;
  puVar7 = (undefined2 *)func_0054DDF4((int)puVar14,1);
  local_3c = puVar3[-0x17c];
  func_0014EB8C(puVar3[10],*piVar2,puVar7,&local_3c,(short)param_2[0x14],puVar3 + 0x24,
                (short)DAT_001a872c);
  uVar15 = *(uint *)(*piVar2 + 0x2c) & 0xfffffff7;
  *(uint *)(*piVar2 + 0x2c) = uVar15;
  *(uint *)(*piVar2 + 0x2c) = uVar15 | 0x20000;
  *(uint *)(*piVar2 + 0x2c) = uVar15 | 0x60000;
  func_004356B4((int *)*piVar2);
  iVar8 = puVar3[10];
  func_004D80A4((float *)(iVar8 + 0x24),param_2[8],ALBW_AS_F32(uVar19));
  *(int *)(iVar8 + 0x28) = (int)((ulonglong)uVar19 >> 0x20);
  puVar3[-0x134] = puVar3 + 0x20;
  local_34 = s_mouth_001a8730;
  local_38 = iVar4;
  uVar15 = func_00564A78(puVar3[-300],&local_38);
  puVar3[0x1d] = uVar15;
  *(undefined1 *)((int)puVar3 + 6) = 9;
  puVar3[5] = puVar14;
  iVar9 = func_0010BA78(0x90);
  puVar3[6] = iVar9;
  iVar8 = DAT_001a8714;
  puVar3[7] = iVar9 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 9;
  puVar5 = (undefined4 *)(iVar9 + -8);
  do {
    uVar6 = *(undefined4 *)(iVar8 + 200);
    iVar10 = iVar10 + -1;
    puVar5[2] = *(undefined4 *)(iVar8 + 0xc4);
    puVar5[3] = uVar6;
    uVar6 = *(undefined4 *)(iVar8 + 200);
    puVar5[4] = *(undefined4 *)(iVar8 + 0xc4);
    puVar5[5] = uVar6;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar3[8] = puVar5;
  if (uVar15 != 0) {
    puVar11 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = *(undefined4 *)(iVar8 + 0x28);
      *puVar5 = *(undefined4 *)(iVar8 + 0x24);
      puVar5[1] = uVar6;
      puVar11 = puVar5;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar6 = *(undefined4 *)(iVar8 + 0x28);
      puVar11[2] = *(undefined4 *)(iVar8 + 0x24);
      puVar11[3] = uVar6;
      uVar6 = *(undefined4 *)(iVar8 + 0x28);
      puVar11[4] = *(undefined4 *)(iVar8 + 0x24);
      puVar11[5] = uVar6;
      puVar11 = puVar11 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 9;
    iVar9 = func_00100118((int)(puVar5 + 2),DAT_001a8738,0x24,9);
  }
  if (iVar9 != 0) {
    puVar3[3] = iVar9;
    puVar3[2] = 9;
  }
  iVar9 = DAT_001a8aa0;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar9 + (int)puVar14) = 9;
  local_34 = s_cState_Wait_001a8aa4;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,0,&local_38);
  puVar5 = (undefined4 *)puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x24);
  uVar12 = *(undefined4 *)(iVar8 + 0x28);
  uVar16 = *(undefined4 *)(iVar8 + 0x1c);
  uVar18 = *(undefined4 *)(iVar8 + 0x18);
  uVar17 = *(undefined4 *)(iVar8 + 0x20);
  *puVar5 = *(undefined4 *)(iVar8 + 0x14);
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar16;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar6;
  puVar5[1] = uVar12;
  local_34 = s_cState_Move_001a8ab0;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_38);
  iVar9 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x30);
  uVar12 = *(undefined4 *)(iVar8 + 0x34);
  uVar16 = *(undefined4 *)(iVar8 + 0x38);
  uVar17 = *(undefined4 *)(iVar8 + 0x3c);
  uVar18 = *(undefined4 *)(iVar8 + 0x40);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar9 + 0xc) = uVar6;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar12;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  local_34 = s_cState_ToPlayer_001a8abc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_38);
  iVar9 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0x48);
  uVar6 = *(undefined4 *)(iVar8 + 0x4c);
  uVar12 = *(undefined4 *)(iVar8 + 0x50);
  uVar19 = *(undefined8 *)(iVar8 + 0x24);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(iVar9 + 0x14) = uVar16;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar6;
  *(undefined4 *)(iVar9 + 0x14) = uVar12;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 0x10) = (int)uVar19;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_ToPlayerEd_001a8acc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_38);
  iVar9 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x5c);
  uVar12 = *(undefined4 *)(iVar8 + 0x60);
  uVar16 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar6;
  *(undefined4 *)(iVar9 + 0x1c) = uVar12;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 0x18) = (int)uVar19;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_FireSt_001a8ae0;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_38);
  iVar9 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x68);
  uVar12 = *(undefined4 *)(iVar8 + 0x6c);
  uVar16 = *(undefined4 *)(iVar8 + 0x70);
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar8 + 100);
  *(undefined4 *)(iVar9 + 0x24) = uVar6;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar12;
  *(undefined4 *)(iVar9 + 0x24) = uVar16;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 0x20) = (int)uVar19;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Fire_001a8af0;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_38);
  iVar9 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x78);
  uVar12 = *(undefined4 *)(iVar8 + 0x7c);
  uVar16 = *(undefined4 *)(iVar8 + 0x80);
  uVar17 = *(undefined4 *)(iVar8 + 0x84);
  uVar18 = *(undefined4 *)(iVar8 + 0x88);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar8 + 0x74);
  *(undefined4 *)(iVar9 + 0x2c) = uVar6;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar12;
  *(undefined4 *)(iVar9 + 0x2c) = uVar16;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x28) = uVar17;
  *(undefined4 *)(iVar9 + 0x2c) = uVar18;
  local_34 = s_cState_FireEd_001a8afc;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_38);
  iVar9 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0x94);
  uVar17 = *(undefined4 *)(iVar8 + 0x98);
  uVar12 = *(undefined4 *)(iVar8 + 0xa0);
  uVar16 = *(undefined4 *)(iVar8 + 0x9c);
  uVar18 = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar6;
  *(undefined4 *)(iVar9 + 0x34) = uVar17;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x30) = uVar16;
  *(undefined4 *)(iVar9 + 0x34) = uVar12;
  local_34 = s_cState_Reaction_001a8b0c;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_38);
  iVar9 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0xa8);
  uVar6 = *(undefined4 *)(iVar8 + 0xac);
  uVar12 = *(undefined4 *)(iVar8 + 0xb0);
  uVar19 = *(undefined8 *)(iVar8 + 0x24);
  *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar8 + 0xa4);
  *(undefined4 *)(iVar9 + 0x3c) = uVar16;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x38) = uVar6;
  *(undefined4 *)(iVar9 + 0x3c) = uVar12;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 0x38) = (int)uVar19;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Die_001a8b1c;
  local_38 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_38);
  iVar4 = puVar3[6];
  uVar6 = *(undefined4 *)(iVar8 + 0xb8);
  uVar12 = *(undefined4 *)(iVar8 + 0xbc);
  uVar16 = *(undefined4 *)(iVar8 + 0xc0);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar8 + 0xb4);
  *(undefined4 *)(iVar4 + 0x44) = uVar6;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x40) = uVar12;
  *(undefined4 *)(iVar4 + 0x44) = uVar16;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x40) = (int)uVar19;
  *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar19 >> 0x20);
  func_0065A840(puVar3,0);
  puVar3[-200] = puVar3[-200] | 0x8000;
  func_002AED68((int)puVar14,0xc);
  func_002AF5FC((int)puVar14,0xc,-1);
  *(undefined1 *)((int)puVar3 + -0x13f) = 0xb;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_004FC218((int)puVar14,'\a',-1,0x7fff);
  func_004FBA18((int)puVar14,9,10,-1,0x20,0,0x7fff,DAT_001a8b2c,DAT_001a8b28);
  return puVar14;
}

