#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_006610B4(undefined4 *param_1,undefined1 param_2);
extern int iRam00281434;
extern int iRam00281444;
extern undefined4 *puRam00281430;
extern int DAT_0028141c;
extern undefined4 DAT_00281420;
extern undefined4 *DAT_00281424;
extern int DAT_00281428;
extern undefined4 DAT_0028142c;
extern char s_cState_Fall_00281790[];
extern char s_cState_Rise_00281784[];
extern char s_cState_Shake_00281774[];
extern char s_cState_Wait_00281438[];

// USA 002810A0 <- EU 002810C8 (Ghidra, non-matching)
// GLOBAL DAT_0028141c int
// GLOBAL DAT_00281420 undefined4
// GLOBAL DAT_00281424 undefined4 *
// GLOBAL DAT_00281428 int
// GLOBAL DAT_0028142c undefined4
// GLOBAL UNK_00281430 undefined *
// GLOBAL UNK_00281434 int
// GLOBAL UNK_00281444 int
// GLOBAL s_cState_Fall_00281790 string
// GLOBAL s_cState_Rise_00281784 string
// GLOBAL s_cState_Shake_00281774 string
// GLOBAL s_cState_Wait_00281438 string

undefined4 * func_002810A0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define puStack_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0028141c;
  *piVar3 = DAT_0028141c;
  piVar3[0x103] = 0;
  piVar3[200] = iVar4 + 0x54;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x104] = iVar4;
  iVar4 = func_0054D89C((int)piVar3,0);
  piVar3[0x105] = iVar4;
  puVar5 = func_0010A794(piVar3 + 0x106);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar11 = DAT_00281420;
  puVar5[10] = 0;
  puVar5[0xb] = uVar11;
  puVar16 = puVar5 + -0x106;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar6);
  }
  puVar5[0xc] = puVar7;
  puVar7 = DAT_00281424;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  *(undefined1 *)((int)puVar5 + 0x3d) = 0;
  uVar11 = puVar7[1];
  uVar13 = puVar7[2];
  puVar5[0x10] = *puVar7;
  puVar5[0x11] = uVar11;
  puVar5[0x12] = uVar13;
  iVar4 = DAT_00281428;
  uVar12 = param_2[2];
  uVar14 = param_2[3];
  puVar5[0x13] = param_2[1];
  puVar5[0x14] = uVar12;
  puVar5[0x15] = uVar14;
  puVar5[0x16] = 0;
  uVar11 = *(undefined4 *)(iVar4 + 0xc);
  puVar5[0x19] = *(undefined4 *)(iVar4 + 8);
  puVar5[0x1a] = uVar11;
  puVar5[0x17] = DAT_0028142c;
  puVar5[0x18] = puVar16;
  iVar8 = puVar5[-2];
  uVar11 = puVar5[-0x11];
  uVar13 = puVar5[-0x10];
  *(undefined4 *)(iVar8 + 4) = puVar5[-0x12];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  func_004356B4((int *)puVar5[-2]);
  func_00151148(puVar5[-1],0);
  piVar3 = (int *)func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar5[-3] = piVar3;
  (**(code **)(*piVar3 + 0x10))(piVar3,0x24);
  iVar8 = puVar5[-3];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar5[-0xc],(float *)(puVar5 + -0x12));
  iVar8 = puVar5[-3];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar8 + 0x74) = puVar5[0x10];
  *(undefined4 *)(iVar8 + 0x78) = puVar5[0x11];
  *(undefined4 *)(iVar8 + 0x7c) = puVar5[0x12];
  func_004CEAF0(puVar5[-3]);
  iVar8 = puVar5[-2];
  uVar11 = puVar5[-0x11];
  uVar13 = puVar5[-0x10];
  *(undefined4 *)(iVar8 + 4) = puVar5[-0x12];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  func_004356B4((int *)puVar5[-2]);
  func_001512B4(puVar5[-1],(float *)(puVar5 + -0x12));
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar16;
  puVar6 = puVar5;
  iVar8 = func_0010BA78(0x40);
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar9 = 4;
  puVar7 = (undefined4 *)(iVar8 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar4 + 0x5c);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(iVar4 + 0x58);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar4 + 0x5c);
    puVar7[4] = *(undefined4 *)(iVar4 + 0x58);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar5[8] = puVar7;
  if (uVar12 != 0) {
    puVar10 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar4 + 0x24);
      *puVar7 = *(undefined4 *)(iVar4 + 0x20);
      puVar7[1] = uVar11;
      puVar10 = puVar7;
    }
    for (iVar8 = (int)uVar12 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar11 = *(undefined4 *)(iVar4 + 0x24);
      puVar10[2] = *(undefined4 *)(iVar4 + 0x20);
      puVar10[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar4 + 0x24);
      puVar10[4] = *(undefined4 *)(iVar4 + 0x20);
      puVar10[5] = uVar11;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = puRam00281430;
  iVar4 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    *puVar7 = 0x24;
    iVar4 = func_00100118((int)(puVar7 + 2),puVar2,0x24,4);
  }
  if (iVar4 != 0) {
    puVar5[2] = 4;
    puVar5[3] = iVar4;
  }
  iVar8 = iRam00281444;
  iVar4 = iRam00281434;
  puVar5[-0x31] = puVar6;
  *(undefined2 *)(iVar4 + (int)puVar16) = 4;
  puStack_2c = (uint *)s_cState_Wait_00281438;
  iStack_30 = iVar8;
  iVar4 = puVar5[3];
  puVar17 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar8 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00281454;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00281454:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar12) {
    uVar12 = iVar4 - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar17,puStack_2c,uVar12);
  *(undefined1 *)((int)puVar17 + uVar12) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar13 = *(undefined4 *)(DAT_00281428 + 0x18);
  uVar18 = *(undefined4 *)(DAT_00281428 + 0x1c);
  uVar19 = *(undefined4 *)(DAT_00281428 + 0x20);
  uVar15 = *(undefined4 *)(DAT_00281428 + 0x14);
  uVar11 = *(undefined4 *)(DAT_00281428 + 0x24);
  *puVar7 = *(undefined4 *)(DAT_00281428 + 0x10);
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar13;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar5[8];
  puVar7[1] = uVar11;
  *puVar7 = uVar19;
  puStack_2c = (uint *)s_cState_Shake_00281774;
  iStack_30 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar4 = puVar5[3];
  }
  else {
    iVar4 = puVar5[3] + 0x24;
  }
  puVar17 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar8 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0028151c;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0028151c:
  if (*(int *)(iVar4 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar17,puStack_2c,uVar12);
  iVar4 = DAT_00281428;
  *(undefined1 *)((int)puVar17 + uVar12) = 0;
  iVar9 = puVar5[6];
  uVar15 = *(undefined4 *)(iVar4 + 0x30);
  uVar11 = *(undefined4 *)(iVar4 + 0x2c);
  uVar13 = *(undefined4 *)(iVar4 + 0x34);
  uVar18 = *(undefined4 *)(iVar4 + 0x20);
  uVar19 = *(undefined4 *)(iVar4 + 0x24);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 8) = uVar15;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar5[8];
  *(undefined4 *)(iVar4 + 8) = uVar18;
  *(undefined4 *)(iVar4 + 0xc) = uVar19;
  puStack_2c = (uint *)s_cState_Rise_00281784;
  iStack_30 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar4 = puVar5[3];
  }
  else {
    iVar4 = puVar5[3] + 0x48;
  }
  puVar17 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar8 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002815f4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002815f4:
  if (*(int *)(iVar4 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar17,puStack_2c,uVar12);
  *(undefined1 *)((int)puVar17 + uVar12) = 0;
  iVar4 = DAT_00281428;
  iVar9 = puVar5[6];
  uVar11 = *(undefined4 *)(DAT_00281428 + 0x40);
  uVar13 = *(undefined4 *)(DAT_00281428 + 0x20);
  uVar15 = *(undefined4 *)(DAT_00281428 + 0x3c);
  uVar18 = *(undefined4 *)(DAT_00281428 + 0x44);
  uVar19 = *(undefined4 *)(DAT_00281428 + 0x24);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(DAT_00281428 + 0x38);
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar11;
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar19;
  puStack_2c = (uint *)s_cState_Fall_00281790;
  iStack_30 = iVar8;
  uVar12 = puVar5[2];
  if (uVar12 < 4) {
    iVar9 = puVar5[3];
    uVar14 = uVar12;
  }
  else {
    iVar9 = iVar8;
    uVar14 = puVar5[3];
  }
  if (3 < uVar12) {
    iVar9 = uVar14 + 0x6c;
  }
  puVar17 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&iStack_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_002816cc;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_002816cc:
  if (*(int *)(iVar9 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar17,puStack_2c,uVar12);
  *(undefined1 *)((int)puVar17 + uVar12) = 0;
  iVar8 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar4 + 0x50);
  uVar15 = *(undefined4 *)(iVar4 + 0x20);
  uVar18 = *(undefined4 *)(iVar4 + 0x4c);
  uVar19 = *(undefined4 *)(iVar4 + 0x54);
  uVar13 = *(undefined4 *)(iVar4 + 0x24);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar11;
  *(undefined4 *)(iVar4 + 0x1c) = uVar19;
  iVar4 = puVar5[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar15;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  func_006610B4(puVar6,0);
  uVar12 = param_2[10];
  *(char *)(puVar5 + 0xf) = (char)(ushort)uVar12;
  if (((ushort)uVar12 & 0xff) == 1) {
    *(undefined1 *)((int)puVar5 + 0x3d) =
         *(undefined1 *)(DAT_00281428 + *(short *)((int)param_2 + 0x2a));
  }
  return puVar16;
}

