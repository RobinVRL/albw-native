#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00663578(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c98d4;
extern undefined4 *DAT_002c98d8;
extern undefined4 DAT_002c98dc;
extern int *DAT_002c98e0;
extern float DAT_002c98e4;
extern float DAT_002c98e8;
extern float DAT_002c98ec;
extern uint DAT_002c98f0;
extern undefined *DAT_002c98f4;
extern int DAT_002c98f8;
extern int DAT_002c9908;
extern char s_cState_Burn_002c9b24[];
extern char s_cState_Wait_002c98fc[];

// USA 002C948C <- EU 002C9468 (Ghidra, non-matching)
// GLOBAL DAT_002c98d4 int
// GLOBAL DAT_002c98d8 undefined4 *
// GLOBAL DAT_002c98dc undefined4
// GLOBAL DAT_002c98e0 int *
// GLOBAL DAT_002c98e4 float
// GLOBAL DAT_002c98e8 float
// GLOBAL DAT_002c98ec float
// GLOBAL DAT_002c98f0 uint
// GLOBAL DAT_002c98f4 undefined *
// GLOBAL DAT_002c98f8 int
// GLOBAL DAT_002c9908 int
// GLOBAL s_cState_Burn_002c9b24 string
// GLOBAL s_cState_Wait_002c98fc string

/* WARNING: Variable defined which should be unmapped: objStack_70 */

undefined4 * func_002C948C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined2 uVar3;
  uint auVar4 [1];
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(uint * *)(albw_frame + 0xc))
  #define local_60 (*(uint *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 * *)(albw_frame + 0x14))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x18))
  #define local_40 (*(uint *)(albw_frame + 0x30))
  piVar6 = func_00150E40(param_1,param_2);
  iVar8 = DAT_002c98d4;
  *piVar6 = DAT_002c98d4;
  piVar6[200] = iVar8 + 0x54;
  puVar7 = func_0010A794(piVar6 + 0x103);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar16 = puVar7 + -0x103;
  puVar7[9] = 0;
  iVar8 = func_0054D964((int)puVar16,0);
  puVar7[10] = iVar8;
  iVar8 = func_0054D964((int)puVar16,1);
  puVar7[0xb] = iVar8;
  iVar8 = func_0054D964((int)puVar16,2);
  puVar7[0xc] = iVar8;
  puVar9 = (undefined4 *)func_0010BAB4(0x48);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = func_004EDC9C(puVar9);
  }
  puVar9 = DAT_002c98d8;
  puVar7[0xe] = puVar10;
  puVar7[0xf] = 0;
  *(undefined1 *)(puVar7 + 0x10) = 0;
  puVar7[0x11] = 0;
  uVar14 = puVar9[1];
  puVar7[0x15] = *puVar9;
  puVar7[0x16] = uVar14;
  uVar14 = DAT_002c98dc;
  puVar7[0x13] = DAT_002c98dc;
  puVar7[0x14] = puVar16;
  uVar15 = puVar9[3];
  puVar7[0x19] = puVar9[2];
  puVar7[0x1a] = uVar15;
  puVar7[0x17] = uVar14;
  puVar7[0x18] = puVar16;
  *(undefined1 *)(puVar7 + 0x1b) = 0;
  *(undefined1 *)((int)puVar7 + 0x6d) = 0;
  *(undefined1 *)((int)puVar7 + 0x6e) = 0;
  uVar24 = *(undefined8 *)(puVar7 + -0xf);
  uVar14 = puVar7[-0xd];
  fVar19 = func_0054DE3C(puVar16,0,1);
  iVar8 = puVar7[10];
  *(int *)(iVar8 + 4) = (int)uVar24;
  *(float *)(iVar8 + 8) = fVar19 + ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  func_004356B4((int *)puVar7[10]);
  *(undefined4 *)(puVar7[0xe] + 0x18) = puVar7[10];
  objStack_70[0] = puVar7[-0x50];
  func_004EDAD0(puVar7[0xe],objStack_70);
  *(undefined2 *)(*(int *)(puVar7[0xe] + 0x18) + 0x28) = 1;
  *(undefined2 *)(puVar7[0xe] + 0x2c) = *(undefined2 *)(puVar7 + -0xee);
  func_004A879C(*DAT_002c98e0,puVar7[0xe],2);
  uVar24 = *(undefined8 *)(puVar7 + -0xf);
  uVar14 = puVar7[-0xd];
  fVar19 = func_0054DE3C(puVar16,0,1);
  iVar8 = puVar7[0xb];
  fVar19 = fVar19 + DAT_002c98e4;
  *(int *)(iVar8 + 4) = (int)uVar24;
  *(float *)(iVar8 + 8) = fVar19 + ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  func_004356B4((int *)puVar7[0xb]);
  piVar6 = (int *)func_0054D964((int)puVar16,2);
  uVar24 = *(undefined8 *)(puVar7 + -0xf);
  fVar25 = ALBW_AS_F32(puVar7[-0xd]);
  fVar20 = func_0054DE3C(puVar16,0,1);
  fVar19 = DAT_002c98e8;
  piVar6[1] = (int)uVar24;
  fVar25 = fVar25 - DAT_002c98ec;
  piVar6[2] = (int)ALBW_AS_U32((fVar20 + fVar19 + ALBW_AS_F32(((ulonglong)uVar24 >> 0x20))));
  piVar6[3] = (int)ALBW_AS_U32(fVar25);
  func_004356B4(piVar6);
  puVar7[0xc] = piVar6;
  piVar6[0xb] = piVar6[0xb] | 0x10000;
  *(undefined2 *)(puVar7[0xc] + 0x28) = 0x1a0;
  puVar10 = (undefined4 *)func_0010BAB4(100);
  iVar8 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    iVar8 = func_004EE484(puVar10);
  }
  puVar7[0xd] = iVar8;
  local_60 = puVar7[-0x50];
  objStack_70[0] = DAT_002c98f0;
  auVar4[0] = objStack_70[0];
  (*(undefined2 *)((char *)&objStack_70[0] + 0)) = (undefined2)DAT_002c98f0;
  uVar3 = (undefined2)objStack_70[0];
  objStack_70[0] = auVar4[0];
  func_0014EB8C(iVar8,puVar7[0xc],(undefined2 *)puVar7[-0x1b],&local_60,
                *(undefined2 *)(puVar7 + -0xee),puVar7 + 0x17,uVar3);
  puVar11 = (undefined2 *)func_0054DDF4((int)puVar16,1);
  func_00150688(puVar16,puVar7[0xd],puVar11);
  objStack_70[0] = 0;
  iVar8 = func_0014E428((int)puVar16,0,0,0,1,0,0);
  puVar7[9] = iVar8;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar7[-9],(float *)(puVar7 + -0xf));
  func_004CEAF0(puVar7[9]);
  *(char *)(puVar7 + 0x10) = (char)*(undefined2 *)((int)param_2 + 0x2a);
  *(undefined1 *)((int)puVar7 + 6) = 2;
  puVar7[5] = puVar16;
  iVar8 = func_0010BA78(0x20);
  puVar7[6] = iVar8;
  puVar7[7] = iVar8 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  iVar12 = 2;
  puVar10 = (undefined4 *)(iVar8 + -8);
  do {
    uVar14 = puVar9[0xf];
    iVar12 = iVar12 + -1;
    puVar10[2] = puVar9[0xe];
    puVar10[3] = uVar14;
    uVar14 = puVar9[0xf];
    puVar10[4] = puVar9[0xe];
    puVar10[5] = uVar14;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar7 + 6);
  uVar17 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar7[8] = puVar10;
  if (uVar17 != 0) {
    puVar13 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar9[9];
      *puVar10 = puVar9[8];
      puVar10[1] = uVar14;
      puVar13 = puVar10;
    }
    for (iVar8 = (int)uVar17 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar14 = puVar9[9];
      puVar13[2] = puVar9[8];
      puVar13[3] = uVar14;
      uVar14 = puVar9[9];
      puVar13[4] = puVar9[8];
      puVar13[5] = uVar14;
      puVar13 = puVar13 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar2 = DAT_002c98f4;
  iVar8 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 2;
    *puVar10 = 0x24;
    iVar8 = func_00100118((int)(puVar10 + 2),puVar2,0x24,2);
  }
  if (iVar8 != 0) {
    puVar7[2] = 2;
    puVar7[3] = iVar8;
  }
  iVar8 = DAT_002c98f8;
  puVar7[-0x2e] = puVar7;
  iVar12 = DAT_002c9908;
  *(undefined2 *)(iVar8 + (int)puVar16) = 2;
  local_64 = (uint *)s_cState_Wait_002c98fc;
  local_68 = iVar12;
  iVar8 = puVar7[3];
  puVar18 = *(uint **)(iVar8 + 4);
  local_5c = puVar7;
  (**(code **)(iVar12 + 8))(&local_68);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_64 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002c9918;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002c9918:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar17) {
    uVar17 = iVar8 - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar17);
  *(undefined1 *)((int)puVar18 + uVar17) = 0;
  puVar10 = (undefined4 *)puVar7[6];
  uVar14 = puVar9[5];
  uVar15 = puVar9[6];
  uVar21 = puVar9[7];
  uVar22 = puVar9[8];
  uVar23 = puVar9[9];
  *puVar10 = puVar9[4];
  puVar10[1] = uVar14;
  puVar10 = (undefined4 *)puVar7[7];
  *puVar10 = uVar15;
  puVar10[1] = uVar21;
  puVar10 = (undefined4 *)puVar7[8];
  *puVar10 = uVar22;
  puVar10[1] = uVar23;
  local_64 = (uint *)s_cState_Burn_002c9b24;
  local_68 = iVar12;
  if ((uint)puVar7[2] < 2) {
    iVar8 = puVar7[3];
  }
  else {
    iVar8 = puVar7[3] + 0x24;
  }
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar12 + 8))(&local_68);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_64 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002c99cc;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002c99cc:
  if (*(int *)(iVar8 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar17);
  *(undefined1 *)((int)puVar18 + uVar17) = 0;
  iVar8 = puVar7[6];
  uVar14 = puVar9[8];
  uVar15 = puVar9[9];
  uVar21 = puVar9[0xb];
  uVar22 = puVar9[0xc];
  uVar23 = puVar9[0xd];
  *(undefined4 *)(iVar8 + 8) = puVar9[10];
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  iVar8 = puVar7[7];
  *(undefined4 *)(iVar8 + 8) = uVar22;
  *(undefined4 *)(iVar8 + 0xc) = uVar23;
  iVar8 = puVar7[8];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  piVar6 = (int *)func_00521028((int)puVar16);
  (**(code **)(*piVar6 + 8))(piVar6);
  func_003529A0(auStack_58,piVar6[1],puVar7 + -0x3b);
  local_40 = (uint)(*(short *)((int)puVar7 + -0x3de) != 1 && *(short *)((int)puVar7 + -0x3de) != 2);
  func_002C41BC(puVar7 + -0x3b,auStack_58,0);
  if ((*(char *)(puVar7 + -0xf6) == '\0') || (*(short *)((int)puVar7 + -0x3d6) == 0)) {
    if (*(short *)(puVar7 + -0xf7) == 0) {
      if (*(short *)((int)puVar7 + -0x3d6) != 0) {
        func_00588C14((int)puVar16,0,0);
      }
      goto LAB_002c9b08;
    }
    if (*(short *)((int)puVar7 + -0x3d6) != 0) {
      func_00588C14((int)puVar16,0,1);
    }
  }
  else {
    bVar5 = func_00588BF0((int)puVar16,0);
    if (!bVar5) {
LAB_002c9b08:
      func_00663578(local_5c,0);
      return puVar16;
    }
  }
  func_00663578(local_5c,1);
  return puVar16;
}

