#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004F3574(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
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
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00547724(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern float func_0058AC14(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern float fRam004f41a8;
extern float fRam004f4894;
extern int iRam004f45a8;
extern undefined4 uRam004f41b0;
extern undefined4 uRam004f41b4;
extern undefined4 uRam004f41c4;
extern int *piRam004f41ac;
extern int *piRam004f41c8;
extern int *piRam004f4890;
extern undefined4 *puRam004f45a4;
extern int *DAT_004f417c;
extern uint *DAT_004f4180;
extern uint *DAT_004f4184;
extern int DAT_004f4188;
extern undefined4 DAT_004f418c;
extern undefined4 DAT_004f4190;
extern uint DAT_004f4194;
extern int DAT_004f4198;
extern int DAT_004f419c;
extern undefined4 DAT_004f41a0;
extern int DAT_004f41a4;
extern char s_Fire_Gimos_004f41b8[];
extern char s_Ice_Gimos_004f4598[];
extern char s_cState_Chase_004f45c8[];
extern char s_cState_Die_004f4884[];
extern char s_cState_Fall_004f45e8[];
extern char s_cState_Fixed_004f45f4[];
extern char s_cState_Melt_004f4604[];
extern char s_cState_Reaction_004f4610[];
extern char s_cState_StartUp_004f45b8[];
extern char s_cState_Store_004f45d8[];
extern char s_cState_Wait_004f45ac[];

// USA 004F3DBC <- EU 004F3D94 (Ghidra, non-matching)
// GLOBAL DAT_004f417c int *
// GLOBAL DAT_004f4180 uint *
// GLOBAL DAT_004f4184 uint *
// GLOBAL DAT_004f4188 int
// GLOBAL DAT_004f418c undefined4
// GLOBAL DAT_004f4190 undefined4
// GLOBAL DAT_004f4194 uint
// GLOBAL DAT_004f4198 int
// GLOBAL DAT_004f419c int
// GLOBAL DAT_004f41a0 undefined4
// GLOBAL DAT_004f41a4 int
// GLOBAL UNK_004f41a8 float
// GLOBAL UNK_004f41ac int *
// GLOBAL UNK_004f41b0 uint
// GLOBAL UNK_004f41b4 uint
// GLOBAL UNK_004f41c4 uint
// GLOBAL UNK_004f41c8 int *
// GLOBAL UNK_004f45a4 undefined *
// GLOBAL UNK_004f45a8 int
// GLOBAL UNK_004f4890 int *
// GLOBAL UNK_004f4894 float
// GLOBAL s_Fire_Gimos_004f41b8 string
// GLOBAL s_Ice_Gimos_004f4598 string
// GLOBAL s_cState_Chase_004f45c8 string
// GLOBAL s_cState_Die_004f4884 string
// GLOBAL s_cState_Fall_004f45e8 string
// GLOBAL s_cState_Fixed_004f45f4 string
// GLOBAL s_cState_Melt_004f4604 string
// GLOBAL s_cState_Reaction_004f4610 string
// GLOBAL s_cState_StartUp_004f45b8 string
// GLOBAL s_cState_Store_004f45d8 string
// GLOBAL s_cState_Wait_004f45ac string

/* WARNING: Variable defined which should be unmapped: objStack_c8 */

int func_004F3DBC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_c8 ((uint *)(albw_frame + 0x8))
  #define uStack_60 (*(uint *)(albw_frame + 0x70))
  #define pcStack_5c (*(char * *)(albw_frame + 0x74))
  #define auStack_58 ((uint *)(albw_frame + 0x78))
  #define uStack_50 (*(uint *)(albw_frame + 0x80))
  #define pcStack_4c (*(char * *)(albw_frame + 0x84))
  puVar14 = objStack_c8;
  puVar15 = objStack_c8;
  puVar16 = objStack_c8;
  iVar4 = func_00547724((int *)param_2);
  piVar21 = DAT_004f417c;
  puVar11 = DAT_004f4180;
  if (iVar4 != *DAT_004f417c) {
    puVar11 = DAT_004f4184;
  }
  piVar5 = func_004FD464(param_1,param_2,puVar11);
  iVar4 = DAT_004f4188;
  piVar5[200] = DAT_004f4188 + 0x84;
  *piVar5 = iVar4;
  piVar5[0x22f] = 0;
  iVar4 = func_0054D964((int)piVar5,1);
  piVar5[0x230] = iVar4;
  iVar4 = func_0054D964((int)piVar5,2);
  piVar5[0x231] = iVar4;
  iVar4 = func_0054D964((int)piVar5,1);
  piVar5[0x232] = iVar4;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar5[0x233] = (int)puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar5[0x234] = (int)puVar7;
  puVar7 = func_0010A794(piVar5 + 0x235);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  iVar4 = func_0054DDF4((int)(puVar7 + -0x235),1);
  puVar7[9] = iVar4;
  puVar7[10] = 0;
  uVar12 = DAT_004f4190;
  puVar6 = puVar7 + -0x235;
  puVar7[0xc] = DAT_004f418c;
  iVar4 = DAT_004f4198;
  uVar19 = DAT_004f4194;
  uVar27 = (ulonglong)DAT_004f4194;
  puVar7[0xd] = puVar7[-0x140];
  puVar7[0xe] = uVar12;
  iVar2 = DAT_004f419c;
  puVar7[0xf] = puVar7[-0x140];
  puVar7[0x10] = uVar19;
  *(undefined2 *)(iVar4 + (int)puVar6) = 0;
  *(undefined1 *)((int)puVar7 + 0x46) = 0;
  *(undefined1 *)((int)puVar7 + 0x47) = 0;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  uVar12 = *(undefined4 *)(iVar2 + 0x14);
  puVar7[0x15] = *(undefined4 *)(iVar2 + 0x10);
  puVar7[0x16] = uVar12;
  uVar12 = DAT_004f41a0;
  puVar7[0x13] = DAT_004f41a0;
  puVar7[0x14] = puVar6;
  uVar13 = *(undefined4 *)(iVar2 + 0x18);
  uVar17 = *(undefined4 *)(iVar2 + 0x1c);
  puVar7[0x17] = uVar12;
  puVar7[0x18] = puVar6;
  puVar7[0x19] = uVar13;
  puVar7[0x1a] = uVar17;
  uVar13 = *(undefined4 *)(iVar2 + 0x20);
  uVar17 = *(undefined4 *)(iVar2 + 0x24);
  puVar7[0x1b] = uVar12;
  puVar7[0x1c] = puVar6;
  puVar7[0x1d] = uVar13;
  puVar7[0x1e] = uVar17;
  uVar13 = *(undefined4 *)(iVar2 + 0x2c);
  puVar7[0x21] = *(undefined4 *)(iVar2 + 0x28);
  puVar7[0x22] = uVar13;
  puVar7[0x1f] = uVar12;
  puVar7[0x20] = puVar6;
  bVar3 = func_00588BF0((int)puVar6,1);
  if (bVar3) {
    *(undefined1 *)((int)puVar7 + -0x5fd) = 1;
  }
  else {
    func_004FB344((int)puVar6,6);
    iVar4 = DAT_004f41a4;
    uVar19 = 0;
    do {
      func_004FACA4((int)puVar6,uVar19,(int *)(iVar4 + uVar19 * 8));
      fVar23 = ALBW_AS_F32(uVar27);
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < 6);
    func_004FB468((int)puVar6);
    piVar5 = (int *)0x0;
    func_004FABDC((int)puVar6,0,0xffffffff,0);
    func_004FB0A4((int)puVar6,fVar23);
    uVar28 = CONCAT44(fRam004f41a8,fVar23);
    func_004FB4E0((int)puVar6,fRam004f41a8);
    iVar4 = func_00588BE4((int)puVar6);
    uVar19 = uRam004f41b0;
    if (iVar4 == *piRam004f41ac) {
      func_004FB30C((int)puVar6,2);
      uVar22 = uRam004f41b4;
      uVar20 = 0;
      do {
        func_004FAC70((int)puVar6,uVar20,(int *)(uVar22 + uVar20 * 8));
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < 2);
      func_004FB408((int)puVar6);
      uVar12 = 0;
      func_004FAB60((int)puVar6,1,0);
      fVar23 = func_0058AC14(puVar6);
      func_004FB070((int)puVar6,fVar23);
      func_004FACD4((int)puVar6,(int *)0x0,uVar12,piVar5);
      uVar12 = func_0014E904((int)puVar6,1,1);
      puVar7[-6] = uVar12;
      piVar21 = puVar7 + -6;
      pcStack_4c = s_Fire_Gimos_004f41b8;
      uStack_50 = uVar19;
      func_00169608((uint *)puVar7[-6],0,(int *)&uStack_50,*(int *)(puVar7[-0x181] + 0x1c8));
      func_00133870(*piVar21,0,puVar7[-0x132]);
      func_0016A02C(*piVar21,-1,(int *)0xffffffff,0);
      objStack_c8[2] = (uint)(objStack_c8 + 3);
      objStack_c8[1] = 3;
      objStack_c8[5] = (uint)((ulonglong)uVar28 >> 0x20);
      objStack_c8[0] = 1;
      objStack_c8[4] = (uint)uVar28;
      objStack_c8[3] = 0;
      objStack_c8[6] = uRam004f41c4;
      objStack_c8[8] = uVar22 | 0xff;
      objStack_c8[7] = objStack_c8[5];
      func_0016898C(puVar7[-6],objStack_c8);
      fVar23 = ALBW_AS_F32(uVar28);
      *(float *)(*(int *)(*piVar21 + 0x14) + 0x10) = fVar23;
      func_00168E9C((int *)puVar7[-6],puVar7[-0x132],(int *)0x0);
      *(undefined1 *)((int)puVar7 + -0x83) = 0x28;
    }
    else {
      func_004FB30C((int)puVar6,1);
      fVar23 = ALBW_AS_F32(uVar28);
      iVar4 = func_00588BE4((int)puVar6);
      if (iVar4 == *piRam004f41c8) {
        objStack_c8[1] = (int)"Amos"; /* EU 004F41CC */
        objStack_c8[0] = uVar19;
        func_004FAC70((int)puVar6,0,(int *)objStack_c8);
        puVar16 = puVar14;
      }
      else {
        iVar4 = func_00588BE4((int)puVar6);
        objStack_c8[0] = uVar19;
        if (iVar4 == *piVar21) {
          objStack_c8[1] = (uint)s_Ice_Gimos_004f4598;
          func_004FAC70((int)puVar6,0,(int *)objStack_c8);
          puVar16 = puVar15;
        }
        else {
          objStack_c8[1] = (int)s_Ice_Gimos_004f4598 + 4;
          func_004FAC70((int)puVar6,0,(int *)objStack_c8);
        }
      }
      func_004FB408((int)puVar6);
      func_004FB070((int)puVar6,fVar23);
      func_004FB4C4((int)puVar6,fVar23);
      func_004FACD4((int)puVar6,(int *)0x0,puVar16,piVar5);
    }
    puVar7[5] = puVar6;
    *(undefined1 *)((int)puVar7 + 6) = 9;
    iVar4 = func_0010BA78(0x90);
    puVar7[6] = iVar4;
    puVar7[7] = iVar4 + (uint)*(byte *)((int)puVar7 + 6) * 8;
    iVar10 = 9;
    puVar8 = (undefined4 *)(iVar4 + -8);
    do {
      uVar12 = *(undefined4 *)(iVar2 + 0xf4);
      iVar10 = iVar10 + -1;
      puVar8[2] = *(undefined4 *)(iVar2 + 0xf0);
      puVar8[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar2 + 0xf4);
      puVar8[4] = *(undefined4 *)(iVar2 + 0xf0);
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)puVar7 + 6);
    uVar22 = (uint)bVar1;
    puVar8 = (undefined4 *)func_0010BA78(uVar22 << 3);
    puVar7[8] = puVar8;
    if (uVar22 != 0) {
      puVar9 = puVar8 + -2;
      if ((bVar1 & 1) != 0) {
        uVar12 = *(undefined4 *)(iVar2 + 0x8c);
        *puVar8 = *(undefined4 *)(iVar2 + 0x88);
        puVar8[1] = uVar12;
        puVar9 = puVar8;
      }
      for (iVar4 = (int)uVar22 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar12 = *(undefined4 *)(iVar2 + 0x8c);
        puVar9[2] = *(undefined4 *)(iVar2 + 0x88);
        puVar9[3] = uVar12;
        uVar12 = *(undefined4 *)(iVar2 + 0x8c);
        puVar9[4] = *(undefined4 *)(iVar2 + 0x88);
        puVar9[5] = uVar12;
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
    iVar4 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0x24;
      puVar8[1] = 9;
      iVar4 = func_00100118((int)(puVar8 + 2),puRam004f45a4,0x24,9);
    }
    if (iVar4 != 0) {
      puVar7[3] = iVar4;
      puVar7[2] = 9;
    }
    iVar4 = iRam004f45a8;
    puVar7[-0x160] = puVar7;
    *(undefined2 *)(iVar4 + (int)puVar6) = 9;
    pcStack_5c = s_cState_Wait_004f45ac;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,0,(int *)&uStack_60);
    puVar8 = (undefined4 *)puVar7[6];
    uVar13 = *(undefined4 *)(iVar2 + 0x34);
    uVar17 = *(undefined4 *)(iVar2 + 0x38);
    uVar25 = *(undefined4 *)(iVar2 + 0x3c);
    uVar26 = *(undefined4 *)(iVar2 + 0x40);
    uVar12 = *(undefined4 *)(iVar2 + 0x44);
    *puVar8 = *(undefined4 *)(iVar2 + 0x30);
    puVar8[1] = uVar13;
    puVar8 = (undefined4 *)puVar7[7];
    *puVar8 = uVar17;
    puVar8[1] = uVar25;
    puVar8 = (undefined4 *)puVar7[8];
    *puVar8 = uVar26;
    puVar8[1] = uVar12;
    pcStack_5c = s_cState_StartUp_004f45b8;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,1,(int *)&uStack_60);
    iVar4 = puVar7[6];
    pfVar18 = (float *)(iVar2 + 0x58);
    uVar17 = *(undefined4 *)(iVar2 + 0x4c);
    uVar12 = *(undefined4 *)(iVar2 + 0x50);
    uVar25 = *(undefined4 *)(iVar2 + 0x54);
    fVar24 = *pfVar18;
    uVar13 = *(undefined4 *)(iVar2 + 0x5c);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(iVar4 + 0xc) = uVar17;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 8) = uVar12;
    *(undefined4 *)(iVar4 + 0xc) = uVar25;
    iVar4 = puVar7[8];
    *(float *)(iVar4 + 8) = fVar24;
    *(undefined4 *)(iVar4 + 0xc) = uVar13;
    pcStack_5c = s_cState_Chase_004f45c8;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,2,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 100);
    uVar13 = *(undefined4 *)(iVar2 + 0x68);
    uVar17 = *(undefined4 *)(iVar2 + 0x6c);
    uVar25 = *(undefined4 *)(iVar2 + 0x70);
    uVar26 = *(undefined4 *)(iVar2 + 0x74);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
    *(undefined4 *)(iVar4 + 0x14) = uVar12;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x10) = uVar13;
    *(undefined4 *)(iVar4 + 0x14) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x10) = uVar25;
    *(undefined4 *)(iVar4 + 0x14) = uVar26;
    pcStack_5c = s_cState_Store_004f45d8;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,3,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 0x7c);
    uVar13 = *(undefined4 *)(iVar2 + 0x80);
    uVar17 = *(undefined4 *)(iVar2 + 0x84);
    uVar25 = *(undefined4 *)(iVar2 + 0x88);
    uVar26 = *(undefined4 *)(iVar2 + 0x8c);
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar2 + 0x78);
    *(undefined4 *)(iVar4 + 0x1c) = uVar12;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x18) = uVar13;
    *(undefined4 *)(iVar4 + 0x1c) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x18) = uVar25;
    *(undefined4 *)(iVar4 + 0x1c) = uVar26;
    pcStack_5c = s_cState_Fall_004f45e8;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,4,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 0x94);
    uVar13 = *(undefined4 *)(iVar2 + 0x98);
    uVar17 = *(undefined4 *)(iVar2 + 0x9c);
    uVar25 = *(undefined4 *)(iVar2 + 0xa0);
    uVar26 = *(undefined4 *)(iVar2 + 0xa4);
    *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar2 + 0x90);
    *(undefined4 *)(iVar4 + 0x24) = uVar12;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x20) = uVar13;
    *(undefined4 *)(iVar4 + 0x24) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x20) = uVar25;
    *(undefined4 *)(iVar4 + 0x24) = uVar26;
    pcStack_5c = s_cState_Fixed_004f45f4;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,5,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar26 = *(undefined4 *)(iVar2 + 0xac);
    uVar12 = *(undefined4 *)(iVar2 + 0xb0);
    uVar17 = *(undefined4 *)(iVar2 + 0xb4);
    uVar25 = *(undefined4 *)(iVar2 + 0x88);
    uVar13 = *(undefined4 *)(iVar2 + 0x8c);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar2 + 0xa8);
    *(undefined4 *)(iVar4 + 0x2c) = uVar26;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x28) = uVar12;
    *(undefined4 *)(iVar4 + 0x2c) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x28) = uVar25;
    *(undefined4 *)(iVar4 + 0x2c) = uVar13;
    pcStack_5c = s_cState_Melt_004f4604;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,6,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 0xbc);
    uVar13 = *(undefined4 *)(iVar2 + 0xc0);
    uVar17 = *(undefined4 *)(iVar2 + 0xc4);
    uVar25 = *(undefined4 *)(iVar2 + 200);
    uVar26 = *(undefined4 *)(iVar2 + 0xcc);
    *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar2 + 0xb8);
    *(undefined4 *)(iVar4 + 0x34) = uVar12;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x30) = uVar13;
    *(undefined4 *)(iVar4 + 0x34) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x30) = uVar25;
    *(undefined4 *)(iVar4 + 0x34) = uVar26;
    pcStack_5c = s_cState_Reaction_004f4610;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,7,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 0xd8);
    uVar26 = *(undefined4 *)(iVar2 + 0x88);
    uVar17 = *(undefined4 *)(iVar2 + 0xdc);
    uVar25 = *(undefined4 *)(iVar2 + 0x8c);
    uVar13 = *(undefined4 *)(iVar2 + 0xd4);
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar2 + 0xd0);
    *(undefined4 *)(iVar4 + 0x3c) = uVar13;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x38) = uVar12;
    *(undefined4 *)(iVar4 + 0x3c) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x38) = uVar26;
    *(undefined4 *)(iVar4 + 0x3c) = uVar25;
    pcStack_5c = s_cState_Die_004f4884;
    uStack_60 = uVar19;
    func_0010BEC4((int)puVar7,8,(int *)&uStack_60);
    iVar4 = puVar7[6];
    uVar12 = *(undefined4 *)(iVar2 + 0xe4);
    uVar13 = *(undefined4 *)(iVar2 + 0xe8);
    uVar17 = *(undefined4 *)(iVar2 + 0xec);
    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar2 + 0xe0);
    *(undefined4 *)(iVar4 + 0x44) = uVar12;
    iVar4 = puVar7[7];
    *(undefined4 *)(iVar4 + 0x40) = uVar13;
    *(undefined4 *)(iVar4 + 0x44) = uVar17;
    iVar4 = puVar7[8];
    *(undefined4 *)(iVar4 + 0x40) = uVar26;
    *(undefined4 *)(iVar4 + 0x44) = uVar25;
    func_004F3574((int)puVar6);
    *(undefined4 *)(puVar7[-2] + 0x18) = puVar7[-5];
    auStack_58[0] = puVar7[-0x182];
    func_004EDAD0(puVar7[-2],auStack_58);
    piVar21 = piRam004f4890;
    *(short *)(puVar7[-2] + 0x2c) = (short)param_2[0x14];
    func_004A7F00(*piVar21,puVar7[-2],2);
    objStack_c8[1] = 0xa4;
    *(undefined2 *)(puVar7[-5] + 0x28) = 0xa4;
    *(undefined4 *)(puVar7[-1] + 0x18) = puVar7[-4];
    auStack_58[0] = puVar7[-0x182];
    func_004EDAD0(puVar7[-1],auStack_58);
    *(short *)(puVar7[-1] + 0x2c) = (short)param_2[0x14];
    func_004A7F00(*piVar21,puVar7[-1],2);
    objStack_c8[1] = 0xa4;
    *(undefined2 *)(puVar7[-4] + 0x28) = 0xa4;
    if ((*(short *)((int)param_2 + 0x2a) == 0) || (*(short *)((int)param_2 + 0x2a) != 1)) {
      func_0066ACA4(puVar7,0);
    }
    else {
      func_0066ACA4(puVar7,5);
    }
    puVar7[-0xce] = puVar7[-0xce] | 0x4008030;
    func_004F5BD8((int)puVar6,(uint *)0x0,(int **)0x0,pfVar18);
    puVar7[-0x124] = puVar7 + 0x13;
    func_002AF5FC((int)puVar6,4,0xf);
    *(undefined1 *)((int)puVar7 + -0x157) = 5;
    *(undefined1 *)((int)puVar7 + -0x156) = 0xff;
    *(undefined1 *)((int)puVar7 + -0x155) = 0;
    func_004FC218((int)puVar6,'\x02',0,0x7fff);
    func_002B1440((int)puVar6,-1,0x7fff,0);
    objStack_c8[0] = 0xc;
    objStack_c8[1] = 0;
    objStack_c8[2] = 0x7fff;
    func_004FBA18((int)puVar6,3,0xff,-1,0xc,0,0x7fff,fRam004f4894,fVar23);
    *(undefined1 *)(puVar7 + -0x10) = 1;
  }
  return (int)puVar6;
}

