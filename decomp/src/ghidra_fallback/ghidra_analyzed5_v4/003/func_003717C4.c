#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00667114(undefined4 *param_1,undefined1 param_2);
extern int DAT_00371b4c;
extern uint DAT_00371b6c;
extern undefined4 *DAT_00371b70;
extern undefined4 *DAT_00371b74;
extern undefined4 DAT_00371b78;
extern undefined4 DAT_00371b90;
extern undefined4 DAT_00371b94;
extern undefined4 DAT_00371b98;
extern undefined4 *DAT_00371b9c;
extern undefined *DAT_00371ba0;
extern int DAT_00371ba4;
extern char s_Actor_ColiseumAudience_bch_00371b50[];
extern char s_ColiseumAudience_00371b7c[];
extern char s_cState_Kill_00371d34[];
extern char s_cState_Wait_00371ba8[];
extern char s_cf_00371b50[];

// USA 003717C4 <- EU 003717A0 (Ghidra, non-matching)
// GLOBAL DAT_00371b4c int
// GLOBAL DAT_00371b6c uint
// GLOBAL DAT_00371b70 undefined4 *
// GLOBAL DAT_00371b74 undefined4 *
// GLOBAL DAT_00371b78 undefined4
// GLOBAL DAT_00371b90 undefined4
// GLOBAL DAT_00371b94 undefined4
// GLOBAL DAT_00371b98 undefined4
// GLOBAL DAT_00371b9c undefined4 *
// GLOBAL DAT_00371ba0 undefined *
// GLOBAL DAT_00371ba4 int
// GLOBAL s_cf_00371b50 string
// GLOBAL s_ColiseumAudience_00371b7c string
// GLOBAL s_cState_Kill_00371d34 string
// GLOBAL s_cState_Wait_00371ba8 string

undefined4 * func_003717C4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(uint *)(albw_frame + 0x0))
  #define local_bc (*(undefined4 * *)(albw_frame + 0x4))
  #define local_b8 (*(undefined4 ** *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_b0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(uint *)(albw_frame + 0x1c))
  #define local_a0 (*(uint *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined1 *)(albw_frame + 0x38))
  #define local_87 (*(undefined1 *)(albw_frame + 0x39))
  #define local_80 (*(uint *)(albw_frame + 0x40))
  #define local_7c (*(char * *)(albw_frame + 0x44))
  #define local_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined1 *)(albw_frame + 0x58))
  #define local_60 (*(uint *)(albw_frame + 0x60))
  #define local_5c (*(uint * *)(albw_frame + 0x64))
  #define afStack_58 ((float *)(albw_frame + 0x68))
  #define local_50 (*(uint *)(albw_frame + 0x70))
  #define local_4c (*(char * *)(albw_frame + 0x74))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00371b4c;
  *piVar3 = DAT_00371b4c;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar8 = DAT_00371b70;
  uVar11 = DAT_00371b6c;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  local_7c = s_Actor_ColiseumAudience_bch_00371b50;
  local_80 = uVar11;
  puVar10 = puVar4 + -0x103;
  local_b0 = func_00504CC0(*puVar8,&local_80,0xffffffff);
  piVar3 = local_b0 + 0x32;
  if (*piVar3 != 0) {
    local_b0 = *(undefined4 **)local_b0[0x34];
  }
  local_c0 = uVar11;
  local_bc = DAT_00371b74;
  local_b8 = (undefined4 **)uVar11;
  if (*piVar3 == 0) {
    local_b0 = (undefined4 *)0x0;
  }
  local_b4 = DAT_00371b74;
  local_ac = 0;
  local_88 = 1;
  local_9c = 0;
  local_a4 = local_a4 & 0xffff0000;
  local_8c = 0;
  local_94 = 0;
  local_87 = 0xc4;
  local_90 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 1;
  piVar3 = func_002C2D00((int *)&local_c0);
  puVar4[9] = piVar3;
  local_bc = (undefined4 *)param_2[7];
  local_b8 = (undefined4 **)param_2[8];
  local_b4 = (undefined4 *)param_2[9];
  func_0049216C(afStack_58,(uint *)&local_bc,(float *)(puVar4 + -0xf));
  iVar5 = puVar4[9];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar5 + 0x80),afStack_58);
  iVar5 = puVar4[9];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(uint *)(iVar5 + 0x74) = param_2[4];
  *(uint *)(iVar5 + 0x78) = param_2[5];
  *(uint *)(iVar5 + 0x7c) = param_2[6];
  local_4c = s_Actor_ColiseumAudience_bch_00371b50;
  local_50 = uVar11;
  puVar6 = func_00504CC0(*puVar8,&local_50,0xffffffff);
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_00371b78,1);
  }
  puVar4[10] = puVar8;
  local_4c = s_ColiseumAudience_00371b7c;
  local_50 = uVar11;
  func_00169608((uint *)puVar4[10],0,(int *)&local_50,(int)puVar6);
  local_a0 = func_0016A02C(puVar4[10],-1,(int *)0xffffffff,puVar4[9]);
  local_b8 = &local_b4;
  local_bc = (undefined4 *)0x3;
  local_6c = 10;
  local_68 = 0;
  local_c0 = 1;
  local_b4 = (undefined4 *)0x0;
  local_b0 = (undefined4 *)DAT_00371b94;
  local_ac = DAT_00371b90;
  local_a8 = DAT_00371b98;
  local_a0 = local_a0 | 0xff;
  local_a4 = DAT_00371b90;
  func_0016898C(puVar4[10],&local_c0);
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar10;
  iVar5 = func_0010BA78(0x20);
  puVar4[6] = iVar5;
  puVar8 = DAT_00371b9c;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 2;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = puVar8[0xb];
    iVar9 = iVar9 + -1;
    puVar6[2] = puVar8[10];
    puVar6[3] = uVar15;
    uVar15 = puVar8[0xb];
    puVar6[4] = puVar8[10];
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar6;
  if (uVar13 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar8[5];
      *puVar6 = puVar8[4];
      puVar6[1] = uVar15;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = puVar8[5];
      puVar7[2] = puVar8[4];
      puVar7[3] = uVar15;
      uVar15 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 2;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00371ba0,0x24,2);
  }
  if (iVar5 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_00371ba4;
  puVar4[-0x2e] = puVar4;
  *(undefined2 *)(iVar5 + (int)puVar10) = 2;
  local_5c = (uint *)s_cState_Wait_00371ba8;
  local_60 = uVar11;
  iVar5 = puVar4[3];
  puVar14 = *(uint **)(iVar5 + 4);
  local_b4 = puVar4;
  (**(code **)(uVar11 + 8))(&local_60);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_5c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00371bc0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00371bc0:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar13) {
    uVar13 = iVar5 - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar15 = puVar8[1];
  uVar16 = puVar8[2];
  uVar17 = puVar8[3];
  uVar18 = puVar8[4];
  uVar19 = puVar8[5];
  *puVar6 = *puVar8;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar18;
  puVar6[1] = uVar19;
  local_5c = (uint *)s_cState_Kill_00371d34;
  local_60 = uVar11;
  uVar13 = puVar4[2];
  if (uVar13 < 2) {
    uVar12 = puVar4[3];
    uVar2 = uVar13;
  }
  else {
    uVar12 = uVar11;
    uVar2 = puVar4[3];
  }
  if (1 < uVar13) {
    uVar12 = uVar2 + 0x24;
  }
  puVar14 = *(uint **)(uVar12 + 4);
  (**(code **)(uVar11 + 8))(&local_60);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_5c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00371c78;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00371c78:
  if (*(int *)(uVar12 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(uVar12 + 8) - 1;
  }
  (**(code **)(local_60 + 8))(&local_60);
  func_0010E3C4(puVar14,local_5c,uVar11);
  *(undefined1 *)((int)puVar14 + uVar11) = 0;
  iVar5 = puVar4[6];
  piVar3 = (int *)puVar8[7];
  uVar15 = puVar8[8];
  uVar18 = puVar8[9];
  uVar16 = puVar8[4];
  uVar17 = puVar8[5];
  *(undefined4 *)(iVar5 + 8) = puVar8[6];
  *(int **)(iVar5 + 0xc) = piVar3;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar16;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  func_00667114(local_b4,0);
  if ((int *)puVar4[10] != (int *)0x0) {
    func_00169A80((int *)puVar4[10],extraout_r1,uVar16,piVar3);
    func_00168E9C((int *)puVar4[10],puVar4[9],(int *)0x0);
  }
  func_004CEAF0(puVar4[9]);
  puVar4[-0x4b] = puVar4[-0x4b] | 2;
  return puVar10;
}

