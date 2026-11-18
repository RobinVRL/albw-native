#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_0066A3C8(undefined4 *param_1,undefined1 param_2);
extern int DAT_004d9178;
extern undefined4 DAT_004d917c;
extern int *DAT_004d9180;
extern undefined4 DAT_004d9184;
extern undefined4 DAT_004d9188;
extern undefined4 DAT_004d918c;
extern int *DAT_004d9190;
extern undefined4 *DAT_004d9194;
extern undefined *DAT_004d9198;
extern int DAT_004d919c;
extern int DAT_004d91b0;
extern undefined4 DAT_004d92e0;
extern char s_cState_Appear_004d91a0[];
extern char s_cState_Disappear_004d91b4[];

// USA 004D8D50 <- EU 004D8D28 (Ghidra, non-matching)
// GLOBAL DAT_004d9178 int
// GLOBAL DAT_004d917c undefined4
// GLOBAL DAT_004d9180 int *
// GLOBAL DAT_004d9184 undefined4
// GLOBAL DAT_004d9188 undefined4
// GLOBAL DAT_004d918c undefined4
// GLOBAL DAT_004d9190 int *
// GLOBAL DAT_004d9194 undefined4 *
// GLOBAL DAT_004d9198 undefined *
// GLOBAL DAT_004d919c int
// GLOBAL DAT_004d91b0 int
// GLOBAL DAT_004d92e0 undefined4
// GLOBAL s_cState_Appear_004d91a0 string
// GLOBAL s_cState_Disappear_004d91b4 string

undefined4 * func_004D8D50(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar13;
  float *pfVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(uint * *)(albw_frame + 0xc))
  #define local_90 ((uint *)(albw_frame + 0x10))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(uint *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(undefined1 *)(albw_frame + 0x68))
  piVar4 = func_00150E40(param_1,param_2);
  iVar9 = DAT_004d9178;
  *piVar4 = DAT_004d9178;
  piVar4[200] = iVar9 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar15 = puVar5 + -0x103;
  uVar6 = func_0014E428((int)puVar15,1,0,0,1,0,0);
  puVar5[9] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (uint *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_004d917c,1);
  }
  puVar5[0xb] = puVar8;
  func_00169608(puVar8,0,DAT_004d9180,*(int *)(puVar5[-0x4f] + 0x1c8));
  uVar13 = 0;
  func_0016A02C(puVar5[0xb],-1,(int *)0xffffffff,0);
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_90[0] = 1;
  local_84 = 0;
  local_70 = uVar13 | 0xff;
  local_80 = DAT_004d9188;
  uStack_7c = DAT_004d9184;
  uStack_78 = DAT_004d918c;
  local_74 = DAT_004d9184;
  uVar6 = DAT_004d918c;
  uVar17 = DAT_004d9184;
  uVar19 = DAT_004d9188;
  func_0016898C(puVar5[0xb],local_90);
  *(undefined4 *)(*(int *)(puVar5[0xb] + 0x14) + 0x10) = uVar17;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = func_0016A2FC(puVar7,1,DAT_004d917c,1);
  }
  puVar5[0xc] = puVar8;
  func_00169688(puVar8,0,DAT_004d9190,*(int *)(puVar5[-0x4f] + 0x1c8));
  func_0016A02C(puVar5[0xc],-1,(int *)0xffffffff,0);
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_90[0] = 1;
  local_84 = 0;
  local_70 = 0xff;
  local_80 = uVar19;
  uStack_7c = uVar17;
  uStack_78 = uVar6;
  local_74 = uVar17;
  func_0016898C(puVar5[0xc],local_90);
  *(undefined4 *)(*(int *)(puVar5[0xc] + 0x14) + 0x10) = uVar19;
  *(undefined1 *)((int)puVar5 + 6) = 2;
  puVar5[5] = puVar15;
  iVar9 = func_0010BA78(0x20);
  puVar5[6] = iVar9;
  puVar7 = DAT_004d9194;
  puVar5[7] = iVar9 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 2;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar17 = puVar7[0xb];
    iVar11 = iVar11 + -1;
    puVar10[2] = puVar7[10];
    puVar10[3] = uVar17;
    uVar17 = puVar7[0xb];
    puVar10[4] = puVar7[10];
    puVar10[5] = uVar17;
    puVar10 = puVar10 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar10;
  if (uVar13 != 0) {
    puVar12 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar7[5];
      *puVar10 = puVar7[4];
      puVar10[1] = uVar17;
      puVar12 = puVar10;
    }
    for (iVar9 = (int)uVar13 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar17 = puVar7[5];
      puVar12[2] = puVar7[4];
      puVar12[3] = uVar17;
      uVar17 = puVar7[5];
      puVar12[4] = puVar7[4];
      puVar12[5] = uVar17;
      puVar12 = puVar12 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_004d9198;
  iVar9 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 2;
    *puVar10 = 0x24;
    iVar9 = func_00100118((int)(puVar10 + 2),puVar3,0x24,2);
  }
  if (iVar9 != 0) {
    puVar5[2] = 2;
    puVar5[3] = iVar9;
  }
  iVar9 = DAT_004d919c;
  puVar5[-0x2e] = puVar5;
  iVar11 = DAT_004d91b0;
  *(undefined2 *)(iVar9 + (int)puVar15) = 2;
  local_94 = (uint *)s_cState_Appear_004d91a0;
  local_98 = iVar11;
  iVar9 = puVar5[3];
  puVar8 = *(uint **)(iVar9 + 4);
  puVar10 = puVar5;
  (**(code **)(iVar11 + 8))(&local_98);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_94 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_004d90b8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_004d90b8:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar13) {
    uVar13 = iVar9 - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(puVar8,local_94,uVar13);
  *(undefined1 *)((int)puVar8 + uVar13) = 0;
  puVar12 = (undefined4 *)puVar5[6];
  uVar17 = puVar7[1];
  uVar19 = puVar7[2];
  uVar20 = puVar7[3];
  uVar2 = *(undefined8 *)(puVar7 + 4);
  *puVar12 = *puVar7;
  puVar12[1] = uVar17;
  puVar12 = (undefined4 *)puVar5[7];
  *puVar12 = uVar19;
  puVar12[1] = uVar20;
  puVar12 = (undefined4 *)puVar5[8];
  *puVar12 = (int)uVar2;
  puVar12[1] = (int)((ulonglong)uVar2 >> 0x20);
  local_94 = (uint *)s_cState_Disappear_004d91b4;
  local_98 = iVar11;
  if ((uint)puVar5[2] < 2) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x24;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar11 + 8))(&local_98);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_94 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_004d91d4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_004d91d4:
  if (*(int *)(iVar9 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(puVar8,local_94,uVar13);
  *(undefined1 *)((int)puVar8 + uVar13) = 0;
  iVar9 = puVar5[6];
  uVar19 = puVar7[5];
  uVar16 = puVar7[7];
  uVar17 = puVar7[9];
  uVar20 = puVar7[8];
  uVar18 = puVar7[4];
  *(undefined4 *)(iVar9 + 8) = puVar7[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 8) = uVar20;
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar19;
  func_0066A3C8(puVar10,0);
  iVar9 = puVar5[9];
  pfVar14 = (float *)(puVar5 + -0xf);
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  uVar13 = puVar5[-9];
  func_004D7EB0((float *)(iVar9 + 0x80),puVar5[-0xfb],uVar13,pfVar14);
  func_00169A80((int *)puVar5[0xb],extraout_r1,uVar13,(int *)pfVar14);
  uVar17 = 0;
  func_00168E9C((int *)puVar5[0xb],puVar5[9],(int *)0x0);
  func_00169A80((int *)puVar5[0xc],extraout_r1_00,uVar17,(int *)pfVar14);
  func_00168E9C((int *)puVar5[0xc],puVar5[9],(int *)0x0);
  func_004CEAF0(puVar5[9]);
  puVar5[-0x18] = uVar6;
  *(undefined4 *)(puVar5[9] + 0x14c) = DAT_004d92e0;
  puVar5[-0x4b] = puVar5[-0x4b] | 2;
  return puVar15;
}

