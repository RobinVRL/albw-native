#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00661EA0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0029f798;
extern float DAT_0029f79c;
extern undefined4 DAT_0029f7a0;
extern float DAT_0029f7a4;
extern float DAT_0029f7a8;
extern undefined4 *DAT_0029f7ac;
extern undefined *DAT_0029f7b0;
extern int DAT_0029f7b4;
extern int DAT_0029f7c4;
extern char s_cState_End_0029f7c8[];
extern char s_cState_Wait_0029f7b8[];

// USA 0029F49C <- EU 0029F478 (Ghidra, non-matching)
// GLOBAL DAT_0029f798 int
// GLOBAL DAT_0029f79c float
// GLOBAL DAT_0029f7a0 undefined4
// GLOBAL DAT_0029f7a4 float
// GLOBAL DAT_0029f7a8 float
// GLOBAL DAT_0029f7ac undefined4 *
// GLOBAL DAT_0029f7b0 undefined *
// GLOBAL DAT_0029f7b4 int
// GLOBAL DAT_0029f7c4 int
// GLOBAL s_cState_End_0029f7c8 string
// GLOBAL s_cState_Wait_0029f7b8 string

undefined4 * func_0029F49C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(uint * *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0029f798;
  *piVar5 = DAT_0029f798;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  fVar2 = DAT_0029f79c;
  puVar6[9] = ALBW_AS_U32(DAT_0029f79c);
  puVar6[10] = ALBW_AS_U32(fVar2);
  puVar6[0xb] = ALBW_AS_U32(fVar2);
  uVar14 = DAT_0029f7a0;
  puVar6[0xc] = DAT_0029f7a0;
  puVar6[0xd] = uVar14;
  puVar6[0xe] = uVar14;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar11 = puVar6 + -0x103;
  puVar6[0x10] = 0;
  local_4c = ALBW_AS_F32(puVar6[-0xf]);
  local_48 = puVar6[-0xe];
  local_44 = puVar6[-0xd];
  local_58 = ALBW_AS_F32(puVar6[-0xf]);
  local_54 = puVar6[-0xe];
  local_50 = puVar6[-0xd];
  func_00115DAC(&local_4c,(float *)(puVar6 + -0xfe),&local_4c,DAT_0029f7a4);
  func_00115DAC(&local_58,(float *)(puVar6 + -0xfe),&local_58,DAT_0029f7a8);
  puVar6[9] = ALBW_AS_U32(local_4c);
  puVar6[10] = local_48;
  puVar6[0xb] = local_44;
  puVar6[0xc] = ALBW_AS_U32(local_58);
  puVar6[0xd] = local_54;
  puVar6[0xe] = local_50;
  *(undefined1 *)((int)puVar6 + 6) = 2;
  puVar6[5] = puVar11;
  iVar7 = func_0010BA78(0x20);
  puVar6[6] = iVar7;
  puVar3 = DAT_0029f7ac;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar10 = 2;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar14 = puVar3[0xb];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar3[10];
    puVar8[3] = uVar14;
    uVar14 = puVar3[0xb];
    puVar8[4] = puVar3[10];
    puVar8[5] = uVar14;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar12 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar6[8] = puVar8;
  if (uVar12 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar3[5];
      *puVar8 = puVar3[4];
      puVar8[1] = uVar14;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar14 = puVar3[5];
      puVar9[2] = puVar3[4];
      puVar9[3] = uVar14;
      uVar14 = puVar3[5];
      puVar9[4] = puVar3[4];
      puVar9[5] = uVar14;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar4 = DAT_0029f7b0;
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 2;
    *puVar8 = 0x24;
    iVar7 = func_00100118((int)(puVar8 + 2),puVar4,0x24,2);
  }
  if (iVar7 != 0) {
    puVar6[3] = iVar7;
    puVar6[2] = 2;
  }
  iVar7 = DAT_0029f7b4;
  puVar6[-0x2e] = puVar6;
  iVar10 = DAT_0029f7c4;
  *(undefined2 *)(iVar7 + (int)puVar11) = 2;
  local_5c = (uint *)s_cState_Wait_0029f7b8;
  local_60 = iVar10;
  iVar7 = puVar6[3];
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar10 + 8))(&local_60);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_5c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0029f6e4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0029f6e4:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar12) {
    uVar12 = iVar7 - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar13,local_5c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar8 = (undefined4 *)puVar6[6];
  uVar14 = puVar3[1];
  uVar15 = puVar3[2];
  uVar16 = puVar3[3];
  uVar17 = puVar3[4];
  uVar18 = puVar3[5];
  *puVar8 = *puVar3;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar15;
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  local_5c = (uint *)s_cState_End_0029f7c8;
  local_60 = iVar10;
  if ((uint)puVar6[2] < 2) {
    iVar7 = puVar6[3];
  }
  else {
    iVar7 = puVar6[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar10 + 8))(&local_60);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_5c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0029f7e0;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0029f7e0:
  if (*(int *)(iVar7 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar13,local_5c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar7 = puVar6[6];
  uVar14 = puVar3[7];
  uVar15 = puVar3[8];
  uVar18 = puVar3[9];
  uVar16 = puVar3[4];
  uVar17 = puVar3[5];
  *(undefined4 *)(iVar7 + 8) = puVar3[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  func_00661EA0(puVar6,0);
  return puVar11;
}

