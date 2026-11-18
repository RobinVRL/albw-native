#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0039B6F8(int param_1);
extern int func_00435714(undefined4 *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_0039bc40;
extern undefined4 DAT_0039bc44;
extern int *DAT_0039bc48;
extern undefined4 DAT_0039bc4c;
extern undefined4 DAT_0039bc50;
extern undefined4 DAT_0039bc54;
extern undefined4 *DAT_0039bc58;
extern undefined *DAT_0039bc5c;
extern int DAT_0039bc60;
extern uint DAT_0039bc74;
extern uint *DAT_0039bee0;
extern undefined4 *DAT_0039bee4;
extern undefined4 DAT_0039bee8;
extern int *DAT_0039beec;
extern char s_cState_Appear_0039bc64[];
extern char s_cState_Disappear_0039bc78[];

// USA 0039B7C0 <- EU 0039B79C (Ghidra, non-matching)
// GLOBAL DAT_0039bc40 int
// GLOBAL DAT_0039bc44 undefined4
// GLOBAL DAT_0039bc48 int *
// GLOBAL DAT_0039bc4c undefined4
// GLOBAL DAT_0039bc50 undefined4
// GLOBAL DAT_0039bc54 undefined4
// GLOBAL DAT_0039bc58 undefined4 *
// GLOBAL DAT_0039bc5c undefined *
// GLOBAL DAT_0039bc60 int
// GLOBAL DAT_0039bc74 uint
// GLOBAL DAT_0039bee0 uint *
// GLOBAL DAT_0039bee4 undefined4 *
// GLOBAL DAT_0039bee8 undefined4
// GLOBAL DAT_0039beec int *
// GLOBAL s_cState_Appear_0039bc64 string
// GLOBAL s_cState_Disappear_0039bc78 string

/* WARNING: Variable defined which should be unmapped: objStack_b8 */
/* WARNING: Variable defined which should be unmapped: objStack_b0 */

undefined4 * func_0039B7C0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  code *pcVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint unaff_r8;
  uint *puVar17;
  undefined4 uVar18;
  uint in_fpscr;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b8 ((uint *)(albw_frame + 0x8))
  #define objStack_b0 ((uint *)(albw_frame + 0x10))
  #define local_ac (*(uint *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(uint *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x60))
  #define local_58 (*(uint *)(albw_frame + 0x68))
  #define local_54 (*(uint * *)(albw_frame + 0x6c))
  #define local_4c (*(undefined4 * *)(albw_frame + 0x74))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x94))
  #define local_28 (*(uint * *)(albw_frame + 0x98))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0039bc40;
  *piVar4 = DAT_0039bc40;
  piVar4[200] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5 = func_004EDC9C(puVar5 + 10);
  puVar14 = puVar5 + -0x10d;
  local_4c = puVar5 + 0x12;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  objStack_b8[1] = 0;
  objStack_b8[0] = 1;
  objStack_b0[0] = 0;
  uVar6 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[-1] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar17 = (uint *)0x0;
  }
  else {
    puVar17 = func_0016A2FC(puVar7,1,DAT_0039bc44,1);
  }
  puVar5[0x13] = puVar17;
  func_00169608(puVar17,0,DAT_0039bc48,*(int *)(puVar5[-0x59] + 0x1c8));
  func_0016A02C(puVar5[0x13],-1,(int *)0xffffffff,0);
  objStack_b8[1] = 3;
  objStack_b0[0] = (uint)&local_ac;
  objStack_b8[0] = 1;
  local_64 = 10;
  local_60 = 0;
  local_ac = 0;
  local_a0 = DAT_0039bc54;
  local_9c = DAT_0039bc50;
  local_98 = unaff_r8 | 0xff;
  local_a8 = DAT_0039bc4c;
  uStack_a4 = DAT_0039bc50;
  uVar6 = DAT_0039bc4c;
  func_0016898C(puVar5[0x13],objStack_b8);
  *(undefined4 *)(*(int *)(puVar5[0x13] + 0x14) + 0x10) = uVar6;
  puVar5[0x14] = (int)*(float *)(*(int *)(puVar5[0x13] + 0x14) + 0x14);
  *(undefined1 *)((int)puVar5 + -0x22) = 2;
  puVar5[-5] = puVar14;
  iVar8 = func_0010BA78(0x20);
  puVar5[-4] = iVar8;
  puVar7 = DAT_0039bc58;
  puVar5[-3] = iVar8 + (uint)*(byte *)((int)puVar5 + -0x22) * 8;
  iVar12 = 2;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar18 = puVar7[0xb];
    iVar12 = iVar12 + -1;
    puVar9[2] = puVar7[10];
    puVar9[3] = uVar18;
    uVar18 = puVar7[0xb];
    puVar9[4] = puVar7[10];
    puVar9[5] = uVar18;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x22);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[-2] = puVar9;
  if (uVar15 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar18 = puVar7[5];
      *puVar9 = puVar7[4];
      puVar9[1] = uVar18;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar18 = puVar7[5];
      puVar10[2] = puVar7[4];
      puVar10[3] = uVar18;
      uVar18 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar18;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_0039bc5c;
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 2;
    *puVar9 = 0x24;
    iVar8 = func_00100118((int)(puVar9 + 2),puVar3,0x24,2);
  }
  if (iVar8 != 0) {
    puVar5[-7] = iVar8;
    puVar5[-8] = 2;
  }
  iVar8 = DAT_0039bc60;
  puVar5[-0x38] = puVar5 + -10;
  uVar15 = DAT_0039bc74;
  *(undefined2 *)(iVar8 + (int)puVar14) = 2;
  local_54 = (uint *)s_cState_Appear_0039bc64;
  local_58 = uVar15;
  iVar8 = puVar5[-7];
  puVar17 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar15 + 8))(&local_58);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_54 + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0039ba9c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0039ba9c:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar16) {
    uVar16 = iVar8 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar17,local_54,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  puVar9 = (undefined4 *)puVar5[-4];
  uVar18 = puVar7[1];
  uVar20 = puVar7[2];
  uVar21 = puVar7[3];
  uVar22 = puVar7[4];
  uVar23 = puVar7[5];
  *puVar9 = *puVar7;
  puVar9[1] = uVar18;
  puVar9 = (undefined4 *)puVar5[-3];
  *puVar9 = uVar20;
  puVar9[1] = uVar21;
  puVar9 = (undefined4 *)puVar5[-2];
  *puVar9 = uVar22;
  puVar9[1] = uVar23;
  local_54 = (uint *)s_cState_Disappear_0039bc78;
  local_58 = uVar15;
  if ((uint)puVar5[-8] < 2) {
    iVar8 = puVar5[-7];
  }
  else {
    iVar8 = puVar5[-7] + 0x24;
  }
  puVar17 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar15 + 8))(&local_58);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_54 + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0039bb50;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0039bb50:
  if (*(int *)(iVar8 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar17,local_54,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  iVar8 = puVar5[-4];
  uVar18 = puVar7[4];
  uVar20 = puVar7[5];
  uVar21 = puVar7[7];
  uVar22 = puVar7[8];
  uVar23 = puVar7[9];
  *(undefined4 *)(iVar8 + 8) = puVar7[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  iVar8 = puVar5[-3];
  *(undefined4 *)(iVar8 + 8) = uVar22;
  *(undefined4 *)(iVar8 + 0xc) = uVar23;
  iVar8 = puVar5[-2];
  *(undefined4 *)(iVar8 + 8) = uVar18;
  *(undefined4 *)(iVar8 + 0xc) = uVar20;
  iVar8 = (int)*(char *)(puVar5 + -9);
  if (iVar8 != -1) {
    iVar12 = puVar5[-2];
    pcVar13 = *(code **)(iVar12 + iVar8 * 8);
    if ((pcVar13 != (code *)0x0) ||
       ((uVar16 = *(uint *)(iVar12 + iVar8 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
      uVar16 = *(uint *)(iVar12 + iVar8 * 8 + 4);
      piVar4 = (int *)(puVar5[-5] + ((int)uVar16 >> 1));
      if ((uVar16 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *piVar4);
      }
      (*pcVar13)(piVar4,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar5 + -9);
  *(undefined1 *)(puVar5 + -9) = 0;
  puVar5[-10] = 0;
  *(undefined1 *)((int)puVar5 + -0x23) = uVar2;
  if (puVar5[-6] != 0) {
    piVar4 = (int *)puVar5[-7];
    (**(code **)(*piVar4 + 8))(piVar4);
    local_ac = piVar4[1];
    objStack_b0[0] = uVar15;
    func_0010BEB4(puVar5[-6],(int *)objStack_b0);
  }
  iVar12 = (int)*(char *)(puVar5 + -9);
  iVar8 = puVar5[-4];
  pcVar13 = *(code **)(iVar8 + iVar12 * 8);
  if ((pcVar13 != (code *)0x0) ||
     ((piVar4 = *(int **)(iVar8 + iVar12 * 8 + 4), ((uint)piVar4 & 1) != 0 && (piVar4 != (int *)0x0)
      ))) {
    piVar4 = (int *)puVar5[-5];
    uVar15 = *(uint *)(iVar8 + iVar12 * 8 + 4);
    if ((uVar15 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *(int *)((int)piVar4 + ((int)uVar15 >> 1)));
    }
    (*pcVar13)((int)((int)piVar4) + ((int)uVar15 >> 1));
  }
  objStack_b0[0] = 8;
  piVar11 = func_00435714(objStack_b0);
  if (((*DAT_0039bee0 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0039bee0), iVar8 != 0)) {
    *DAT_0039bee4 = DAT_0039bee8;
  }
  if ((piVar11 == (int *)0x0) || (iVar8 = (**(code **)*piVar11)(piVar11,DAT_0039bee4), iVar8 == 0))
  {
    piVar11 = (int *)0x0;
  }
  puVar5[0x12] = piVar11;
  objStack_b8[0] = 0x224;
  *(undefined2 *)(piVar11 + 10) = 0x224;
  func_0039B6F8((int)puVar14);
  puVar5[6] = *local_4c;
  local_ac = puVar5[-0x5a];
  func_004EDAD0((int)puVar5,&local_ac);
  *(undefined2 *)(puVar5 + 0xb) = *(undefined2 *)(puVar5 + -0xf8);
  piVar11 = DAT_0039beec;
  *(undefined1 *)(puVar5 + 0x11) = 1;
  func_004A7F00(*piVar11,(int)puVar5,0);
  iVar8 = (int)(short)local_28[10];
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if ((int)puVar5[0x14] < iVar8) {
    iVar8 = puVar5[0x14];
  }
  iVar12 = *(int *)(puVar5[0x13] + 0x14);
  fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar12 + 8) != fVar19) {
    *(float *)(iVar12 + 8) = fVar19;
    *(undefined1 *)(iVar12 + 0x26) = 1;
  }
  uVar18 = *(undefined4 *)(puVar5[0x13] + 0xc);
  *(undefined4 *)(*(int *)(puVar5[0x13] + 0x14) + 0x10) = uVar6;
  func_00169A80((int *)puVar5[0x13],uVar18,0,piVar4);
  func_00168E9C((int *)puVar5[0x13],puVar5[-1],(int *)0x0);
  iVar8 = puVar5[-1];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar8 + 0x80),puVar5[-0x105],puVar5[-0x13],(float *)(puVar5 + -0x19));
  func_004CEAF0(puVar5[-1]);
  if (*(char *)(puVar5 + -9) == '\0') {
    func_004CF478(puVar5[-1],1);
    func_0039B6F8((int)puVar14);
  }
  else {
    func_004CF478(puVar5[-1],0);
  }
  return puVar14;
}

