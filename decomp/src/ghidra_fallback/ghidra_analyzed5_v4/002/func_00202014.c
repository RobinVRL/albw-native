#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A468(int param_1);
extern int func_0058A7D4(void);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float fRam00202374;
extern float fRam00202378;
extern float fRam0020237c;
extern float fRam00202380;
extern float fRam00202a58;
extern float fRam00202a5c;
extern float fRam00202be8;
extern float fRam00202bec;
extern float fRam00202bf0;
extern float fRam00202bfc;
extern int iRam002029a0;
extern undefined4 uRam0020235c;
extern undefined4 uRam00202a54;
extern undefined4 uRam00202c00;
extern undefined4 uRam00202c04;
extern int *piRam00202358;
extern int *piRam00202360;
extern int *piRam00202994;
extern int *piRam00202998;
extern undefined4 *puRam0020299c;
extern undefined4 *puRam00202be4;
extern undefined4 *puRam00202bf4;
extern int DAT_0020232c;
extern int DAT_00202330;
extern int DAT_00202334;
extern undefined4 DAT_00202338;
extern int DAT_0020233c;
extern undefined4 DAT_00202340;
extern int *DAT_00202344;
extern int *DAT_00202348;
extern undefined4 *DAT_0020234c;
extern undefined4 DAT_00202350;
extern int DAT_00202354;
extern undefined DAT_00202bf8;
extern char s_cState_After_002029f0[];
extern char s_cState_Appear2_002029c0[];
extern char s_cState_Appear_002029b0[];
extern char s_cState_Check_00202a1c[];
extern char s_cState_Die_00202a10[];
extern char s_cState_PostAppeal_00202a40[];
extern char s_cState_PreAppeal_00202a2c[];
extern char s_cState_Reaction_00202a00[];
extern char s_cState_Ready_002029d0[];
extern char s_cState_Spark_002029e0[];
extern char s_cState_Walk_002029a4[];
extern undefined4 _DAT_00202bf8;

// USA 00202014 <- EU 00202014 (Ghidra, non-matching)
// GLOBAL DAT_0020232c int
// GLOBAL DAT_00202330 int
// GLOBAL DAT_00202334 int
// GLOBAL DAT_00202338 undefined4
// GLOBAL DAT_0020233c int
// GLOBAL DAT_00202340 undefined4
// GLOBAL DAT_00202344 int *
// GLOBAL DAT_00202348 int *
// GLOBAL DAT_0020234c undefined4 *
// GLOBAL DAT_00202350 undefined4
// GLOBAL DAT_00202354 int
// GLOBAL DAT_00202bf8 undefined
// GLOBAL UNK_00202358 int *
// GLOBAL UNK_0020235c uint
// GLOBAL UNK_00202360 int *
// GLOBAL UNK_00202374 float
// GLOBAL UNK_00202378 float
// GLOBAL UNK_0020237c float
// GLOBAL UNK_00202380 float
// GLOBAL UNK_00202994 int *
// GLOBAL UNK_00202998 int *
// GLOBAL UNK_0020299c undefined *
// GLOBAL UNK_002029a0 int
// GLOBAL UNK_00202a54 uint
// GLOBAL UNK_00202a58 float
// GLOBAL UNK_00202a5c float
// GLOBAL UNK_00202be4 undefined4 *
// GLOBAL UNK_00202be8 float
// GLOBAL UNK_00202bec float
// GLOBAL UNK_00202bf0 float
// GLOBAL UNK_00202bf4 undefined4 *
// GLOBAL UNK_00202bfc float
// GLOBAL UNK_00202c00 undefined4
// GLOBAL UNK_00202c04 undefined4
// GLOBAL s_cState_After_002029f0 string
// GLOBAL s_cState_Appear2_002029c0 string
// GLOBAL s_cState_Appear_002029b0 string
// GLOBAL s_cState_Check_00202a1c string
// GLOBAL s_cState_Die_00202a10 string
// GLOBAL s_cState_PostAppeal_00202a40 string
// GLOBAL s_cState_PreAppeal_00202a2c string
// GLOBAL s_cState_Reaction_00202a00 string
// GLOBAL s_cState_Ready_002029d0 string
// GLOBAL s_cState_Spark_002029e0 string
// GLOBAL s_cState_Walk_002029a4 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_00202014(undefined4 *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint in_fpscr;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float fVar24;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define uStack_40 (*(uint *)(albw_frame + 0x10))
  #define pcStack_3c (*(char * *)(albw_frame + 0x14))
  piVar4 = func_004FD464(param_1,param_2,param_3);
  iVar13 = DAT_00202334;
  iVar10 = DAT_00202330;
  iVar6 = DAT_0020232c;
  *piVar4 = DAT_0020232c;
  piVar4[200] = iVar6 + 0x84;
  piVar4[0x230] = iVar10;
  piVar4[0x231] = iVar13;
  piVar4[0x22f] = 0;
  piVar4[0x233] = iVar10;
  uVar19 = DAT_00202338;
  piVar4[0x234] = iVar13;
  piVar4[0x232] = 0;
  piVar4[0x235] = 0;
  piVar4[0x236] = 0;
  puVar5 = func_0010A794(piVar4 + 0x237);
  iVar6 = DAT_0020233c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar15 = *(undefined4 *)(iVar6 + 0x14);
  puVar5[0xc] = *(undefined4 *)(iVar6 + 0x18);
  puVar5[9] = DAT_00202340;
  puVar5[10] = puVar5 + -0x237;
  puVar5[0xb] = uVar15;
  puVar18 = puVar5 + -0x237;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar5[0x10] = iVar10;
  puVar5[0x11] = iVar13;
  puVar5[0xf] = 0;
  *(bool *)(puVar5 + 0x15) = *(short *)((int)param_2 + 0x2e) != 0;
  puVar5[0x16] = 1;
  puVar5[0x17] = 0;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  *(undefined1 *)((int)puVar5 + 0x61) = 0;
  iVar6 = func_00588BE4((int)puVar18);
  piVar3 = DAT_00202348;
  piVar4 = DAT_00202344;
  if ((iVar6 == *DAT_00202344) && (*(char *)(*DAT_00202348 + 0x18) == '\x14')) {
    iVar6 = func_0058A468((int)puVar18);
    func_004FC78C((int)puVar18,(short)(iVar6 << 1));
  }
  uVar15 = *DAT_0020234c;
  uVar16 = DAT_0020234c[1];
  puVar5[10] = puVar18;
  puVar5[0xb] = uVar15;
  puVar5[0xc] = uVar16;
  puVar5[-0x13c] = puVar5 + 9;
  if (*(char *)(puVar5 + 0x15) == '\0') {
    puVar5[-0xda] = DAT_00202350;
  }
  iVar6 = func_0054DDF4((int)puVar18,1);
  puVar5[0xd] = iVar6;
  iVar6 = func_00588BE4((int)puVar18);
  if (iVar6 == *piVar4) {
    uVar7 = puVar5[-0x13d];
  }
  else {
    puVar8 = (uint *)func_0058A7D4();
    uVar7 = func_00111A64(puVar8);
  }
  puVar5[-2] = uVar7;
  puVar5[-1] = uVar7;
  func_004FB344((int)puVar18,9);
  iVar6 = DAT_00202354;
  uVar7 = 0;
  do {
    func_004FACA4((int)puVar18,uVar7,(int *)(iVar6 + uVar7 * 8));
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 9);
  func_004FB468((int)puVar18);
  pfVar17 = (float *)0x0;
  func_004FABDC((int)puVar18,0,0xffffffff,0);
  func_004FB30C((int)puVar18,1);
  iVar6 = func_00588BE4((int)puVar18);
  uVar7 = uRam0020235c;
  if ((iVar6 == *piRam00202358) || (iVar6 = func_00588BE4((int)puVar18), iVar6 == *piRam00202360)) {
    objStack_50[1] = (int)"Biri"; /* EU 00202364 */
    objStack_50[0] = uVar7;
    func_004FAC70((int)puVar18,0,(int *)objStack_50);
  }
  else {
    objStack_50[1] = (int)"Bari"; /* EU 0020236C */
    objStack_50[0] = uVar7;
    func_004FAC70((int)puVar18,0,(int *)objStack_50);
  }
  func_004FB408((int)puVar18);
  uVar22 = CONCAT44(fRam00202374,uVar19);
  func_004FB4C4((int)puVar18,fRam00202374);
  iVar6 = func_00588BE4((int)puVar18);
  if (iVar6 == *piRam00202358) {
LAB_00202af4:
    func_004FB070((int)puVar18,ALBW_AS_F32(((ulonglong)uVar22 >> 0x20)));
    goto LAB_00202448;
  }
  iVar6 = func_00588BE4((int)puVar18);
  fVar20 = fRam00202378;
  if (iVar6 == *piRam00202360) {
    if (*(char *)(*piVar3 + 0x18) == '\x14') {
LAB_002023ec:
      func_004FB070((int)puVar18,fVar20);
      goto LAB_00202448;
    }
LAB_0020243c:
    func_004FB070((int)puVar18,ALBW_AS_F32(uVar22));
  }
  else {
    iVar6 = func_00588BE4((int)puVar18);
    fVar24 = fRam0020237c;
    if (iVar6 == *piVar4) {
      if (*(char *)(*piVar3 + 0x18) == '\x14') {
        func_004FB070((int)puVar18,fRam00202380);
        goto LAB_00202448;
      }
    }
    else {
      iVar6 = func_00588BE4((int)puVar18);
      piVar3 = piRam00202994;
      if (iVar6 != *piRam00202994) {
        iVar6 = func_00588BE4((int)puVar18);
        if (((iVar6 == *piRam00202998) || (iVar6 = func_00588BE4((int)puVar18), iVar6 == *piVar3))
           && ((*(ushort *)((int)puVar5 + -0x8ae) & 0xff) == 0)) goto LAB_00202af4;
        goto LAB_0020243c;
      }
      iVar6 = func_00588BE4((int)puVar18);
      if (((iVar6 == *piRam00202998) || (iVar6 = func_00588BE4((int)puVar18), iVar6 == *piVar3)) &&
         ((*(ushort *)((int)puVar5 + -0x8ae) & 0xff) == 0)) goto LAB_002023ec;
    }
    func_004FB070((int)puVar18,fVar24);
  }
LAB_00202448:
  puVar8 = (uint *)func_0058A7D4();
  uVar9 = func_00111A64(puVar8);
  iVar6 = ((int)((ulonglong)uVar9 * 2 >> 0x20) + 2) * 0x3c;
  puVar5[-7] = iVar6;
  if (iVar6 == 0) {
    puVar5[-6] = (int)((ulonglong)uVar22 >> 0x20);
  }
  else {
    fVar20 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    puVar5[-6] = ALBW_AS_F32(uVar22) / fVar20;
  }
  puVar5[-8] = 0;
  func_004F5BD8((int)puVar18,(uint *)0x0,(int **)0x0,pfVar17);
  *(uint *)(puVar5[-0x12e] + 0x2c) = *(uint *)(puVar5[-0x12e] + 0x2c) | 0x40000;
  *(undefined1 *)((int)puVar5 + 6) = 0xb;
  puVar5[5] = puVar18;
  iVar10 = func_0010BA78(0xb0);
  puVar5[6] = iVar10;
  iVar6 = DAT_0020233c;
  puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar13 = 0xb;
  puVar11 = (undefined4 *)(iVar10 + -8);
  do {
    uVar19 = *(undefined4 *)(iVar6 + 0xe0);
    iVar13 = iVar13 + -1;
    puVar11[2] = *(undefined4 *)(iVar6 + 0xdc);
    puVar11[3] = uVar19;
    uVar19 = *(undefined4 *)(iVar6 + 0xe0);
    puVar11[4] = *(undefined4 *)(iVar6 + 0xdc);
    puVar11[5] = uVar19;
    puVar11 = puVar11 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar9 = (uint)bVar1;
  puVar11 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar5[8] = puVar11;
  if (uVar9 != 0) {
    puVar12 = puVar11 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = *(undefined4 *)(iVar6 + 0x38);
      *puVar11 = *(undefined4 *)(iVar6 + 0x34);
      puVar11[1] = uVar19;
      puVar12 = puVar11;
    }
    for (iVar10 = (int)uVar9 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar19 = *(undefined4 *)(iVar6 + 0x38);
      puVar12[2] = *(undefined4 *)(iVar6 + 0x34);
      puVar12[3] = uVar19;
      uVar19 = *(undefined4 *)(iVar6 + 0x38);
      puVar12[4] = *(undefined4 *)(iVar6 + 0x34);
      puVar12[5] = uVar19;
      puVar12 = puVar12 + 4;
    }
  }
  puVar11 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar10 = 0;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = 0x24;
    puVar11[1] = 0xb;
    iVar10 = func_00100118((int)(puVar11 + 2),puRam0020299c,0x24,0xb);
  }
  if (iVar10 != 0) {
    puVar5[3] = iVar10;
    puVar5[2] = 0xb;
  }
  iVar10 = iRam002029a0;
  puVar5[-0x162] = puVar5;
  *(undefined2 *)(iVar10 + (int)puVar18) = 0xb;
  pcStack_3c = s_cState_Walk_002029a4;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,0,(int *)&uStack_40);
  puVar11 = (undefined4 *)puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x2c);
  uVar23 = *(undefined4 *)(iVar6 + 0x34);
  uVar16 = *(undefined4 *)(iVar6 + 0x30);
  uVar21 = *(undefined4 *)(iVar6 + 0x38);
  uVar15 = *(undefined4 *)(iVar6 + 0x28);
  *puVar11 = *(undefined4 *)(iVar6 + 0x24);
  puVar11[1] = uVar15;
  puVar11 = (undefined4 *)puVar5[7];
  *puVar11 = uVar19;
  puVar11[1] = uVar16;
  puVar11 = (undefined4 *)puVar5[8];
  *puVar11 = uVar23;
  puVar11[1] = uVar21;
  pcStack_3c = s_cState_Appear_002029b0;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,1,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x40);
  uVar15 = *(undefined4 *)(iVar6 + 0x44);
  uVar16 = *(undefined4 *)(iVar6 + 0x48);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar6 + 0x3c);
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 8) = uVar15;
  *(undefined4 *)(iVar10 + 0xc) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 8) = uVar23;
  *(undefined4 *)(iVar10 + 0xc) = uVar21;
  pcStack_3c = s_cState_Appear2_002029c0;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,2,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar6 + 0x50);
  uVar16 = *(undefined4 *)(iVar6 + 0x54);
  uVar19 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(iVar10 + 0x14) = uVar15;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar16;
  *(undefined4 *)(iVar10 + 0x14) = uVar19;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar23;
  *(undefined4 *)(iVar10 + 0x14) = uVar21;
  pcStack_3c = s_cState_Ready_002029d0;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,3,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x60);
  uVar15 = *(undefined4 *)(iVar6 + 100);
  uVar16 = *(undefined4 *)(iVar6 + 0x68);
  *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar10 + 0x1c) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar15;
  *(undefined4 *)(iVar10 + 0x1c) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x18) = uVar23;
  *(undefined4 *)(iVar10 + 0x1c) = uVar21;
  pcStack_3c = s_cState_Spark_002029e0;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,4,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x70);
  uVar15 = *(undefined4 *)(iVar6 + 0x74);
  uVar16 = *(undefined4 *)(iVar6 + 0x78);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar6 + 0x6c);
  *(undefined4 *)(iVar10 + 0x24) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x20) = uVar15;
  *(undefined4 *)(iVar10 + 0x24) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x20) = uVar23;
  *(undefined4 *)(iVar10 + 0x24) = uVar21;
  pcStack_3c = s_cState_After_002029f0;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,5,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x80);
  uVar15 = *(undefined4 *)(iVar6 + 0x84);
  uVar16 = *(undefined4 *)(iVar6 + 0x88);
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar6 + 0x7c);
  *(undefined4 *)(iVar10 + 0x2c) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x28) = uVar15;
  *(undefined4 *)(iVar10 + 0x2c) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x28) = uVar23;
  *(undefined4 *)(iVar10 + 0x2c) = uVar21;
  pcStack_3c = s_cState_Reaction_00202a00;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,6,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0x90);
  uVar15 = *(undefined4 *)(iVar6 + 0x94);
  uVar16 = *(undefined4 *)(iVar6 + 0x98);
  *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar6 + 0x8c);
  *(undefined4 *)(iVar10 + 0x34) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x30) = uVar15;
  *(undefined4 *)(iVar10 + 0x34) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x30) = uVar23;
  *(undefined4 *)(iVar10 + 0x34) = uVar21;
  pcStack_3c = s_cState_Die_00202a10;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,7,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar6 + 0xa0);
  uVar19 = *(undefined4 *)(iVar6 + 0xa4);
  uVar16 = *(undefined4 *)(iVar6 + 0xa8);
  *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)(iVar6 + 0x9c);
  *(undefined4 *)(iVar10 + 0x3c) = uVar15;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x38) = uVar19;
  *(undefined4 *)(iVar10 + 0x3c) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x38) = uVar23;
  *(undefined4 *)(iVar10 + 0x3c) = uVar21;
  pcStack_3c = s_cState_Check_00202a1c;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,8,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0xb0);
  uVar15 = *(undefined4 *)(iVar6 + 0xb4);
  uVar16 = *(undefined4 *)(iVar6 + 0xb8);
  *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar6 + 0xac);
  *(undefined4 *)(iVar10 + 0x44) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x40) = uVar15;
  *(undefined4 *)(iVar10 + 0x44) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x40) = uVar23;
  *(undefined4 *)(iVar10 + 0x44) = uVar21;
  pcStack_3c = s_cState_PreAppeal_00202a2c;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,9,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0xc0);
  uVar15 = *(undefined4 *)(iVar6 + 0xc4);
  uVar16 = *(undefined4 *)(iVar6 + 200);
  *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(iVar6 + 0xbc);
  *(undefined4 *)(iVar10 + 0x4c) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x48) = uVar15;
  *(undefined4 *)(iVar10 + 0x4c) = uVar16;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x48) = uVar23;
  *(undefined4 *)(iVar10 + 0x4c) = uVar21;
  pcStack_3c = s_cState_PostAppeal_00202a40;
  uStack_40 = uVar7;
  func_0010BEC4((int)puVar5,10,(int *)&uStack_40);
  iVar10 = puVar5[6];
  uVar19 = *(undefined4 *)(iVar6 + 0xd4);
  uVar15 = *(undefined4 *)(iVar6 + 0xd8);
  uVar16 = *(undefined4 *)(iVar6 + 0xd0);
  *(undefined4 *)(iVar10 + 0x50) = *(undefined4 *)(iVar6 + 0xcc);
  *(undefined4 *)(iVar10 + 0x54) = uVar16;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x50) = uVar19;
  *(undefined4 *)(iVar6 + 0x54) = uVar15;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x50) = uVar23;
  *(undefined4 *)(iVar6 + 0x54) = uVar21;
  uVar7 = puVar5[-0xd0];
  if ((short)param_2[0xb] == 0) {
    uVar7 = uVar7 | 0x8000;
    puVar5[-0xd0] = uVar7;
  }
  puVar5[-0xd0] = uVar7 | 0x800;
  func_004F87F8((int)puVar18,1);
  uVar7 = uRam00202a54;
  uVar14 = (ushort)uRam00202a54;
  func_002B1FB4((int)puVar18,-1,uVar14);
  func_002B1440((int)puVar18,-1,uVar14,0);
  *(undefined1 *)((int)puVar5 + -0x15f) = 7;
  *(undefined1 *)((int)puVar5 + -0x15e) = 0xff;
  *(undefined1 *)((int)puVar5 + -0x15d) = 0;
  objStack_50[2] = uVar7;
  objStack_50[0] = 0x17;
  objStack_50[1] = 0;
  func_004FBA18((int)puVar18,5,6,-1,0x17,0,uVar14,fRam00202a5c,fRam00202a58);
  iVar6 = func_00588BE4((int)puVar18);
  if ((iVar6 == *piRam00202358) || (iVar6 = func_00588BE4((int)puVar18), iVar6 == *piRam00202360)) {
    puVar5[-0xd0] = puVar5[-0xd0] | 0x400000;
  }
  uVar19 = puVar5[-0x124];
  uVar15 = puVar5[-0x123];
  iVar6 = func_00588BE4((int)puVar18);
  if (iVar6 == *piVar4) {
    func_004F8864((int)puVar18,puRam00202be4,0,fRam00202be8);
    fVar20 = fRam00202bec;
  }
  else {
    iVar6 = func_00588BE4((int)puVar18);
    if ((iVar6 == *piRam00202998) ||
       (iVar6 = func_00588BE4((int)puVar18), fVar20 = fRam00202bf0, iVar6 == *piRam00202994)) {
      func_004F8864((int)puVar18,puRam00202bf4,0,ALBW_AS_F32(_DAT_00202bf8));
      fVar20 = fRam00202bfc;
    }
  }
  puVar5[-0x112] = uVar19;
  puVar5[-0x111] = uVar15;
  puVar5[-0x110] = ALBW_AS_U32(fVar20);
  puVar5[-0x124] = uVar19;
  puVar5[-0x123] = uVar15;
  puVar5[-0x122] = ALBW_AS_U32(fVar20);
  if (*(char *)(puVar5 + 0x15) == '\0') {
    func_0065D120(puVar5,0,fVar20);
  }
  else {
    func_0065D120(puVar5,1,fVar20);
  }
  puVar5[-0xd0] = puVar5[-0xd0] | 0x20000000;
  sVar2 = 0;
  if (*(char *)(puVar5 + 0x15) != '\0') {
    sVar2 = (short)param_2[0xb];
  }
  uVar19 = uRam00202c00;
  if (*(char *)(puVar5 + 0x15) != '\0' && sVar2 != 0) {
    uVar19 = uRam00202c04;
  }
  puVar5[-0x104] = uVar19;
  return puVar18;
}

