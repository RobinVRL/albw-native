#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00109DE4(int param_1);
extern int func_00109E58(undefined4 *param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010B7A4(int param_1,int param_2);
extern int func_0010B7D8(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_0010C428(undefined4 *param_1);
extern int func_0010C864(undefined4 *param_1,float fparam_0);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern void *func_0010E74C();
extern int func_0010F1DC(int *param_1,int *param_2);
extern undefined *DAT_00107428;
extern undefined *DAT_0010742c;
extern float DAT_00107430;
extern undefined4 *DAT_00107874;
extern undefined *DAT_00107878;
extern int DAT_0010788c;
extern char s_cState_Normal_0010787c[];
extern char s_cState_PlayerDownResurge_001078a4[];
extern char s_cState_PlayerDown_00107890[];

// USA 00107018 <- EU 00107018 (Ghidra, non-matching)
// GLOBAL DAT_00107428 undefined *
// GLOBAL DAT_0010742c undefined *
// GLOBAL DAT_00107430 float
// GLOBAL DAT_00107874 undefined4 *
// GLOBAL DAT_00107878 undefined *
// GLOBAL DAT_0010788c int
// GLOBAL s_cState_Normal_0010787c string
// GLOBAL s_cState_PlayerDownResurge_001078a4 string
// GLOBAL s_cState_PlayerDown_00107890 string

int * func_00107018(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fparam_0;
  ulonglong uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  puVar2 = DAT_00107428;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar3 = func_00100118((int)(param_1 + 5),puVar2,0x10,5);
  iVar3 = func_0010C428((undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  puVar4 = func_0010A794((undefined4 *)(iVar3 + 0x60));
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  iVar3 = func_00100118((int)(puVar4 + 9),DAT_0010742c,0x10,4);
  fparam_0 = DAT_00107430;
  uVar19 = (ulonglong)(uint)ALBW_AS_U32(DAT_00107430);
  *(undefined4 *)(iVar3 + 0x40) = 0;
  puVar4 = func_0010B7D8((undefined4 *)(iVar3 + 0x44),0,fparam_0);
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  piVar12 = puVar4 + -0x4b;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0xffffffff;
  puVar4[0x19] = 0xffffffff;
  puVar4[0x1a] = 0xffffffff;
  puVar4[0x1b] = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x1c) = 0;
  *(undefined2 *)((int)puVar4 + 0x72) = 0;
  puVar4[0x1d] = 0;
  *(undefined1 *)(puVar4 + 0x1e) = 1;
  *(undefined1 *)((int)puVar4 + 0x79) = 0;
  *(undefined1 *)((int)puVar4 + 0x7a) = 0;
  puVar4[0x1f] = 0;
  iVar3 = func_0010CEE0(0x3a0,(int *)0x0,4);
  if (iVar3 != 0) {
    iVar8 = 0;
    iVar10 = 7;
    puVar4[-0x48] = iVar3;
    do {
      iVar10 = iVar10 + -1;
      *(int *)(iVar3 + iVar8 * 4) = iVar3 + (iVar8 + 0x1c) * 4;
      iVar8 = iVar8 + 0x1c;
    } while (iVar10 != 0);
    *(undefined4 *)(iVar3 + 0x310) = 0;
    puVar4[-0x47] = iVar3;
    func_0010B3EC(piVar12,8,iVar3 + 0x380);
  }
  iVar3 = func_0010B3C0(piVar12,0,8);
  if (iVar3 != 0) {
    if (0 < *piVar12) {
      func_0010E74C((uint *)puVar4[-0x49] + 8,(uint *)puVar4[-0x49],*piVar12 << 2,
                               fparam_0);
    }
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)puVar4[-0x48];
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar4[-0x48] = *puVar5;
        puVar6 = func_00109E58(puVar5,piVar12);
      }
      iVar8 = iVar3 + 1;
      *(undefined4 **)(puVar4[-0x49] + iVar3 * 4) = puVar6;
      iVar3 = iVar8;
    } while (iVar8 < 8);
    *piVar12 = *piVar12 + 8;
  }
  for (iVar3 = 0; iVar3 != 5; iVar3 = iVar3 + 1) {
    piVar12[iVar3 * 4 + 8] = 0;
  }
  for (piVar13 = (int *)puVar4[-0x49]; piVar13 != (int *)(puVar4[-0x49] + *piVar12 * 4);
      piVar13 = piVar13 + 1) {
    func_00109DE4(*piVar13);
    func_0010F1DC(puVar4 + -0x36,(int *)(puVar4[-0x33] + *piVar13));
    puVar4[-0x34] = puVar4[-0x34] + 1;
  }
  iVar3 = func_0010CEE0(0x70,(int *)0x0,4);
  if (iVar3 != 0) {
    iVar8 = 0;
    iVar10 = 3;
    puVar4[0x16] = iVar3;
    do {
      iVar10 = iVar10 + -1;
      *(int *)(iVar3 + iVar8 * 4) = iVar3 + (iVar8 + 6) * 4;
      iVar8 = iVar8 + 6;
    } while (iVar10 != 0);
    *(undefined4 *)(iVar3 + 0x48) = 0;
    puVar4[0x17] = iVar3;
    func_0010B3EC(puVar4 + 0x13,4,iVar3 + 0x60);
  }
  piVar13 = puVar4 + 0x13;
  iVar3 = func_0010B3C0(piVar13,0,4);
  if (iVar3 != 0) {
    if (0 < *piVar13) {
      func_0010E74C((uint *)puVar4[0x15] + 4,(uint *)puVar4[0x15],*piVar13 << 2,fparam_0)
      ;
    }
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)puVar4[0x16];
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        fparam_0 = ALBW_AS_F32(uVar19);
        puVar4[0x16] = *puVar5;
        puVar6 = func_0010C864(puVar5,fparam_0);
      }
      iVar8 = iVar3 + 1;
      *(undefined4 **)(puVar4[0x15] + iVar3 * 4) = puVar6;
      iVar3 = iVar8;
    } while (iVar8 < 4);
    *piVar13 = *piVar13 + 4;
  }
  iVar3 = func_0010CEE0(0xb4,(int *)0x0,4);
  if (iVar3 != 0) {
    iVar8 = 0;
    iVar10 = 2;
    puVar4[0x11] = iVar3;
    do {
      iVar10 = iVar10 + -1;
      *(int *)(iVar3 + iVar8 * 4) = iVar3 + (iVar8 + 0xe) * 4;
      iVar8 = iVar8 + 0xe;
    } while (iVar10 != 0);
    *(undefined4 *)(iVar3 + 0x70) = 0;
    puVar4[0x12] = iVar3;
    func_0010B3EC(puVar4 + 0xe,3,iVar3 + 0xa8);
  }
  piVar13 = puVar4 + 0xe;
  iVar3 = func_0010B3C0(piVar13,0,3);
  if (iVar3 != 0) {
    if (0 < *piVar13) {
      func_0010E74C((uint *)puVar4[0x10] + 3,(uint *)puVar4[0x10],*piVar13 << 2,fparam_0);
    }
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)puVar4[0x11];
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar4[0x11] = *puVar5;
        puVar6 = func_0010B7D8(puVar5,2,ALBW_AS_F32(uVar19));
      }
      iVar8 = iVar3 + 1;
      *(undefined4 **)(puVar4[0x10] + iVar3 * 4) = puVar6;
      iVar3 = iVar8;
    } while (iVar8 < 3);
    *piVar13 = *piVar13 + 3;
  }
  for (piVar13 = (int *)puVar4[0x10]; piVar13 != (int *)(puVar4[0x10] + puVar4[0xe] * 4);
      piVar13 = piVar13 + 1) {
    func_0010B7A4((int)puVar4,*piVar13);
  }
  puVar4[-0x15] = piVar12;
  *(undefined1 *)((int)puVar4 + -0x62) = 3;
  iVar3 = func_0010BA78(0x30);
  puVar6 = DAT_00107874;
  puVar4[-0x14] = iVar3;
  puVar4[-0x13] = iVar3 + (uint)*(byte *)((int)puVar4 + -0x62) * 8;
  iVar8 = 3;
  puVar5 = (undefined4 *)(iVar3 + -8);
  do {
    uVar17 = puVar6[1];
    puVar5[2] = *puVar6;
    puVar5[3] = uVar17;
    iVar8 = iVar8 + -1;
    uVar17 = puVar6[1];
    puVar5[4] = *puVar6;
    puVar5[5] = uVar17;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + -0x62);
  uVar14 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[-0x12] = puVar5;
  if (uVar14 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar17;
      puVar7 = puVar5;
    }
    for (iVar3 = (int)uVar14 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar17 = puVar6[5];
      puVar7[2] = puVar6[4];
      puVar7[3] = uVar17;
      uVar17 = puVar6[5];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar17;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar3 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 3;
    iVar3 = func_00100118((int)(puVar5 + 2),DAT_00107878,0x24,3);
  }
  if (iVar3 != 0) {
    puVar4[-0x17] = iVar3;
    puVar4[-0x18] = 3;
  }
  iVar3 = DAT_0010788c;
  local_34 = (uint *)s_cState_Normal_0010787c;
  local_38 = DAT_0010788c;
  iVar8 = puVar4[-0x17];
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_0010788c + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_00107600;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_00107600:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar14) {
    uVar14 = iVar8 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar5 = (undefined4 *)puVar4[-0x14];
  uVar15 = puVar6[2];
  uVar11 = *puVar6;
  uVar17 = puVar6[3];
  uVar18 = puVar6[4];
  uVar9 = puVar6[5];
  puVar5[1] = puVar6[1];
  *puVar5 = uVar11;
  puVar5 = (undefined4 *)puVar4[-0x13];
  puVar5[1] = uVar17;
  *puVar5 = uVar15;
  puVar5 = (undefined4 *)puVar4[-0x12];
  puVar5[1] = uVar9;
  *puVar5 = uVar18;
  local_34 = (uint *)s_cState_PlayerDown_00107890;
  local_38 = iVar3;
  if ((uint)puVar4[-0x18] < 2) {
    iVar8 = puVar4[-0x17];
  }
  else {
    iVar8 = puVar4[-0x17] + 0x24;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar3 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001076d0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001076d0:
  if (*(int *)(iVar8 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar8 = puVar4[-0x14];
  uVar17 = puVar6[6];
  uVar11 = puVar6[7];
  uVar9 = puVar6[4];
  uVar18 = puVar6[5];
  uVar15 = puVar6[1];
  *(undefined4 *)(iVar8 + 8) = *puVar6;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar4[-0x13];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  iVar8 = puVar4[-0x12];
  *(undefined4 *)(iVar8 + 8) = uVar9;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  local_34 = (uint *)s_cState_PlayerDownResurge_001078a4;
  local_38 = iVar3;
  if ((uint)puVar4[-0x18] < 3) {
    iVar8 = puVar4[-0x17];
  }
  else {
    iVar8 = puVar4[-0x17] + 0x48;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar3 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001077a0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001077a0:
  if (*(int *)(iVar8 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar3 = puVar4[-0x14];
  uVar18 = puVar6[1];
  uVar17 = puVar6[4];
  uVar15 = puVar6[5];
  uVar9 = puVar6[9];
  uVar11 = puVar6[8];
  *(undefined4 *)(iVar3 + 0x10) = *puVar6;
  *(undefined4 *)(iVar3 + 0x14) = uVar18;
  iVar3 = puVar4[-0x13];
  *(undefined4 *)(iVar3 + 0x10) = uVar11;
  *(undefined4 *)(iVar3 + 0x14) = uVar9;
  iVar3 = puVar4[-0x12];
  *(undefined4 *)(iVar3 + 0x10) = uVar17;
  *(undefined4 *)(iVar3 + 0x14) = uVar15;
  func_0010BC94(puVar4 + -0x1a,0);
  uVar17 = puVar6[10];
  uVar9 = puVar6[0xb];
  puVar4[-0x10] = piVar12;
  puVar4[-0xf] = uVar17;
  puVar4[-0xe] = uVar9;
  uVar17 = puVar6[0xc];
  uVar9 = puVar6[0xd];
  puVar4[-0xc] = piVar12;
  puVar4[-0xb] = uVar17;
  puVar4[-10] = uVar9;
  uVar17 = puVar6[0xe];
  uVar9 = puVar6[0xf];
  puVar4[-8] = piVar12;
  puVar4[-7] = uVar17;
  puVar4[-6] = uVar9;
  uVar17 = puVar6[0x10];
  uVar9 = puVar6[0x11];
  puVar4[-4] = piVar12;
  puVar4[-3] = uVar17;
  puVar4[-2] = uVar9;
  return piVar12;
}

