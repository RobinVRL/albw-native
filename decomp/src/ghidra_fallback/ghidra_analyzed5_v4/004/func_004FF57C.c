#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
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
extern int func_00588BE4(int param_1);
extern int func_0066AF2C(undefined4 *param_1,undefined1 param_2);
extern float fRam004ff960;
extern float fRam004ffbd0;
extern float fRam004ffbd4;
extern float fRam004ffbdc;
extern int iRam004ff96c;
extern undefined4 uRam004ff95c;
extern undefined4 uRam004ffbcc;
extern int *piRam004ff964;
extern undefined4 *puRam004ff968;
extern undefined4 *puRam004ffbd8;
extern uint *DAT_004ff934;
extern int DAT_004ff938;
extern undefined4 DAT_004ff93c;
extern undefined4 DAT_004ff940;
extern uint DAT_004ff944;
extern int DAT_004ff948;
extern undefined4 DAT_004ff94c;
extern int DAT_004ff950;
extern char s_cState_Appear_004ff98c[];
extern char s_cState_Die_004ffbc0[];
extern char s_cState_Hide_004ff970[];
extern char s_cState_Reaction_004ffbb0[];
extern char s_cState_Ready_004ff97c[];
extern char s_cState_Wait_004ff99c[];
extern char s_cState_Walk_004ffba4[];

// USA 004FF57C <- EU 004FF554 (Ghidra, non-matching)
// GLOBAL DAT_004ff934 uint *
// GLOBAL DAT_004ff938 int
// GLOBAL DAT_004ff93c undefined4
// GLOBAL DAT_004ff940 undefined4
// GLOBAL DAT_004ff944 uint
// GLOBAL DAT_004ff948 int
// GLOBAL DAT_004ff94c undefined4
// GLOBAL DAT_004ff950 int
// GLOBAL UNK_004ff95c uint
// GLOBAL UNK_004ff960 float
// GLOBAL UNK_004ff964 int *
// GLOBAL UNK_004ff968 undefined *
// GLOBAL UNK_004ff96c int
// GLOBAL UNK_004ffbcc uint
// GLOBAL UNK_004ffbd0 float
// GLOBAL UNK_004ffbd4 float
// GLOBAL UNK_004ffbd8 undefined4 *
// GLOBAL UNK_004ffbdc float
// GLOBAL s_cState_Appear_004ff98c string
// GLOBAL s_cState_Die_004ffbc0 string
// GLOBAL s_cState_Hide_004ff970 string
// GLOBAL s_cState_Reaction_004ffbb0 string
// GLOBAL s_cState_Ready_004ff97c string
// GLOBAL s_cState_Wait_004ff99c string
// GLOBAL s_cState_Walk_004ffba4 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_004FF57C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fparam_0;
  ulonglong uVar20;
  float fparam_0_00;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define uStack_40 (*(uint *)(albw_frame + 0x10))
  #define pcStack_3c (*(char * *)(albw_frame + 0x14))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puVar11 = objStack_50;
  puStack_2c = param_1;
  local_28 = param_2;
  piVar2 = func_004FD464(param_1,param_2,DAT_004ff934);
  iVar7 = DAT_004ff938;
  *piVar2 = DAT_004ff938;
  piVar2[200] = iVar7 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  uVar10 = DAT_004ff93c;
  puVar3[10] = 0;
  uVar12 = DAT_004ff940;
  puVar3[0xc] = uVar10;
  puVar3[0xd] = uVar12;
  puVar3[0xb] = 0;
  puVar3[0xf] = uVar10;
  iVar7 = DAT_004ff948;
  puVar3[0x10] = uVar12;
  puVar3[0xe] = 0;
  uVar10 = *(undefined4 *)(iVar7 + 8);
  uVar12 = *(undefined4 *)(iVar7 + 0xc);
  puVar3[0x12] = puVar3 + -0x22f;
  puVar3[0x13] = uVar10;
  puVar3[0x14] = uVar12;
  uVar20 = (ulonglong)DAT_004ff944;
  puVar3[0x11] = DAT_004ff94c;
  puVar14 = puVar3 + -0x22f;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  puVar3[-0x134] = puVar3 + 0x11;
  func_004FB344((int)puVar14,8);
  iVar4 = DAT_004ff950;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar4 + uVar15 * 8));
    fparam_0 = ALBW_AS_F32(uVar20);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 8);
  func_004FB468((int)puVar14);
  pfVar13 = (float *)0x0;
  func_004FABDC((int)puVar14,0,0xffffffff,0);
  puVar3[-200] = puVar3[-200] & 0xfffffdff;
  func_004FB30C((int)puVar14,1);
  uVar15 = uRam004ff95c;
  objStack_50[1] = (int)"Popo"; /* EU 004FF954 */
  objStack_50[0] = uRam004ff95c;
  func_004FAC70((int)puVar14,0,(int *)objStack_50);
  func_004FB408((int)puVar14);
  fparam_0_00 = fRam004ff960;
  func_004FB4C4((int)puVar14,fRam004ff960);
  iVar4 = func_00588BE4((int)puVar14);
  if (iVar4 == *piRam004ff964) {
    func_004FB070((int)puVar14,fparam_0);
  }
  else {
    func_004FB070((int)puVar14,fparam_0_00);
  }
  func_004FACD4((int)puVar14,(int *)0x1,puVar11,(int *)pfVar13);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  puVar3[5] = puVar14;
  *(undefined1 *)((int)puVar3 + 6) = 7;
  iVar4 = func_0010BA78(0x70);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 7;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar7 + 0x94);
    iVar8 = iVar8 + -1;
    puVar5[2] = *(undefined4 *)(iVar7 + 0x90);
    puVar5[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar7 + 0x94);
    puVar5[4] = *(undefined4 *)(iVar7 + 0x90);
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar16 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar3[8] = puVar5;
  if (uVar16 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar7 + 0x24);
      *puVar5 = *(undefined4 *)(iVar7 + 0x20);
      puVar5[1] = uVar10;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar16 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = *(undefined4 *)(iVar7 + 0x24);
      puVar6[2] = *(undefined4 *)(iVar7 + 0x20);
      puVar6[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar7 + 0x24);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x20);
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 7;
    iVar4 = func_00100118((int)(puVar5 + 2),puRam004ff968,0x24,7);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 7;
  }
  iVar4 = iRam004ff96c;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar4 + (int)puVar14) = 7;
  pcStack_3c = s_cState_Hide_004ff970;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,0,(int *)&uStack_40);
  puVar5 = (undefined4 *)puVar3[6];
  uVar17 = *(undefined4 *)(iVar7 + 0x14);
  uVar10 = *(undefined4 *)(iVar7 + 0x18);
  uVar12 = *(undefined4 *)(iVar7 + 0x1c);
  uVar21 = *(undefined8 *)(iVar7 + 0x20);
  *puVar5 = *(undefined4 *)(iVar7 + 0x10);
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar10;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = (int)uVar21;
  puVar5[1] = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_3c = s_cState_Ready_004ff97c;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,1,(int *)&uStack_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x30);
  uVar17 = *(undefined4 *)(iVar7 + 0x34);
  uVar12 = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar17;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 8) = (int)uVar21;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_3c = s_cState_Appear_004ff98c;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,2,(int *)&uStack_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x3c);
  uVar12 = *(undefined4 *)(iVar7 + 0x40);
  uVar17 = *(undefined4 *)(iVar7 + 0x44);
  uVar18 = *(undefined4 *)(iVar7 + 0x48);
  uVar19 = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(iVar4 + 0x14) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar12;
  *(undefined4 *)(iVar4 + 0x14) = uVar17;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar18;
  *(undefined4 *)(iVar4 + 0x14) = uVar19;
  pcStack_3c = s_cState_Wait_004ff99c;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,3,(int *)&uStack_40);
  uVar10 = *(undefined4 *)(iVar7 + 0x54);
  uVar17 = *(undefined4 *)(iVar7 + 0x58);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x5c);
  uVar21 = *(undefined8 *)(iVar7 + 0x20);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar17;
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x18) = (int)uVar21;
  *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_3c = s_cState_Walk_004ffba4;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,4,(int *)&uStack_40);
  iVar4 = puVar3[6];
  uVar17 = *(undefined4 *)(iVar7 + 100);
  uVar10 = *(undefined4 *)(iVar7 + 0x68);
  uVar12 = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar4 + 0x24) = uVar17;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar10;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x20) = (int)uVar21;
  *(int *)(iVar4 + 0x24) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_3c = s_cState_Reaction_004ffbb0;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,5,(int *)&uStack_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x78);
  uVar17 = *(undefined4 *)(iVar7 + 0x7c);
  uVar12 = *(undefined4 *)(iVar7 + 0x74);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar7 + 0x70);
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x28) = uVar10;
  *(undefined4 *)(iVar4 + 0x2c) = uVar17;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x28) = (int)uVar21;
  *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
  pcStack_3c = s_cState_Die_004ffbc0;
  uStack_40 = uVar15;
  func_0010BEC4((int)puVar3,6,(int *)&uStack_40);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x84);
  uVar10 = *(undefined4 *)(iVar7 + 0x88);
  uVar17 = *(undefined4 *)(iVar7 + 0x8c);
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar7 + 0x80);
  *(undefined4 *)(iVar4 + 0x34) = uVar12;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar10;
  *(undefined4 *)(iVar7 + 0x34) = uVar17;
  uVar15 = uRam004ffbcc;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x30) = (int)uVar21;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
  puVar3[-200] = puVar3[-200] | 0x8800;
  uVar9 = (ushort)uVar15;
  func_002B1FB4((int)puVar14,-1,uVar9);
  func_002B1440((int)puVar14,-1,uVar9,0);
  objStack_50[2] = uVar15;
  objStack_50[0] = 0xf;
  objStack_50[1] = 0;
  func_004FBA18((int)puVar14,6,7,-1,0xf,0,uVar9,fRam004ffbd4,fRam004ffbd0);
  func_004F8864((int)puVar14,puRam004ffbd8,0,fRam004ffbdc);
  func_002AF5FC((int)puVar14,3,-1);
  *(undefined1 *)((int)puVar3 + -0x13f) = 4;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_002AED68((int)puVar14,3);
  if (*(short *)((int)local_28 + 0x2a) == 0) {
    func_0066AF2C(puVar3,3);
  }
  else {
    func_0066AF2C(puVar3,0);
  }
  return puVar14;
}

