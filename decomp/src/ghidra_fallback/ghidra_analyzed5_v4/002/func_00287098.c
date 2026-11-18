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
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0066133C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0028759c;
extern int DAT_002875a0;
extern undefined4 DAT_002875a4;
extern undefined4 *DAT_002875a8;
extern undefined *DAT_002875ac;
extern int DAT_002875b0;
extern int DAT_002875c0;
extern float DAT_00287624;
extern int *DAT_00287674;
extern char s_cState_TwinkleEnd_002875e8[];
extern char s_cState_TwinkleLow_00287610[];
extern char s_cState_TwinkleReset_002875fc[];
extern char s_cState_TwinkleStart_002875c4[];
extern char s_cState_Twinkle_002875d8[];
extern char s_cState_Wait_002875b4[];

// USA 00287098 <- EU 002870C0 (Ghidra, non-matching)
// GLOBAL DAT_0028759c int
// GLOBAL DAT_002875a0 int
// GLOBAL DAT_002875a4 undefined4
// GLOBAL DAT_002875a8 undefined4 *
// GLOBAL DAT_002875ac undefined *
// GLOBAL DAT_002875b0 int
// GLOBAL DAT_002875c0 int
// GLOBAL DAT_00287624 float
// GLOBAL DAT_00287674 int *
// GLOBAL s_cState_TwinkleEnd_002875e8 string
// GLOBAL s_cState_TwinkleLow_00287610 string
// GLOBAL s_cState_TwinkleReset_002875fc string
// GLOBAL s_cState_TwinkleStart_002875c4 string
// GLOBAL s_cState_Twinkle_002875d8 string
// GLOBAL s_cState_Wait_002875b4 string

undefined4 * func_00287098(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(int *)(albw_frame + 0xc))
  #define local_a8 (*(int *)(albw_frame + 0x18))
  #define local_a4 (*(char * *)(albw_frame + 0x1c))
  #define aiStack_a0 ((int *)(albw_frame + 0x20))
  #define local_38 ((uint *)(albw_frame + 0x88))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_0028759c;
  piVar3[200] = DAT_0028759c + 0x54;
  *piVar3 = iVar5;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  puVar4 = func_0010A794(piVar3 + 0x106);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar12 = puVar4 + -0x106;
  puVar4[8] = 0;
  iVar5 = func_0054D964((int)puVar12,0);
  puVar4[9] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar4[10] = puVar7;
  puVar4[-3] = *(undefined4 *)(puVar4[-0x52] + 0x1c8);
  uVar8 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar4[-2] = uVar8;
  uVar8 = func_0014E904((int)puVar12,5,1);
  iVar5 = DAT_002875a0;
  uVar13 = 0;
  puVar4[-1] = uVar8;
  do {
    func_00169608((uint *)puVar4[-1],uVar13,(int *)(iVar5 + uVar13 * 8),puVar4[-3]);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 5);
  func_0016A02C(puVar4[-1],-1,(int *)0xffffffff,0);
  puVar9 = (uint *)func_002C11E8(aiStack_a0,0,0,0);
  func_0016898C(puVar4[-1],puVar9);
  *(undefined4 *)(*(int *)(puVar4[-1] + 0x14) + 0x10) = DAT_002875a4;
  func_00168E9C((int *)puVar4[-1],puVar4[-2],(int *)0x0);
  *(undefined1 *)((int)puVar4 + 6) = 6;
  puVar4[5] = puVar12;
  iVar5 = func_0010BA78(0x60);
  puVar4[6] = iVar5;
  puVar7 = DAT_002875a8;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 6;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar8 = puVar7[0x1b];
    iVar10 = iVar10 + -1;
    puVar6[2] = puVar7[0x1a];
    puVar6[3] = uVar8;
    uVar8 = puVar7[0x1b];
    puVar6[4] = puVar7[0x1a];
    puVar6[5] = uVar8;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar6;
  if (uVar13 != 0) {
    puVar11 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar8;
      puVar11 = puVar6;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar8 = puVar7[5];
      puVar11[2] = puVar7[4];
      puVar11[3] = uVar8;
      uVar8 = puVar7[5];
      puVar11[4] = puVar7[4];
      puVar11[5] = uVar8;
      puVar11 = puVar11 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_002875ac,0x24,6);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 6;
  }
  iVar5 = DAT_002875b0;
  puVar4[-0x31] = puVar4;
  iVar10 = DAT_002875c0;
  *(undefined2 *)(iVar5 + (int)puVar12) = 6;
  local_a4 = s_cState_Wait_002875b4;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,0,&local_a8);
  puVar6 = (undefined4 *)puVar4[6];
  uVar8 = puVar7[2];
  uVar15 = puVar7[1];
  uVar14 = puVar7[3];
  uVar16 = *(undefined8 *)(puVar7 + 4);
  *puVar6 = *puVar7;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar8;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_a4 = s_cState_TwinkleStart_002875c4;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,1,&local_a8);
  iVar5 = puVar4[6];
  uVar8 = puVar7[7];
  uVar14 = puVar7[8];
  uVar15 = puVar7[9];
  *(undefined4 *)(iVar5 + 8) = puVar7[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_a4 = s_cState_Twinkle_002875d8;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,2,&local_a8);
  iVar5 = puVar4[6];
  uVar15 = puVar7[0xb];
  uVar8 = puVar7[0xd];
  uVar14 = puVar7[0xc];
  *(undefined4 *)(iVar5 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar8;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_a4 = s_cState_TwinkleEnd_002875e8;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,3,&local_a8);
  iVar5 = puVar4[6];
  uVar8 = puVar7[0xf];
  uVar14 = puVar7[0x10];
  uVar15 = puVar7[0x11];
  *(undefined4 *)(iVar5 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar8;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar16;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar16 >> 0x20);
  local_a4 = s_cState_TwinkleReset_002875fc;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,4,&local_a8);
  iVar5 = puVar4[6];
  uVar15 = puVar7[0x13];
  uVar8 = puVar7[0x15];
  uVar14 = puVar7[0x14];
  *(undefined4 *)(iVar5 + 0x20) = puVar7[0x12];
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar8;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar16;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar16 >> 0x20);
  local_a4 = s_cState_TwinkleLow_00287610;
  local_a8 = iVar10;
  func_0010BEC4((int)puVar4,5,&local_a8);
  iVar5 = puVar4[6];
  uVar15 = puVar7[0x17];
  uVar8 = puVar7[0x18];
  uVar14 = puVar7[0x19];
  *(undefined4 *)(iVar5 + 0x28) = puVar7[0x16];
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar8;
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x28) = (int)uVar16;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  func_0066133C(puVar4,0);
  local_bc = ALBW_AS_F32(puVar4[-0x12]);
  local_b8 = ALBW_AS_F32(puVar4[-0x11]);
  local_b4 = puVar4[-0x10];
  iVar5 = puVar4[-2];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),puVar4[-0xc],&local_bc);
  func_004CEAF0(puVar4[-2]);
  *(undefined4 *)(puVar4[10] + 0x18) = puVar4[9];
  local_38[0] = puVar4[-0x53];
  func_004EDAD0(puVar4[10],local_38);
  fVar2 = DAT_00287624;
  *(undefined2 *)(puVar4[10] + 0x2c) = *(undefined2 *)(puVar4 + -0xf1);
  local_b8 = local_b8 + fVar2;
  piVar3 = (int *)puVar4[9];
  piVar3[1] = (int)ALBW_AS_U32(local_bc);
  piVar3[2] = (int)ALBW_AS_U32(local_b8);
  piVar3[3] = local_b4;
  func_004356B4(piVar3);
  func_004A879C(*DAT_00287674,puVar4[10],2);
  return puVar12;
}

