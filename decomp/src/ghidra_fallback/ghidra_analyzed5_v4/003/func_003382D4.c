#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00665B80(undefined4 *param_1,undefined1 param_2);
extern int DAT_00338760;
extern undefined4 *DAT_00338764;
extern undefined4 DAT_00338768;
extern int DAT_0033877c;
extern undefined4 DAT_00338780;
extern undefined4 DAT_00338784;
extern undefined4 DAT_00338788;
extern int *DAT_0033878c;
extern undefined *DAT_00338790;
extern int DAT_00338794;
extern char s_SwitchSunlight_0033876c[];
extern char s_cState_Shine_00338994[];
extern char s_cState_SwitchOn_003387a4[];
extern char s_cState_Wait_00338798[];

// USA 003382D4 <- EU 003382B0 (Ghidra, non-matching)
// GLOBAL DAT_00338760 int
// GLOBAL DAT_00338764 undefined4 *
// GLOBAL DAT_00338768 undefined4
// GLOBAL DAT_0033877c int
// GLOBAL DAT_00338780 undefined4
// GLOBAL DAT_00338784 undefined4
// GLOBAL DAT_00338788 undefined4
// GLOBAL DAT_0033878c int *
// GLOBAL DAT_00338790 undefined *
// GLOBAL DAT_00338794 int
// GLOBAL s_SwitchSunlight_0033876c string
// GLOBAL s_cState_Shine_00338994 string
// GLOBAL s_cState_SwitchOn_003387a4 string
// GLOBAL s_cState_Wait_00338798 string

undefined4 * func_003382D4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_ac ((uint *)(albw_frame + 0x4))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(uint *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_50 (*(int *)(albw_frame + 0x60))
  #define local_4c (*(uint * *)(albw_frame + 0x64))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x74))
  #define local_38 ((uint *)(albw_frame + 0x78))
  piVar4 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00338760;
  piVar4[200] = DAT_00338760 + 0x54;
  *piVar4 = iVar8;
  piVar4[0x103] = 0;
  piVar4[0x104] = 0;
  puVar5 = func_0010A794(piVar4 + 0x105);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar14 = puVar5 + -0x105;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar5[9] = puVar7;
  piVar4 = puVar5 + 9;
  iVar8 = func_0054D964((int)puVar14,0);
  puVar7 = DAT_00338764;
  puVar5[10] = iVar8;
  *(undefined2 *)(puVar5 + 0xb) = 0;
  uVar12 = puVar7[1];
  puVar5[0xe] = *puVar7;
  puVar5[0xf] = uVar12;
  puVar5[0xc] = DAT_00338768;
  puVar5[0xd] = puVar14;
  piVar15 = puVar5 + 10;
  iVar8 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[-2] = iVar8;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar8 + 0x8c) = puVar5[-0x11];
  *(undefined4 *)(iVar8 + 0x9c) = puVar5[-0x10];
  *(undefined4 *)(iVar8 + 0xac) = puVar5[-0xf];
  uVar12 = func_0014E904((int)puVar14,1,1);
  puVar5[-1] = uVar12;
  iVar8 = DAT_0033877c;
  local_4c = (uint *)s_SwitchSunlight_0033876c;
  local_50 = DAT_0033877c;
  func_00169608((uint *)puVar5[-1],0,&local_50,*(int *)(puVar5[-0x51] + 0x1c8));
  func_00133870(puVar5[-1],0,puVar5[-2]);
  uVar13 = 0xffffffff;
  func_0016A02C(puVar5[-1],-1,(int *)0xffffffff,0);
  local_ac[1] = 3;
  local_a4 = &local_a0;
  local_8c = uVar13 | 0xff;
  local_58 = 10;
  local_54 = 0;
  local_ac[0] = 1;
  local_a0 = 0;
  local_9c = DAT_00338784;
  local_98 = DAT_00338780;
  local_94 = DAT_00338788;
  local_90 = DAT_00338780;
  func_0016898C(puVar5[-1],local_ac);
  uVar12 = puVar5[-0x11];
  uVar22 = *(undefined8 *)(puVar5 + -0x10);
  fVar17 = func_0054DE3C(puVar14,0,1);
  iVar9 = puVar5[10];
  *(undefined4 *)(iVar9 + 4) = uVar12;
  *(float *)(iVar9 + 8) = fVar17 + ALBW_AS_F32(uVar22);
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar22 >> 0x20);
  *(undefined2 *)(*piVar15 + 0x28) = 0xa4;
  func_004356B4((int *)*piVar15);
  *(int *)(puVar5[9] + 0x18) = *piVar15;
  func_004ED9C8(*piVar4);
  local_38[0] = puVar5[-0x52];
  func_004EDAD0(*piVar4,local_38);
  *(short *)(*piVar4 + 0x2c) = (short)param_2[0x14];
  func_004A879C(*DAT_0033878c,*piVar4,2);
  *(undefined1 *)((int)puVar5 + 6) = 3;
  puVar5[5] = puVar14;
  iVar9 = func_0010BA78(0x30);
  puVar5[6] = iVar9;
  puVar7 = DAT_00338764;
  puVar5[7] = iVar9 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 3;
  puVar6 = (undefined4 *)(iVar9 + -8);
  do {
    uVar12 = puVar7[0x11];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar7[0x10];
    puVar6[3] = uVar12;
    uVar12 = puVar7[0x11];
    puVar6[4] = puVar7[0x10];
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar6;
  if (uVar13 != 0) {
    puVar10 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar7[7];
      *puVar6 = puVar7[6];
      puVar6[1] = uVar12;
      puVar10 = puVar6;
    }
    for (iVar9 = (int)uVar13 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar12 = puVar7[7];
      puVar10[2] = puVar7[6];
      puVar10[3] = uVar12;
      uVar12 = puVar7[7];
      puVar10[4] = puVar7[6];
      puVar10[5] = uVar12;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_00338790,0x24,3);
  }
  if (iVar9 != 0) {
    puVar5[2] = 3;
    puVar5[3] = iVar9;
  }
  iVar9 = DAT_00338794;
  puVar5[-0x30] = puVar5;
  *(undefined2 *)(iVar9 + (int)puVar14) = 3;
  local_4c = (uint *)s_cState_Wait_00338798;
  local_50 = iVar8;
  iVar9 = puVar5[3];
  puVar16 = *(uint **)(iVar9 + 4);
  local_3c = puVar5;
  (**(code **)(iVar8 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003386a0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003386a0:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar13) {
    uVar13 = iVar9 - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar16,local_4c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar12 = DAT_00338764[3];
  uVar20 = DAT_00338764[4];
  uVar18 = DAT_00338764[6];
  uVar21 = DAT_00338764[5];
  uVar19 = DAT_00338764[7];
  *puVar7 = DAT_00338764[2];
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar20;
  puVar7[1] = uVar21;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_4c = (uint *)s_cState_SwitchOn_003387a4;
  local_50 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003387c0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003387c0:
  if (*(int *)(iVar9 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar16,local_4c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar7 = DAT_00338764;
  iVar11 = puVar5[6];
  uVar12 = DAT_00338764[6];
  uVar18 = DAT_00338764[7];
  uVar19 = DAT_00338764[9];
  uVar20 = DAT_00338764[10];
  uVar21 = DAT_00338764[0xb];
  *(undefined4 *)(iVar11 + 8) = DAT_00338764[8];
  *(undefined4 *)(iVar11 + 0xc) = uVar19;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 8) = uVar20;
  *(undefined4 *)(iVar11 + 0xc) = uVar21;
  iVar11 = puVar5[8];
  *(undefined4 *)(iVar11 + 8) = uVar12;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  local_4c = (uint *)s_cState_Shine_00338994;
  local_50 = iVar8;
  uVar13 = puVar5[2];
  if (uVar13 < 3) {
    iVar9 = puVar5[3];
    uVar2 = uVar13;
  }
  else {
    uVar2 = puVar5[3];
  }
  if (2 < uVar13) {
    iVar9 = uVar2 + 0x48;
  }
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0033888c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0033888c:
  if (*(int *)(iVar9 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar16,local_4c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar8 = puVar5[6];
  uVar19 = puVar7[0xd];
  uVar12 = puVar7[0xe];
  uVar21 = puVar7[0xf];
  uVar18 = puVar7[6];
  uVar20 = puVar7[7];
  *(undefined4 *)(iVar8 + 0x10) = puVar7[0xc];
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar21;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar18;
  *(undefined4 *)(iVar8 + 0x14) = uVar20;
  bVar3 = func_00588BF0((int)puVar14,0);
  if ((bVar3) || ((short)param_2[10] == 1)) {
    iVar8 = *(int *)(puVar5[-1] + 0x14);
    if (*(float *)(iVar8 + 8) != *(float *)(iVar8 + 0x14)) {
      *(float *)(iVar8 + 8) = *(float *)(iVar8 + 0x14);
      *(undefined1 *)(iVar8 + 0x26) = 1;
    }
    func_00168E9C((int *)puVar5[-1],puVar5[-2],(int *)0x0);
    func_00665B80(local_3c,2);
  }
  else {
    func_00665B80(local_3c,0);
  }
  func_004CEAF0(puVar5[-2]);
  return puVar14;
}

