#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0053B530(int param_1,uint param_2,uint param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00657808(undefined4 *param_1,undefined1 param_2);
extern int DAT_00145484;
extern int *DAT_00145488;
extern int *DAT_0014548c;
extern int *DAT_00145490;
extern int *DAT_00145494;
extern int *DAT_00145498;
extern int *DAT_0014549c;
extern int *DAT_001454a0;
extern uint DAT_001454a4;
extern int DAT_001454a8;
extern int *DAT_001454ac;
extern undefined DAT_001454b0;
extern uint DAT_001454b8;
extern uint DAT_001454bc;
extern undefined4 *DAT_001454c0;
extern undefined *DAT_001454c4;
extern int DAT_001454c8;
extern undefined4 *DAT_0014585c;
extern float DAT_00145880;
extern float DAT_00145884;
extern int *DAT_00145888;
extern char s_cState_Fall_00145860[];
extern char s_cState_Rail_001454d8[];
extern char s_cState_SceneChange_0014586c[];
extern char s_cState_Wait_001454cc[];

// USA 00144F4C <- EU 00144F4C (Ghidra, non-matching)
// GLOBAL DAT_00145484 int
// GLOBAL DAT_00145488 int *
// GLOBAL DAT_0014548c int *
// GLOBAL DAT_00145490 int *
// GLOBAL DAT_00145494 int *
// GLOBAL DAT_00145498 int *
// GLOBAL DAT_0014549c int *
// GLOBAL DAT_001454a0 int *
// GLOBAL DAT_001454a4 uint
// GLOBAL DAT_001454a8 int
// GLOBAL DAT_001454ac int *
// GLOBAL DAT_001454b0 undefined
// GLOBAL DAT_001454b8 uint
// GLOBAL DAT_001454bc uint
// GLOBAL DAT_001454c0 undefined4 *
// GLOBAL DAT_001454c4 undefined *
// GLOBAL DAT_001454c8 int
// GLOBAL DAT_0014585c undefined4 *
// GLOBAL DAT_00145880 float
// GLOBAL DAT_00145884 float
// GLOBAL DAT_00145888 int *
// GLOBAL s_cState_Fall_00145860 string
// GLOBAL s_cState_Rail_001454d8 string
// GLOBAL s_cState_SceneChange_0014586c string
// GLOBAL s_cState_Wait_001454cc string

/* WARNING: Variable defined which should be unmapped: objStack_d0 */

undefined4 * func_00144F4C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_60 (*(int *)(albw_frame + 0x70))
  #define local_5c (*(uint * *)(albw_frame + 0x74))
  #define local_54 (*(int * *)(albw_frame + 0x7c))
  #define local_4c ((uint *)(albw_frame + 0x84))
  #define local_40 (*(int *)(albw_frame + 0x90))
  #define local_3c (*(undefined * *)(albw_frame + 0x94))
  piVar5 = (int *)func_001E6CEC(param_1,param_2,0x10);
  iVar7 = DAT_00145484;
  *piVar5 = DAT_00145484;
  piVar5[200] = iVar7 + 0x98;
  piVar5[0x1e3] = 0;
  puVar6 = func_0010A794(piVar5 + 0x1e4);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar12 = puVar6 + -0x1e4;
  puVar6[9] = 0;
  iVar7 = func_0054D964((int)puVar12,1);
  puVar6[10] = iVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  puVar6[0xb] = puVar9;
  puVar6[0xc] = 0;
  puVar6[0xd] = param_2[7];
  *(undefined1 *)(puVar6 + 0xe) = 0x7f;
  *(undefined1 *)((int)puVar6 + 0x39) = 0;
  *(undefined1 *)((int)puVar6 + 0x3a) = 0;
  *(undefined1 *)((int)puVar6 + 0x3b) = 0;
  iVar7 = func_00588BE4((int)puVar12);
  if (iVar7 == *DAT_00145488) {
    *(undefined1 *)((int)puVar6 + 0x39) = 0;
  }
  else if (iVar7 == *DAT_0014548c) {
    *(undefined1 *)((int)puVar6 + 0x39) = 1;
  }
  else if (iVar7 == *DAT_00145490) {
    *(undefined1 *)((int)puVar6 + 0x39) = 2;
  }
  else if (iVar7 == *DAT_00145494) {
    *(undefined1 *)((int)puVar6 + 0x39) = 3;
  }
  else if (iVar7 == *DAT_00145498) {
    *(undefined1 *)((int)puVar6 + 0x39) = 4;
  }
  else {
    if (iVar7 == *DAT_0014549c) {
      uVar4 = 5;
    }
    else {
      if (iVar7 != *DAT_001454a0) goto LAB_00145094;
      uVar4 = 6;
    }
    *(undefined1 *)((int)puVar6 + 0x39) = uVar4;
  }
LAB_00145094:
  func_003249E0((int)puVar12,0);
  puVar6[-2] = *(undefined4 *)(puVar6[-0x130] + 0x1c8);
  objStack_d0[0] = 1;
  objStack_d0[1] = 0;
  objStack_d0[2] = 0;
  iVar7 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  local_54 = puVar6 + -1;
  puVar6[-1] = iVar7;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x90000;
  for (iVar7 = 0; iVar2 = DAT_001454a8, iVar7 < *(int *)(*(int *)(puVar6[-1] + 0x20) + 4);
      iVar7 = iVar7 + 1) {
    func_004D01E0(puVar6[-1],1,iVar7);
  }
  uVar20 = DAT_001454a4;
  if (*(char *)((int)puVar6 + 0x39) == '\x01') {
    uVar15 = func_0014E904((int)puVar12,1,1);
    puVar6[9] = uVar15;
    local_3c = &DAT_001454b0;
    local_40 = iVar2;
    func_00169688((uint *)puVar6[9],0,&local_40,puVar6[-2]);
    func_0016A02C(puVar6[9],-1,(int *)0xffffffff,0);
    objStack_d0[2] = (uint)(objStack_d0 + 3);
    objStack_d0[1] = 3;
    objStack_d0[0] = 1;
    objStack_d0[3] = 0;
    objStack_d0[7] = DAT_001454bc;
    objStack_d0[8] = (uint)param_2 | 0xff;
    objStack_d0[4] = DAT_001454b8;
    objStack_d0[5] = DAT_001454bc;
    uVar13 = DAT_001454b8;
    objStack_d0[6] = uVar20;
    func_0016898C(puVar6[9],objStack_d0);
    *(uint *)(*(int *)(puVar6[9] + 0x14) + 0x10) = uVar13;
    func_00168E9C((int *)puVar6[9],puVar6[-1],(int *)0x0);
  }
  else {
    iVar7 = func_0053B530(*DAT_001454ac,param_2[0xa7],param_2[0xa8]);
    if (iVar7 != 0) {
      puVar9 = (undefined4 *)func_0010BAB4(0x88);
      piVar5 = (int *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        piVar5 = func_002758CC(puVar9,(int *)param_2);
      }
      puVar6[0xc] = piVar5;
      if ((*(short *)((int)param_2 + 0x32) == 0) && ((short)param_2[0xd] == 0)) {
        *(undefined1 *)((int)puVar6 + 0x3b) = 1;
      }
    }
  }
  puVar6[5] = puVar12;
  *(undefined1 *)((int)puVar6 + 6) = 4;
  iVar7 = func_0010BA78(0x40);
  puVar9 = DAT_001454c0;
  iVar11 = 4;
  puVar6[6] = iVar7;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar9[0x13];
    iVar11 = iVar11 + -1;
    puVar8[2] = puVar9[0x12];
    puVar8[3] = uVar15;
    uVar15 = puVar9[0x13];
    puVar8[4] = puVar9[0x12];
    puVar8[5] = uVar15;
    puVar8 = puVar8 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar13 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar6[8] = puVar8;
  if (uVar13 != 0) {
    puVar10 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar9[5];
      *puVar8 = puVar9[4];
      puVar8[1] = uVar15;
      puVar10 = puVar8;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar9[5];
      puVar10[2] = puVar9[4];
      puVar10[3] = uVar15;
      uVar15 = puVar9[5];
      puVar10[4] = puVar9[4];
      puVar10[5] = uVar15;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 4;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_001454c4,0x24,4);
  }
  if (iVar7 != 0) {
    puVar6[2] = 4;
    puVar6[3] = iVar7;
  }
  iVar7 = DAT_001454c8;
  puVar6[-0x10f] = puVar6;
  *(undefined2 *)(iVar7 + (int)puVar12) = 4;
  local_5c = (uint *)s_cState_Wait_001454cc;
  local_60 = iVar2;
  iVar7 = puVar6[3];
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_60);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_5c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001453d0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001453d0:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar13) {
    uVar13 = iVar7 - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar9 = (undefined4 *)puVar6[6];
  uVar16 = DAT_001454c0[1];
  uVar17 = DAT_001454c0[2];
  uVar18 = DAT_001454c0[3];
  uVar19 = DAT_001454c0[4];
  uVar15 = DAT_001454c0[5];
  *puVar9 = *DAT_001454c0;
  puVar9[1] = uVar16;
  puVar9 = (undefined4 *)puVar6[7];
  *puVar9 = uVar17;
  puVar9[1] = uVar18;
  puVar9 = (undefined4 *)puVar6[8];
  *puVar9 = uVar19;
  puVar9[1] = uVar15;
  local_5c = (uint *)s_cState_Rail_001454d8;
  local_60 = iVar2;
  if ((uint)puVar6[2] < 2) {
    iVar7 = puVar6[3];
  }
  else {
    iVar7 = puVar6[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_60);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_5c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001454f0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001454f0:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar6[6];
  uVar15 = *DAT_0014585c;
  uVar16 = DAT_0014585c[1];
  uVar17 = DAT_0014585c[3];
  uVar18 = DAT_0014585c[4];
  uVar19 = DAT_0014585c[5];
  *(undefined4 *)(iVar7 + 8) = DAT_0014585c[2];
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 8) = uVar18;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  local_5c = (uint *)s_cState_Fall_00145860;
  local_60 = iVar2;
  if ((uint)puVar6[2] < 3) {
    iVar7 = puVar6[3];
  }
  else {
    iVar7 = puVar6[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_60);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_5c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001455b4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001455b4:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar9 = DAT_001454c0;
  iVar7 = puVar6[6];
  uVar15 = DAT_001454c0[0xc];
  uVar16 = DAT_001454c0[4];
  uVar17 = DAT_001454c0[0xb];
  uVar18 = DAT_001454c0[0xd];
  uVar19 = DAT_001454c0[5];
  *(undefined4 *)(iVar7 + 0x10) = DAT_001454c0[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar16;
  *(undefined4 *)(iVar7 + 0x14) = uVar19;
  local_5c = (uint *)s_cState_SceneChange_0014586c;
  local_60 = iVar2;
  if ((uint)puVar6[2] < 4) {
    iVar7 = puVar6[3];
  }
  else {
    iVar7 = puVar6[3] + 0x6c;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_60);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_5c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0014568c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0014568c:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar6[6];
  uVar15 = puVar9[0x10];
  uVar18 = puVar9[4];
  uVar19 = puVar9[0xf];
  uVar16 = puVar9[0x11];
  uVar17 = puVar9[5];
  *(undefined4 *)(iVar7 + 0x18) = puVar9[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar19;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar15;
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar18;
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  if (*(char *)((int)puVar6 + 0x39) == '\x01') {
    func_00657808(puVar6,2);
  }
  else if (puVar6[0xc] == 0) {
    func_00657808(puVar6,0);
  }
  else {
    func_00657808(puVar6,1);
  }
  local_70 = ALBW_AS_F32(puVar6[-0xf0]);
  local_6c = ALBW_AS_F32(puVar6[-0xef]);
  local_68 = puVar6[-0xee];
  iVar7 = puVar6[-1];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar7 + 0x80),puVar6[0xd],puVar6[-0xea],&local_70);
  func_004CEAF0(*local_54);
  piVar5 = puVar6 + 10;
  func_00491624((float *)(puVar6[10] + 100),0,puVar6[-0xea],0);
  *(int *)(puVar6[0xb] + 0x18) = *piVar5;
  local_4c[0] = puVar6[-0x131];
  func_004EDAD0(puVar6[0xb],local_4c);
  fVar3 = DAT_00145880;
  *(undefined2 *)(puVar6[0xb] + 0x2c) = *(undefined2 *)(puVar6 + -0x1cf);
  local_6c = local_6c + fVar3;
  func_004D8054(&local_70,puVar6[-0xea],DAT_00145884);
  iVar7 = *piVar5;
  *(float *)(iVar7 + 4) = local_70;
  *(float *)(iVar7 + 8) = local_6c;
  *(undefined4 *)(iVar7 + 0xc) = local_68;
  func_004356B4((int *)*piVar5);
  func_00324964((int)puVar12);
  piVar5 = DAT_00145888;
  if ((puVar6[0xc] == 0) && (*(char *)((int)puVar6 + 0x39) != '\x01')) {
    func_004A879C(*DAT_00145888,puVar6[0xb],2);
  }
  else {
    puVar6[-0xf9] = uVar20;
    puVar6[-300] = puVar6[-300] | 4;
    func_004A7F00(*piVar5,puVar6[0xb],2);
  }
  return puVar12;
}

