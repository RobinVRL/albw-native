#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002E4DE8(int param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern float fRam002e58b8;
extern float fRam002e5cd4;
extern float fRam002e5cd8;
extern int iRam002e58d4;
extern undefined4 uRam002e58cc;
extern undefined4 uRam002e5cc8;
extern undefined4 uRam002e5cd0;
extern int *piRam002e5ccc;
extern undefined4 *puRam002e58d0;
extern uint *DAT_002e5898;
extern int DAT_002e589c;
extern uint DAT_002e58a0;
extern undefined4 DAT_002e58a4;
extern undefined4 DAT_002e58a8;
extern int DAT_002e58ac;
extern undefined4 DAT_002e58b0;
extern int DAT_002e58b4;
extern char s_Big_Ice_Gimos_002e58bc[];
extern char s_cState_Die_002e5cbc[];
extern char s_cState_Fall_002e5900[];
extern char s_cState_Fixed_002e5c90[];
extern char s_cState_Jump_002e58f4[];
extern char s_cState_Melt_002e5ca0[];
extern char s_cState_Reaction_002e5cac[];
extern char s_cState_StartUp_002e58e4[];
extern char s_cState_Store_002e5c80[];
extern char s_cState_Wait_002e58d8[];

// USA 002E5460 <- EU 002E543C (Ghidra, non-matching)
// GLOBAL DAT_002e5898 uint *
// GLOBAL DAT_002e589c int
// GLOBAL DAT_002e58a0 uint
// GLOBAL DAT_002e58a4 undefined4
// GLOBAL DAT_002e58a8 undefined4
// GLOBAL DAT_002e58ac int
// GLOBAL DAT_002e58b0 undefined4
// GLOBAL DAT_002e58b4 int
// GLOBAL UNK_002e58b8 float
// GLOBAL UNK_002e58cc uint
// GLOBAL UNK_002e58d0 undefined *
// GLOBAL UNK_002e58d4 int
// GLOBAL UNK_002e5cc8 uint
// GLOBAL UNK_002e5ccc int *
// GLOBAL UNK_002e5cd0 uint
// GLOBAL UNK_002e5cd4 float
// GLOBAL UNK_002e5cd8 float
// GLOBAL s_Big_Ice_Gimos_002e58bc string
// GLOBAL s_cState_Die_002e5cbc string
// GLOBAL s_cState_Fall_002e5900 string
// GLOBAL s_cState_Fixed_002e5c90 string
// GLOBAL s_cState_Jump_002e58f4 string
// GLOBAL s_cState_Melt_002e5ca0 string
// GLOBAL s_cState_Reaction_002e5cac string
// GLOBAL s_cState_StartUp_002e58e4 string
// GLOBAL s_cState_Store_002e5c80 string
// GLOBAL s_cState_Wait_002e58d8 string

/* WARNING: Variable defined which should be unmapped: objStack_68 */

int func_002E5460(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  ushort uVar13;
  uint *puVar14;
  undefined4 uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint in_fpscr;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fparam_0;
  longlong lVar24;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define uStack_58 (*(uint *)(albw_frame + 0x18))
  #define pcStack_54 (*(char * *)(albw_frame + 0x1c))
  #define afStack_44 ((float *)(albw_frame + 0x2c))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x34))
  piVar4 = func_004FD464(param_1,param_2,DAT_002e5898);
  iVar5 = DAT_002e589c;
  piVar4[200] = DAT_002e589c + 0x84;
  *piVar4 = iVar5;
  iVar5 = func_0054D964((int)piVar4,1);
  piVar4[0x22f] = iVar5;
  iVar5 = func_0054D964((int)piVar4,2);
  piVar4[0x230] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar4[0x231] = (int)puVar7;
  puVar7 = (undefined4 *)func_0010BAB4(100);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    iVar5 = func_004EE484(puVar7);
  }
  piVar4[0x232] = iVar5;
  puVar7 = func_0010A794(piVar4 + 0x233);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  iVar5 = func_0054DDF4((int)(puVar7 + -0x233),1);
  puVar7[9] = iVar5;
  iVar5 = func_0054DDF4((int)(puVar7 + -0x233),3);
  puVar7[10] = iVar5;
  uVar17 = DAT_002e58a0;
  lVar24 = (ulonglong)DAT_002e58a0 << 0x20;
  puVar7[0xb] = 0;
  uVar20 = DAT_002e58a4;
  puVar7[0xc] = 0;
  puVar7[0xd] = uVar17;
  puVar7[0xe] = uVar20;
  iVar5 = DAT_002e58ac;
  uVar20 = DAT_002e58a8;
  puVar7[0xf] = puVar7[-0x13e];
  puVar7[0x10] = uVar20;
  puVar6 = puVar7 + -0x233;
  uVar20 = ALBW_AS_U32(VectorSignedToFloat((int)(short)param_2[0xb],(byte)(in_fpscr >> 0x15) & 3));
  puVar7[0x11] = uVar20;
  *(undefined2 *)(puVar7 + 0x12) = 0;
  *(undefined1 *)((int)puVar7 + 0x4a) = 0;
  uVar20 = *(undefined4 *)(iVar5 + 4);
  uVar15 = *(undefined4 *)(iVar5 + 8);
  puVar7[0x14] = puVar6;
  puVar7[0x15] = uVar20;
  puVar7[0x16] = uVar15;
  uVar20 = DAT_002e58b0;
  puVar7[0x13] = DAT_002e58b0;
  uVar15 = *(undefined4 *)(iVar5 + 0xc);
  uVar19 = *(undefined4 *)(iVar5 + 0x10);
  puVar7[0x17] = uVar20;
  puVar7[0x18] = puVar6;
  puVar7[0x19] = uVar15;
  puVar7[0x1a] = uVar19;
  uVar15 = *(undefined4 *)(iVar5 + 0x14);
  local_3c = puVar7 + 0x1b;
  uVar19 = *(undefined4 *)(iVar5 + 0x18);
  puVar7[0x1b] = uVar20;
  puVar7[0x1c] = puVar6;
  puVar7[0x1d] = uVar15;
  puVar7[0x1e] = uVar19;
  bVar3 = func_00588BF0((int)puVar6,1);
  if (bVar3) {
    *(undefined1 *)((int)puVar7 + -0x5f5) = 1;
  }
  else {
    func_004FB344((int)puVar6,5);
    iVar8 = DAT_002e58b4;
    uVar17 = 0;
    do {
      func_004FACA4((int)puVar6,uVar17,(int *)(iVar8 + uVar17 * 8));
      fVar21 = ALBW_AS_F32(((ulonglong)lVar24 >> 0x20));
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < 5);
    func_004FB468((int)puVar6);
    piVar4 = (int *)0x0;
    func_004FABDC((int)puVar6,0,0xffffffff,0);
    fparam_0 = fRam002e58b8;
    func_004FB0A4((int)puVar6,fRam002e58b8);
    func_004FB4E0((int)puVar6,fVar21);
    func_004FB30C((int)puVar6,1);
    uVar17 = uRam002e58cc;
    objStack_68[1] = (uint)s_Big_Ice_Gimos_002e58bc;
    puVar14 = objStack_68;
    objStack_68[0] = uRam002e58cc;
    func_004FAC70((int)puVar6,0,(int *)puVar14);
    func_004FB408((int)puVar6);
    func_004FB070((int)puVar6,fparam_0);
    func_004FB4C4((int)puVar6,fparam_0);
    func_004FACD4((int)puVar6,(int *)0x0,puVar14,piVar4);
    puVar7[5] = puVar6;
    *(undefined1 *)((int)puVar7 + 6) = 9;
    iVar8 = func_0010BA78(0x90);
    puVar7[6] = iVar8;
    puVar7[7] = iVar8 + (uint)*(byte *)((int)puVar7 + 6) * 8;
    iVar12 = 9;
    puVar9 = (undefined4 *)(iVar8 + -8);
    do {
      uVar20 = *(undefined4 *)(iVar5 + 0xe0);
      iVar12 = iVar12 + -1;
      puVar9[2] = *(undefined4 *)(iVar5 + 0xdc);
      puVar9[3] = uVar20;
      uVar20 = *(undefined4 *)(iVar5 + 0xe0);
      puVar9[4] = *(undefined4 *)(iVar5 + 0xdc);
      puVar9[5] = uVar20;
      puVar9 = puVar9 + 4;
    } while (iVar12 != 0);
    bVar1 = *(byte *)((int)puVar7 + 6);
    uVar18 = (uint)bVar1;
    puVar9 = (undefined4 *)func_0010BA78(uVar18 << 3);
    puVar7[8] = puVar9;
    if (uVar18 != 0) {
      puVar10 = puVar9 + -2;
      if ((bVar1 & 1) != 0) {
        uVar20 = *(undefined4 *)(iVar5 + 0x90);
        *puVar9 = *(undefined4 *)(iVar5 + 0x8c);
        puVar9[1] = uVar20;
        puVar10 = puVar9;
      }
      for (iVar8 = (int)uVar18 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar20 = *(undefined4 *)(iVar5 + 0x90);
        puVar10[2] = *(undefined4 *)(iVar5 + 0x8c);
        puVar10[3] = uVar20;
        uVar20 = *(undefined4 *)(iVar5 + 0x90);
        puVar10[4] = *(undefined4 *)(iVar5 + 0x8c);
        puVar10[5] = uVar20;
        puVar10 = puVar10 + 4;
      }
    }
    puVar9 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
    iVar8 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0x24;
      puVar9[1] = 9;
      iVar8 = func_00100118((int)(puVar9 + 2),puRam002e58d0,0x24,9);
    }
    if (iVar8 != 0) {
      puVar7[3] = iVar8;
      puVar7[2] = 9;
    }
    iVar8 = iRam002e58d4;
    puVar7[-0x15e] = puVar7;
    *(undefined2 *)(iVar8 + (int)puVar6) = 9;
    pcStack_54 = s_cState_Wait_002e58d8;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,0,(int *)&uStack_58);
    puVar9 = (undefined4 *)puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0x20);
    uVar15 = *(undefined4 *)(iVar5 + 0x24);
    uVar19 = *(undefined4 *)(iVar5 + 0x28);
    uVar22 = *(undefined4 *)(iVar5 + 0x2c);
    uVar23 = *(undefined4 *)(iVar5 + 0x30);
    *puVar9 = *(undefined4 *)(iVar5 + 0x1c);
    puVar9[1] = uVar20;
    puVar9 = (undefined4 *)puVar7[7];
    *puVar9 = uVar15;
    puVar9[1] = uVar19;
    puVar9 = (undefined4 *)puVar7[8];
    *puVar9 = uVar22;
    puVar9[1] = uVar23;
    pcStack_54 = s_cState_StartUp_002e58e4;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,1,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0x38);
    uVar15 = *(undefined4 *)(iVar5 + 0x3c);
    uVar19 = *(undefined4 *)(iVar5 + 0x40);
    uVar22 = *(undefined4 *)(iVar5 + 0x44);
    uVar23 = *(undefined4 *)(iVar5 + 0x48);
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar5 + 0x34);
    *(undefined4 *)(iVar8 + 0xc) = uVar20;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 8) = uVar15;
    *(undefined4 *)(iVar8 + 0xc) = uVar19;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 8) = uVar22;
    *(undefined4 *)(iVar8 + 0xc) = uVar23;
    pcStack_54 = s_cState_Jump_002e58f4;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,2,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0x50);
    uVar15 = *(undefined4 *)(iVar5 + 0x54);
    uVar19 = *(undefined4 *)(iVar5 + 0x58);
    uVar22 = *(undefined4 *)(iVar5 + 0x5c);
    uVar23 = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar5 + 0x4c);
    *(undefined4 *)(iVar8 + 0x14) = uVar20;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x10) = uVar15;
    *(undefined4 *)(iVar8 + 0x14) = uVar19;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x10) = uVar22;
    *(undefined4 *)(iVar8 + 0x14) = uVar23;
    pcStack_54 = s_cState_Fall_002e5900;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,3,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0x68);
    uVar15 = *(undefined4 *)(iVar5 + 0x6c);
    uVar19 = *(undefined4 *)(iVar5 + 0x70);
    uVar22 = *(undefined4 *)(iVar5 + 0x74);
    uVar23 = *(undefined4 *)(iVar5 + 0x78);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(iVar8 + 0x1c) = uVar20;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x18) = uVar15;
    *(undefined4 *)(iVar8 + 0x1c) = uVar19;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x18) = uVar22;
    *(undefined4 *)(iVar8 + 0x1c) = uVar23;
    pcStack_54 = s_cState_Store_002e5c80;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,4,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0x84);
    uVar15 = *(undefined4 *)(iVar5 + 0x88);
    uVar19 = *(undefined4 *)(iVar5 + 0x80);
    uVar22 = *(undefined4 *)(iVar5 + 0x8c);
    uVar23 = *(undefined4 *)(iVar5 + 0x90);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar5 + 0x7c);
    *(undefined4 *)(iVar8 + 0x24) = uVar19;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x20) = uVar20;
    *(undefined4 *)(iVar8 + 0x24) = uVar15;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x20) = uVar22;
    *(undefined4 *)(iVar8 + 0x24) = uVar23;
    pcStack_54 = s_cState_Fixed_002e5c90;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,5,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar15 = *(undefined4 *)(iVar5 + 0x98);
    uVar19 = *(undefined4 *)(iVar5 + 0x9c);
    uVar20 = *(undefined4 *)(iVar5 + 0xa0);
    *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar5 + 0x94);
    *(undefined4 *)(iVar8 + 0x2c) = uVar15;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x28) = uVar19;
    *(undefined4 *)(iVar8 + 0x2c) = uVar20;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x28) = uVar22;
    *(undefined4 *)(iVar8 + 0x2c) = uVar23;
    pcStack_54 = s_cState_Melt_002e5ca0;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,6,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0xa8);
    uVar15 = *(undefined4 *)(iVar5 + 0xac);
    uVar19 = *(undefined4 *)(iVar5 + 0xb0);
    uVar22 = *(undefined4 *)(iVar5 + 0xb4);
    uVar23 = *(undefined4 *)(iVar5 + 0xb8);
    *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar5 + 0xa4);
    *(undefined4 *)(iVar8 + 0x34) = uVar20;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x30) = uVar15;
    *(undefined4 *)(iVar8 + 0x34) = uVar19;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x30) = uVar22;
    *(undefined4 *)(iVar8 + 0x34) = uVar23;
    pcStack_54 = s_cState_Reaction_002e5cac;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,7,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar15 = *(undefined4 *)(iVar5 + 0xc4);
    uVar20 = *(undefined4 *)(iVar5 + 200);
    uVar19 = *(undefined4 *)(iVar5 + 0xc0);
    uVar22 = *(undefined4 *)(iVar5 + 0x8c);
    uVar23 = *(undefined4 *)(iVar5 + 0x90);
    *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar5 + 0xbc);
    *(undefined4 *)(iVar8 + 0x3c) = uVar19;
    iVar8 = puVar7[7];
    *(undefined4 *)(iVar8 + 0x38) = uVar15;
    *(undefined4 *)(iVar8 + 0x3c) = uVar20;
    iVar8 = puVar7[8];
    *(undefined4 *)(iVar8 + 0x38) = uVar22;
    *(undefined4 *)(iVar8 + 0x3c) = uVar23;
    pcStack_54 = s_cState_Die_002e5cbc;
    uStack_58 = uVar17;
    func_0010BEC4((int)puVar7,8,(int *)&uStack_58);
    iVar8 = puVar7[6];
    uVar20 = *(undefined4 *)(iVar5 + 0xd0);
    uVar19 = *(undefined4 *)(iVar5 + 0xd4);
    uVar15 = *(undefined4 *)(iVar5 + 0xd8);
    *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar5 + 0xcc);
    *(undefined4 *)(iVar8 + 0x44) = uVar20;
    iVar5 = puVar7[7];
    *(undefined4 *)(iVar5 + 0x40) = uVar19;
    *(undefined4 *)(iVar5 + 0x44) = uVar15;
    iVar5 = puVar7[8];
    *(undefined4 *)(iVar5 + 0x40) = uVar22;
    *(undefined4 *)(iVar5 + 0x44) = uVar23;
    uVar17 = *(uint *)(puVar7[-0x127] + 0x2c);
    *(uint *)(puVar7[-0x127] + 0x2c) = uVar17 | 0x10;
    *(uint *)(puVar7[-0x127] + 0x2c) = uVar17 & 0xfffff8ff | 0x510;
    func_002E4DE8((int)puVar6);
    *(undefined2 *)(puVar7[-4] + 0x28) = 0x124;
    *(undefined1 *)(puVar7[-1] + 0x61) = 0;
    puVar11 = (undefined2 *)func_0054DDF4((int)puVar6,2);
    afStack_44[0] = ALBW_AS_F32(puVar7[-0x180]);
    objStack_68[0] = uRam002e5cc8;
    uVar17 = objStack_68[0];
    pfVar16 = afStack_44;
    (*(undefined2 *)((char *)&objStack_68[0] + 0)) = (undefined2)uRam002e5cc8;
    uVar2 = (undefined2)objStack_68[0];
    objStack_68[0] = uVar17;
    func_0014EB8C(puVar7[-1],puVar7[-0x12a],puVar11,(uint *)pfVar16,(short)param_2[0x14],local_3c,
                  uVar2);
    *(undefined4 *)(puVar7[-2] + 0x18) = puVar7[-4];
    afStack_44[0] = ALBW_AS_F32(puVar7[-0x180]);
    func_004EDAD0(puVar7[-2],(uint *)afStack_44);
    *(undefined2 *)(puVar7[-2] + 0x2c) = *(undefined2 *)(puVar7 + -0x21e);
    func_004A7F00(*piRam002e5ccc,puVar7[-2],2);
    if ((*(short *)((int)param_2 + 0x2a) == 0) || (*(short *)((int)param_2 + 0x2a) != 1)) {
      func_00663E64(puVar7,0);
    }
    else {
      func_00663E64(puVar7,5);
    }
    puVar7[-0xcc] = puVar7[-0xcc] | 0x4068030;
    func_004F5BD8((int)puVar6,(uint *)0x0,(int **)0x0,pfVar16);
    func_002AF5FC((int)puVar6,4,0xf);
    uVar17 = uRam002e5cd0;
    uVar13 = (ushort)uRam002e5cd0;
    func_002B1440((int)puVar6,-1,uVar13,0);
    objStack_68[0] = uVar17;
    func_004FBA18((int)puVar6,2,0xff,-1,0xc,0,uVar13,fRam002e5cd4,fparam_0);
    *(undefined1 *)(puVar7 + -0xe) = 4;
    fVar21 = ALBW_AS_F32(puVar7[0x11]);
    if (ALBW_AS_F32(puVar7[0x11]) == fparam_0) {
      fVar21 = fRam002e5cd8;
    }
    puVar7[0x11] = ALBW_AS_U32(fVar21);
  }
  return (int)puVar6;
}

