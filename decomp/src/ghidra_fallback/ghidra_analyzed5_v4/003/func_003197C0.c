#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00665160(undefined4 *param_1,undefined1 param_2);
extern int DAT_00319bcc;
extern int *DAT_00319bd0;
extern int DAT_00319bd4;
extern uint DAT_00319bd8;
extern undefined4 DAT_00319bdc;
extern int *DAT_00319be0;
extern undefined *DAT_00319be4;
extern int DAT_00319be8;
extern int DAT_00319bf8;
extern float DAT_00319f28;
extern int *DAT_00319f2c;
extern undefined4 DAT_00319f30;
extern undefined4 DAT_00319f34;
extern undefined4 DAT_00319f38;
extern undefined4 DAT_00319f3c;
extern char s_cState_Appear_00319bfc[];
extern char s_cState_GetEvent_00319f08[];
extern char s_cState_GetWait_00319ef8[];
extern char s_cState_Twinkle_00319f18[];
extern char s_cState_UpEndAction_00319ee4[];
extern char s_cState_UpEndWait_00319c0c[];
extern char s_cState_Wait_00319bec[];

// USA 003197C0 <- EU 0031979C (Ghidra, non-matching)
// GLOBAL DAT_00319bcc int
// GLOBAL DAT_00319bd0 int *
// GLOBAL DAT_00319bd4 int
// GLOBAL DAT_00319bd8 uint
// GLOBAL DAT_00319bdc undefined4
// GLOBAL DAT_00319be0 int *
// GLOBAL DAT_00319be4 undefined *
// GLOBAL DAT_00319be8 int
// GLOBAL DAT_00319bf8 int
// GLOBAL DAT_00319f28 float
// GLOBAL DAT_00319f2c int *
// GLOBAL DAT_00319f30 undefined4
// GLOBAL DAT_00319f34 undefined4
// GLOBAL DAT_00319f38 undefined4
// GLOBAL DAT_00319f3c undefined4
// GLOBAL s_cState_Appear_00319bfc string
// GLOBAL s_cState_GetEvent_00319f08 string
// GLOBAL s_cState_GetWait_00319ef8 string
// GLOBAL s_cState_Twinkle_00319f18 string
// GLOBAL s_cState_UpEndAction_00319ee4 string
// GLOBAL s_cState_UpEndWait_00319c0c string
// GLOBAL s_cState_Wait_00319bec string

int func_003197C0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define aiStack_b4 ((int *)(albw_frame + 0xc))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_48 (*(int *)(albw_frame + 0x78))
  #define local_44 (*(char * *)(albw_frame + 0x7c))
  #define local_34 ((uint *)(albw_frame + 0x8c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_00319bcc;
  piVar3[200] = DAT_00319bcc + 0x54;
  *piVar3 = iVar4;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  piVar3[0x106] = 0;
  piVar3[0x107] = 0;
  piVar3[0x108] = 0;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar2 = DAT_00319bd0;
  piVar3[0x109] = iVar4;
  iVar4 = *piVar2;
  iVar11 = piVar2[1];
  piVar3[0x10a] = DAT_00319bd4;
  piVar3[0x10b] = (int)piVar3;
  piVar3[0x10c] = iVar4;
  piVar3[0x10d] = iVar11;
  iVar4 = func_004EE484(piVar3 + 0x10e);
  puVar5 = func_0010A794((undefined4 *)(iVar4 + 100));
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  uVar13 = DAT_00319bd8;
  uVar18 = (ulonglong)DAT_00319bd8;
  puVar5[0xb] = DAT_00319bdc;
  puVar5[0xc] = uVar13;
  *(undefined2 *)(puVar5 + 0xd) = 0;
  *(undefined2 *)((int)puVar5 + 0x36) = 1;
  *(undefined2 *)(puVar5 + 0xe) = 1;
  *(undefined2 *)((int)puVar5 + 0x3a) = 1;
  *(undefined1 *)((int)puVar5 + 0x3e) = 0;
  *(undefined1 *)((int)puVar5 + 0x3f) = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  puVar5 = func_002E1BB4(puVar5 + 0x11,0);
  puVar5[6] = 0;
  puVar12 = puVar5 + -0x138;
  puVar5[7] = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  puVar5[0x11] = 0;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((int)puVar5 + 0x4a) = 0;
  puVar5[0x13] = 0;
  puVar5[-0x35] = *(undefined4 *)(puVar5[-0x84] + 0x1c8);
  uVar6 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar5[-0x34] = uVar6;
  uVar6 = func_0014E904((int)puVar12,3,1);
  piVar3 = DAT_00319be0;
  uVar13 = 0;
  puVar5[-0x33] = uVar6;
  do {
    func_00169688((uint *)puVar5[-0x33],uVar13,piVar3 + uVar13 * 2,puVar5[-0x35]);
    uVar6 = (undefined4)uVar18;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 3);
  func_0016A02C(puVar5[-0x33],-1,(int *)0xffffffff,0);
  puVar7 = (uint *)func_002C11E8(aiStack_b4,0,0,0);
  func_0016898C(puVar5[-0x33],puVar7);
  *(undefined4 *)(*(int *)(puVar5[-0x33] + 0x14) + 0x10) = uVar6;
  func_00168E9C((int *)puVar5[-0x33],puVar5[-0x34],(int *)0x0);
  puVar7 = (uint *)func_0014E904((int)puVar12,1,0);
  puVar5[-0x32] = puVar7;
  func_00169608(puVar7,0,piVar3,puVar5[-0x35]);
  func_0016A02C(puVar5[-0x32],-1,(int *)0xffffffff,0);
  puVar7 = (uint *)func_002C11E8(aiStack_b4,0,0,0);
  func_0016898C(puVar5[-0x32],puVar7);
  *(undefined4 *)(*(int *)(puVar5[-0x32] + 0x14) + 0x10) = uVar6;
  func_00168E9C((int *)puVar5[-0x32],puVar5[-0x34],(int *)0x0);
  *(undefined1 *)((int)puVar5 + -0x3e) = 7;
  puVar10 = puVar5 + -0x11;
  puVar5[-0xc] = puVar12;
  iVar4 = func_0010BA78(0x70);
  puVar5[-0xb] = iVar4;
  puVar5[-10] = iVar4 + (uint)*(byte *)((int)puVar5 + -0x3e) * 8;
  iVar11 = 7;
  piVar3 = (int *)(iVar4 + -8);
  do {
    iVar4 = piVar2[0x23];
    iVar11 = iVar11 + -1;
    piVar3[2] = piVar2[0x22];
    piVar3[3] = iVar4;
    iVar4 = piVar2[0x23];
    piVar3[4] = piVar2[0x22];
    piVar3[5] = iVar4;
    piVar3 = piVar3 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x3e);
  uVar13 = (uint)bVar1;
  piVar3 = (int *)func_0010BA78(uVar13 << 3);
  puVar5[-9] = piVar3;
  if (uVar13 != 0) {
    piVar8 = piVar3 + -2;
    if ((bVar1 & 1) != 0) {
      iVar4 = piVar2[7];
      *piVar3 = piVar2[6];
      piVar3[1] = iVar4;
      piVar8 = piVar3;
    }
    for (iVar4 = (int)uVar13 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar11 = piVar2[7];
      piVar8[2] = piVar2[6];
      piVar8[3] = iVar11;
      iVar11 = piVar2[7];
      piVar8[4] = piVar2[6];
      piVar8[5] = iVar11;
      piVar8 = piVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar4 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 7;
    iVar4 = func_00100118((int)(puVar9 + 2),DAT_00319be4,0x24,7);
  }
  if (iVar4 != 0) {
    puVar5[-0xe] = iVar4;
    puVar5[-0xf] = 7;
  }
  iVar4 = DAT_00319be8;
  puVar5[-99] = puVar10;
  iVar11 = DAT_00319bf8;
  *(undefined2 *)(iVar4 + (int)puVar12) = 7;
  local_44 = s_cState_Wait_00319bec;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,0,&local_48);
  piVar3 = (int *)puVar5[-0xb];
  iVar4 = piVar2[4];
  iVar15 = piVar2[3];
  iVar19 = piVar2[6];
  iVar14 = piVar2[5];
  iVar17 = piVar2[7];
  *piVar3 = piVar2[2];
  piVar3[1] = iVar15;
  piVar3 = (int *)puVar5[-10];
  *piVar3 = iVar4;
  piVar3[1] = iVar14;
  piVar3 = (int *)puVar5[-9];
  *piVar3 = iVar19;
  piVar3[1] = iVar17;
  local_44 = s_cState_Appear_00319bfc;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,1,&local_48);
  iVar4 = puVar5[-0xb];
  iVar14 = piVar2[9];
  iVar15 = piVar2[10];
  iVar16 = piVar2[0xb];
  *(int *)(iVar4 + 8) = piVar2[8];
  *(int *)(iVar4 + 0xc) = iVar14;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 8) = iVar15;
  *(int *)(iVar4 + 0xc) = iVar16;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 8) = iVar19;
  *(int *)(iVar4 + 0xc) = iVar17;
  local_44 = s_cState_UpEndWait_00319c0c;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,2,&local_48);
  iVar4 = puVar5[-0xb];
  iVar14 = piVar2[0xd];
  iVar15 = piVar2[0xe];
  iVar16 = piVar2[0xf];
  *(int *)(iVar4 + 0x10) = piVar2[0xc];
  *(int *)(iVar4 + 0x14) = iVar14;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 0x10) = iVar15;
  *(int *)(iVar4 + 0x14) = iVar16;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 0x10) = iVar19;
  *(int *)(iVar4 + 0x14) = iVar17;
  local_44 = s_cState_UpEndAction_00319ee4;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,3,&local_48);
  iVar4 = puVar5[-0xb];
  iVar14 = piVar2[0x11];
  iVar15 = piVar2[0x12];
  iVar16 = piVar2[0x13];
  *(int *)(iVar4 + 0x18) = piVar2[0x10];
  *(int *)(iVar4 + 0x1c) = iVar14;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 0x18) = iVar15;
  *(int *)(iVar4 + 0x1c) = iVar16;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 0x18) = iVar19;
  *(int *)(iVar4 + 0x1c) = iVar17;
  local_44 = s_cState_GetWait_00319ef8;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,4,&local_48);
  iVar4 = puVar5[-0xb];
  iVar14 = piVar2[0x15];
  iVar15 = piVar2[0x16];
  iVar16 = piVar2[0x17];
  *(int *)(iVar4 + 0x20) = piVar2[0x14];
  *(int *)(iVar4 + 0x24) = iVar14;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 0x20) = iVar15;
  *(int *)(iVar4 + 0x24) = iVar16;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 0x20) = iVar19;
  *(int *)(iVar4 + 0x24) = iVar17;
  local_44 = s_cState_GetEvent_00319f08;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,5,&local_48);
  iVar4 = puVar5[-0xb];
  iVar14 = piVar2[0x19];
  iVar15 = piVar2[0x1a];
  iVar16 = piVar2[0x1b];
  *(int *)(iVar4 + 0x28) = piVar2[0x18];
  *(int *)(iVar4 + 0x2c) = iVar14;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 0x28) = iVar15;
  *(int *)(iVar4 + 0x2c) = iVar16;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 0x28) = iVar19;
  *(int *)(iVar4 + 0x2c) = iVar17;
  local_44 = s_cState_Twinkle_00319f18;
  local_48 = iVar11;
  func_0010BEC4((int)puVar10,6,&local_48);
  iVar4 = puVar5[-0xb];
  iVar11 = piVar2[0x1d];
  iVar14 = piVar2[0x1e];
  iVar15 = piVar2[0x1f];
  *(int *)(iVar4 + 0x30) = piVar2[0x1c];
  *(int *)(iVar4 + 0x34) = iVar11;
  iVar4 = puVar5[-10];
  *(int *)(iVar4 + 0x30) = iVar14;
  *(int *)(iVar4 + 0x34) = iVar15;
  iVar4 = puVar5[-9];
  *(int *)(iVar4 + 0x30) = iVar19;
  *(int *)(iVar4 + 0x34) = iVar17;
  func_00665160(puVar10,0);
  local_58 = ALBW_AS_F32(puVar5[-0x44]);
  local_54 = ALBW_AS_F32(puVar5[-0x43]);
  local_50 = puVar5[-0x42];
  iVar4 = puVar5[-0x34];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar4 + 0x80),puVar5[-0x3e],&local_58);
  func_004CEAF0(puVar5[-0x34]);
  puVar9 = (undefined4 *)func_0010BAB4(0x48);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = func_0034CAA0(puVar9);
  }
  puVar5[-0x30] = puVar10;
  local_54 = local_54 + DAT_00319f28;
  iVar4 = puVar5[-0x2f];
  *(float *)(iVar4 + 4) = local_58;
  *(float *)(iVar4 + 8) = local_54;
  *(undefined4 *)(iVar4 + 0xc) = local_50;
  func_004356B4((int *)puVar5[-0x2f]);
  puVar5[-0x26] = puVar5[-0x2f];
  local_34[0] = puVar5[-0x85];
  func_004EDEA0((int)(puVar5 + -0x2a),local_34);
  *(undefined2 *)(puVar5 + -0x24) = *(undefined2 *)(puVar5 + -0x123);
  piVar3 = DAT_00319f2c;
  *(undefined1 *)((int)puVar5 + -0x47) = 0;
  func_004A8BFC(*piVar3,(int)(puVar5 + -0x2a),5);
  puVar9 = (undefined4 *)func_0010BAB4(0x2e0);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)func_002BE9D4(puVar9,DAT_00319f30,0,7,1);
    uVar6 = DAT_00319f38;
    *puVar10 = DAT_00319f34;
    puVar10[0xb3] = uVar6;
    puVar10[0xb7] = 0;
    iVar4 = piVar2[0x20];
    iVar11 = piVar2[0x21];
    puVar10[0xb4] = puVar10;
    puVar10[0xb5] = iVar4;
    puVar10[0xb6] = iVar11;
    puVar10[0xae] = puVar10 + 0xb3;
  }
  uVar6 = DAT_00319f3c;
  puVar5[-0x31] = puVar10;
  puVar5[-0x4d] = uVar6;
  puVar5[-0x80] = puVar5[-0x80] | 2;
  return (int)puVar12;
}

