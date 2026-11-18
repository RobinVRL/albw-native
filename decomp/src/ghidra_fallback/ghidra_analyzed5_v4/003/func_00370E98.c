#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E4B0(int param_1,uint param_2);
extern int func_0019B04C(uint param_1);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00666FD0(undefined4 *param_1,undefined1 param_2);
extern float fRam0037146c;
extern int iRam003712e4;
extern undefined4 uRam00371468;
extern undefined4 uRam00371470;
extern undefined4 uRam00371474;
extern int *piRam00371310;
extern undefined4 *puRam003712dc;
extern undefined4 *puRam003712e0;
extern undefined4 *puRam00371460;
extern undefined4 *puRam00371464;
extern uint *DAT_0037129c;
extern int DAT_003712a0;
extern int DAT_003712a4;
extern undefined4 DAT_003712a8;
extern undefined4 DAT_003712ac;
extern undefined4 *DAT_003712b0;
extern uint *DAT_003712b4;
extern int DAT_003712c8;
extern float DAT_003712cc;
extern float *DAT_003712d0;
extern float DAT_003712d4;
extern int DAT_003712d8;
extern char s_HockBock_Body_003712b8[];
extern char s_cState_Die_00371304[];
extern char s_cState_Move_003712e8[];
extern char s_cState_Reaction_003712f4[];

// USA 00370E98 <- EU 00370E74 (Ghidra, non-matching)
// GLOBAL DAT_0037129c uint *
// GLOBAL DAT_003712a0 int
// GLOBAL DAT_003712a4 int
// GLOBAL DAT_003712a8 undefined4
// GLOBAL DAT_003712ac undefined4
// GLOBAL DAT_003712b0 undefined4 *
// GLOBAL DAT_003712b4 uint *
// GLOBAL DAT_003712c8 int
// GLOBAL DAT_003712cc float
// GLOBAL DAT_003712d0 float *
// GLOBAL DAT_003712d4 float
// GLOBAL DAT_003712d8 int
// GLOBAL UNK_003712dc undefined4 *
// GLOBAL UNK_003712e0 undefined *
// GLOBAL UNK_003712e4 int
// GLOBAL UNK_00371310 int *
// GLOBAL UNK_00371460 uint *
// GLOBAL UNK_00371464 undefined4 *
// GLOBAL UNK_00371468 undefined4
// GLOBAL UNK_0037146c float
// GLOBAL UNK_00371470 undefined4
// GLOBAL UNK_00371474 uint
// GLOBAL s_HockBock_Body_003712b8 string
// GLOBAL s_cState_Die_00371304 string
// GLOBAL s_cState_Move_003712e8 string
// GLOBAL s_cState_Reaction_003712f4 string

/* WARNING: Variable defined which should be unmapped: objStack_70 */

undefined4 * func_00370E98(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  float fparam_0;
  ushort uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  float fVar20;
  ulonglong uVar21;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  piVar4 = func_004FD464(param_1,param_2,DAT_0037129c);
  iVar13 = DAT_003712a0;
  *piVar4 = DAT_003712a0;
  piVar4[200] = iVar13 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  iVar13 = DAT_003712a4;
  uVar17 = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar16 = DAT_003712ac;
  uVar14 = *(undefined4 *)(iVar13 + 0x14c);
  puVar5[0xc] = *(undefined4 *)(iVar13 + 0x148);
  puVar5[0xd] = uVar14;
  uVar14 = DAT_003712a8;
  puVar5[10] = DAT_003712a8;
  puVar5[0xb] = puVar5 + -0x22f;
  puVar18 = puVar5 + -0x22f;
  uVar11 = *(undefined4 *)(iVar13 + 0x150);
  uVar15 = *(undefined4 *)(iVar13 + 0x154);
  puVar5[0xe] = uVar14;
  puVar5[0xf] = puVar18;
  puVar5[0x10] = uVar11;
  puVar5[0x11] = uVar15;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = uVar16;
  puVar8 = DAT_003712b0;
  puVar5[0x16] = 0xf0;
  puVar5[0x15] = 0;
  puVar5[0x17] = uVar16;
  local_40 = puVar5 + -0x2f;
  uVar14 = puVar8[1];
  uVar16 = puVar8[2];
  puVar5[0x18] = *puVar8;
  puVar5[0x19] = uVar14;
  puVar5[0x1a] = uVar16;
  puVar2 = DAT_003712b4;
  *(undefined1 *)(puVar5 + 0x1b) = 0;
  iVar6 = func_0019B04C(*puVar2);
  iVar10 = DAT_003712c8;
  puVar5[-0xf7] = *(undefined4 *)(iVar6 + 0x1c8);
  local_4c = s_HockBock_Body_003712b8;
  local_50 = iVar10;
  uVar7 = func_005330BC(puVar5[-0xf7],&local_50);
  objStack_70[0] = 0;
  objStack_70[1] = 0;
  piVar4 = func_0014DF18(iVar6,1,0,uVar7,0,0);
  puVar5[-300] = piVar4;
  puVar5[-0x15c] = piVar4;
  fVar20 = DAT_003712cc;
  uVar21 = (ulonglong)(uint)ALBW_AS_U32(DAT_003712cc);
  puVar5[-200] = puVar5[-200] | 0x400;
  func_004FC1CC((int)puVar18,puVar5[-300],0xb,fVar20);
  func_00115D70(&local_3c,DAT_003712d0,DAT_003712d4);
  puVar5[-0xf6] = ALBW_AS_U32(local_3c);
  puVar5[-0xf5] = uStack_38;
  puVar5[-0xf4] = uStack_34;
  func_004FB344((int)puVar18,7);
  iVar6 = DAT_003712d8;
  do {
    func_004FACA4((int)puVar18,uVar17,(int *)(iVar6 + uVar17 * 8));
    fVar20 = ALBW_AS_F32(uVar21);
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 7);
  func_004FB468((int)puVar18);
  func_004FABDC((int)puVar18,0,0xffffffff,0);
  func_0014E4B0((int)puVar18,param_2[8]);
  *(undefined1 *)((int)puVar5 + 6) = 3;
  puVar5[5] = puVar18;
  iVar6 = func_0010BA78(0x30);
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 3;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = puRam003712dc[1];
    iVar12 = iVar12 + -1;
    puVar8[2] = *puRam003712dc;
    puVar8[3] = uVar14;
    uVar14 = *(undefined4 *)(iVar13 + 0x19c);
    puVar8[4] = *(undefined4 *)(iVar13 + 0x198);
    puVar8[5] = uVar14;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar7 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar7 << 3);
  puVar5[8] = puVar8;
  if (uVar7 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = *(undefined4 *)(DAT_003712a4 + 0x16c);
      *puVar8 = *(undefined4 *)(DAT_003712a4 + 0x168);
      puVar8[1] = uVar14;
      puVar9 = puVar8;
    }
    for (iVar6 = (int)uVar7 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = *(undefined4 *)(DAT_003712a4 + 0x16c);
      puVar9[2] = *(undefined4 *)(DAT_003712a4 + 0x168);
      puVar9[3] = uVar14;
      uVar14 = *(undefined4 *)(iVar13 + 0x16c);
      puVar9[4] = *(undefined4 *)(iVar13 + 0x168);
      puVar9[5] = uVar14;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 3;
    iVar6 = func_00100118((int)(puVar8 + 2),puRam003712e0,0x24,3);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 3;
  }
  iVar6 = iRam003712e4;
  puVar5[-0x15a] = puVar5;
  *(undefined2 *)(iVar6 + (int)puVar18) = 3;
  local_4c = s_cState_Move_003712e8;
  local_50 = iVar10;
  func_0010BEC4((int)puVar5,0,&local_50);
  puVar8 = (undefined4 *)puVar5[6];
  uVar14 = *(undefined4 *)(iVar13 + 0x160);
  uVar16 = *(undefined4 *)(iVar13 + 0x164);
  uVar11 = *(undefined4 *)(DAT_003712a4 + 0x15c);
  uVar15 = *(undefined4 *)(iVar13 + 0x168);
  uVar19 = *(undefined4 *)(iVar13 + 0x16c);
  *puVar8 = *(undefined4 *)(DAT_003712a4 + 0x158);
  puVar8[1] = uVar11;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar14;
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = uVar15;
  puVar8[1] = uVar19;
  local_4c = s_cState_Reaction_003712f4;
  local_50 = iVar10;
  func_0010BEC4((int)puVar5,1,&local_50);
  iVar6 = puVar5[6];
  uVar14 = *(undefined4 *)(iVar13 + 0x174);
  uVar16 = *(undefined4 *)(iVar13 + 0x178);
  uVar15 = *(undefined4 *)(iVar13 + 0x17c);
  uVar11 = *(undefined4 *)(iVar13 + 0x168);
  uVar19 = *(undefined4 *)(iVar13 + 0x16c);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar13 + 0x170);
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  local_4c = s_cState_Die_00371304;
  local_50 = iVar10;
  func_0010BEC4((int)puVar5,2,&local_50);
  uVar16 = *(undefined4 *)(iVar13 + 0x168);
  uVar19 = *(undefined4 *)(iVar13 + 0x16c);
  iVar10 = puVar5[6];
  uVar14 = *(undefined4 *)(iVar13 + 0x184);
  uVar11 = *(undefined4 *)(iVar13 + 0x188);
  uVar15 = *(undefined4 *)(iVar13 + 0x18c);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar13 + 0x180);
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar13 = puVar5[7];
  *(undefined4 *)(iVar13 + 0x10) = uVar11;
  *(undefined4 *)(iVar13 + 0x14) = uVar15;
  iVar13 = puVar5[8];
  *(undefined4 *)(iVar13 + 0x10) = uVar16;
  *(undefined4 *)(iVar13 + 0x14) = uVar19;
  func_00666FD0(puVar5,0);
  puVar8 = (undefined4 *)func_0052FBA0(*piRam00371310 + 0x3dbbc,param_2[0x13]);
  if (puVar8 == (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar5 + -0x5e5) = 1;
  }
  else {
    if (((*puRam00371460 & 1) == 0) && (iVar13 = func_00100174((int *)puRam00371460), iVar13 != 0))
    {
      *puRam00371464 = uRam00371468;
    }
    iVar13 = (**(code **)*puVar8)(puVar8,puRam00371464);
    fparam_0 = fRam0037146c;
    if (iVar13 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    puVar5[9] = puVar8;
    func_00115D70((float *)objStack_70,(float *)(puVar8 + 0x282),fparam_0);
    uVar14 = uRam00371470;
    puVar5[-0x138] = objStack_70[0];
    puVar5[-0x137] = objStack_70[1];
    puVar5[-0x136] = objStack_70[2];
    puVar5[0x18] = puVar5[-0x138];
    puVar5[0x19] = puVar5[-0x137];
    puVar5[0x1a] = puVar5[-0x136];
    local_40[0x48] = uVar14;
    func_00115DC8((float *)(puVar5 + 0x18));
    *(int *)(puVar5[9] + 0xa90) = *(int *)(puVar5[9] + 0xa90) + 1;
  }
  puVar5[-200] = puVar5[-200] & 0xffffff7f;
  puVar5[-0x134] = puVar5 + 10;
  objStack_70[2] = uRam00371474;
  puVar5[-0x11d] = puVar5 + 0xe;
  uVar7 = objStack_70[2];
  objStack_70[0] = 0;
  objStack_70[1] = 0;
  uVar3 = (ushort)objStack_70[2];
  objStack_70[2] = uVar7;
  func_004FBA18((int)puVar18,2,0xff,0,0,0,uVar3,fVar20,fVar20);
  *(undefined1 *)((int)puVar5 + -0x13f) = 3;
  *(undefined1 *)((int)puVar5 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar5 + -0x13d) = 0;
  func_002AF5FC((int)puVar18,4,-1);
  return puVar18;
}

