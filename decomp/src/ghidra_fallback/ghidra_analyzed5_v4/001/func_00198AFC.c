#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00659CDC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00198f18;
extern int DAT_00198f1c;
extern int DAT_00198f20;
extern undefined4 DAT_00198f24;
extern undefined4 *DAT_00198f28;
extern undefined4 DAT_00198f2c;
extern uint *DAT_00198f30;
extern uint *DAT_00198f34;
extern undefined4 DAT_00198f38;
extern float DAT_00198f3c;
extern undefined *DAT_00198f40;
extern int DAT_00198f44;
extern uint DAT_00198f5c;
extern float DAT_00199068;
extern undefined DAT_0019906c;
extern char s__SE_ZoraFire_SHOT_0019906f[];
extern char s_cState_AttackPlayer_00198f48[];
extern char s_cState_Erase_00198f60[];
extern char s_cf_0019906f[];
extern undefined4 _DAT_0019906c;

// USA 00198AFC <- EU 00198AFC (Ghidra, non-matching)
// GLOBAL DAT_00198f18 int *
// GLOBAL DAT_00198f1c int
// GLOBAL DAT_00198f20 int
// GLOBAL DAT_00198f24 undefined4
// GLOBAL DAT_00198f28 undefined4 *
// GLOBAL DAT_00198f2c undefined4
// GLOBAL DAT_00198f30 uint *
// GLOBAL DAT_00198f34 uint *
// GLOBAL DAT_00198f38 undefined4
// GLOBAL DAT_00198f3c float
// GLOBAL DAT_00198f40 undefined *
// GLOBAL DAT_00198f44 int
// GLOBAL DAT_00198f5c uint
// GLOBAL DAT_00199068 float
// GLOBAL DAT_0019906c undefined
// GLOBAL s_cf_0019906f string
// GLOBAL s_cState_AttackPlayer_00198f48 string
// GLOBAL s_cState_Erase_00198f60 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_00198AFC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  piVar2 = DAT_00198f18;
  piVar4[0x104] = DAT_00198f1c;
  iVar14 = *piVar2;
  piVar4[0x107] = piVar2[1];
  piVar4[0x105] = (int)(piVar4 + 0x103);
  piVar4[0x106] = iVar14;
  iVar14 = DAT_00198f20;
  *piVar4 = DAT_00198f20;
  piVar4[200] = iVar14 + 0x58;
  piVar4[0x103] = iVar14 + 0xbc;
  puVar5 = func_0010A794(piVar4 + 0x108);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xc] = 0;
  uVar19 = DAT_00198f2c;
  iVar14 = piVar2[0x11];
  puVar5[0xd] = piVar2[0x10];
  puVar5[0xe] = iVar14;
  piVar4 = puVar5 + -0x108;
  puVar5[0xb] = DAT_00198f24;
  puVar7 = DAT_00198f28;
  uVar10 = DAT_00198f28[1];
  uVar12 = DAT_00198f28[2];
  puVar5[0xf] = *DAT_00198f28;
  puVar5[0x10] = uVar10;
  puVar5[0x11] = uVar12;
  uVar10 = *puVar7;
  uVar12 = puVar7[1];
  puVar5[0x14] = puVar7[2];
  puVar5[0x12] = uVar10;
  puVar5[0x13] = uVar12;
  puVar13 = DAT_00198f30;
  uVar9 = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = uVar19;
  if ((param_2[0x13] != *puVar13) && (param_2[0x13] == *DAT_00198f34)) {
    uVar9 = 1;
  }
  iVar14 = func_0054DDF4((int)piVar4,uVar9);
  puVar5[-0x20] = iVar14;
  puVar5[-0x1f] = iVar14;
  piVar6 = (int *)func_0054D964((int)piVar4,0);
  *(undefined2 *)(piVar6 + 10) = 0x240;
  piVar6[0xb] = piVar6[0xb] | 0x40000;
  piVar6[1] = puVar5[-0x14];
  piVar6[2] = puVar5[-0x13];
  piVar6[3] = puVar5[-0x12];
  func_004356B4(piVar6);
  puVar5[10] = piVar6;
  puVar7 = (undefined4 *)func_0010BAB4(100);
  uVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    uVar10 = func_004EE484(puVar7);
  }
  puVar5[9] = uVar10;
  iVar14 = piVar2[2];
  iVar11 = piVar2[3];
  puVar5[0xc] = piVar4;
  puVar5[0xd] = iVar14;
  puVar5[0xe] = iVar11;
  local_3c = puVar5[-0x55];
  func_0014EB8C(puVar5[9],puVar5[10],(undefined2 *)puVar5[-0x20],&local_3c,
                *(undefined2 *)(puVar5 + -0xf3),puVar5 + 0xb,(short)DAT_00198f38);
  iVar14 = puVar5[9];
  func_004D80A4((float *)(iVar14 + 0x24),param_2[8],DAT_00198f3c);
  *(undefined4 *)(iVar14 + 0x28) = uVar19;
  *(undefined1 *)((int)puVar5 + 6) = 2;
  puVar5[5] = piVar4;
  iVar14 = func_0010BA78(0x20);
  puVar5[6] = iVar14;
  puVar5[7] = iVar14 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 2;
  piVar6 = (int *)(iVar14 + -8);
  do {
    iVar14 = piVar2[0xf];
    iVar11 = iVar11 + -1;
    piVar6[2] = piVar2[0xe];
    piVar6[3] = iVar14;
    iVar14 = piVar2[0xf];
    piVar6[4] = piVar2[0xe];
    piVar6[5] = iVar14;
    piVar6 = piVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar9 = (uint)bVar1;
  piVar6 = (int *)func_0010BA78(uVar9 << 3);
  puVar5[8] = piVar6;
  if (uVar9 != 0) {
    piVar8 = piVar6 + -2;
    if ((bVar1 & 1) != 0) {
      iVar14 = piVar2[9];
      *piVar6 = piVar2[8];
      piVar6[1] = iVar14;
      piVar8 = piVar6;
    }
    for (iVar14 = (int)uVar9 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      iVar11 = piVar2[9];
      piVar8[2] = piVar2[8];
      piVar8[3] = iVar11;
      iVar11 = piVar2[9];
      piVar8[4] = piVar2[8];
      piVar8[5] = iVar11;
      piVar8 = piVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar14 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar14 = func_00100118((int)(puVar7 + 2),DAT_00198f40,0x24,2);
  }
  if (iVar14 != 0) {
    puVar5[2] = 2;
    puVar5[3] = iVar14;
  }
  iVar14 = DAT_00198f44;
  puVar5[-0x33] = puVar5;
  *(undefined2 *)(iVar14 + (int)piVar4) = 2;
  local_34 = (uint *)s_cState_AttackPlayer_00198f48;
  local_3c = DAT_00198f5c;
  local_38 = DAT_00198f5c;
  iVar14 = puVar5[3];
  puVar13 = *(uint **)(iVar14 + 4);
  (**(code **)(DAT_00198f5c + 8))(&local_38);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_34 + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00198e64;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00198e64:
  iVar14 = *(int *)(iVar14 + 8);
  if (iVar14 <= (int)uVar9) {
    uVar9 = iVar14 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar9);
  *(undefined1 *)((int)puVar13 + uVar9) = 0;
  piVar6 = (int *)puVar5[6];
  iVar14 = piVar2[5];
  iVar11 = piVar2[6];
  iVar16 = piVar2[7];
  iVar17 = piVar2[8];
  iVar18 = piVar2[9];
  *piVar6 = piVar2[4];
  piVar6[1] = iVar14;
  piVar6 = (int *)puVar5[7];
  *piVar6 = iVar11;
  piVar6[1] = iVar16;
  piVar6 = (int *)puVar5[8];
  *piVar6 = iVar17;
  piVar6[1] = iVar18;
  local_38 = local_3c;
  local_34 = (uint *)s_cState_Erase_00198f60;
  if ((uint)puVar5[2] < 2) {
    iVar14 = puVar5[3];
  }
  else {
    iVar14 = puVar5[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar14 + 4);
  (**(code **)(local_3c + 8))(&local_38);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_34 + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00198f7c;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00198f7c:
  if (*(int *)(iVar14 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar14 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar9);
  *(undefined1 *)((int)puVar13 + uVar9) = 0;
  iVar11 = piVar2[0xd];
  iVar15 = puVar5[6];
  iVar14 = piVar2[0xb];
  iVar16 = piVar2[0xc];
  iVar17 = piVar2[8];
  iVar18 = piVar2[9];
  *(int *)(iVar15 + 8) = piVar2[10];
  *(int *)(iVar15 + 0xc) = iVar14;
  iVar14 = puVar5[7];
  *(int *)(iVar14 + 8) = iVar16;
  *(int *)(iVar14 + 0xc) = iVar11;
  iVar14 = puVar5[8];
  *(int *)(iVar14 + 8) = iVar17;
  *(int *)(iVar14 + 0xc) = iVar18;
  func_00659CDC(puVar5,0);
  fVar3 = DAT_00199068;
  puVar5[0xf] = puVar5[-0x14];
  puVar5[0x10] = puVar5[-0x13];
  puVar5[0x11] = puVar5[-0x12];
  puVar5[0x16] = ALBW_AS_U32(ALBW_AS_F32(param_2[0x11]) + fVar3);
  func_004D80A4((float *)(puVar5 + 0x12),param_2[8],ALBW_AS_F32(_DAT_0019906c));
  puVar5[0x13] = uVar19;
  local_38 = local_3c;
  local_34 = (uint *)(s__SE_ZoraFire_SHOT_0019906f + 1);
  func_00150A84(piVar4,(int *)&local_38,0);
  return piVar4;
}

