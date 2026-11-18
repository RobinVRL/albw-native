#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001BDEF0(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B524(undefined4 *param_1,undefined1 param_2);
extern float fRam001be8dc;
extern int iRam001becd4;
extern undefined4 uRam001be8e0;
extern undefined4 *puRam001becd0;
extern undefined DAT_0000000a;
extern int DAT_001be8a8;
extern int DAT_001be8ac;
extern undefined DAT_001be8b0;
extern undefined4 *DAT_001be8c0;
extern undefined4 DAT_001be8c4;
extern float DAT_001be8c8;
extern int *DAT_001be8cc;
extern undefined4 DAT_001be8d0;
extern float DAT_001be8d4;
extern undefined4 DAT_001be8d8;
extern char s_cState_FallDownStay_001becf4[];
extern char s_cState_FallDown_001bece4[];
extern char s_cState_Wait_001becd8[];

// USA 001BE498 <- EU 001BE498 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_001be8a8 int
// GLOBAL DAT_001be8ac int
// GLOBAL DAT_001be8b0 undefined
// GLOBAL DAT_001be8c0 undefined4 *
// GLOBAL DAT_001be8c4 undefined4
// GLOBAL DAT_001be8c8 float
// GLOBAL DAT_001be8cc int *
// GLOBAL DAT_001be8d0 undefined4
// GLOBAL DAT_001be8d4 float
// GLOBAL DAT_001be8d8 undefined4
// GLOBAL UNK_001be8dc float
// GLOBAL UNK_001be8e0 uint
// GLOBAL UNK_001becd0 undefined *
// GLOBAL UNK_001becd4 int
// GLOBAL s_cState_FallDownStay_001becf4 string
// GLOBAL s_cState_FallDown_001bece4 string
// GLOBAL s_cState_Wait_001becd8 string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 * func_001BE498(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define uStack_94 (*(uint *)(albw_frame + 0xc))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define local_8c (*(uint * *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float * *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(uint *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x70))
  piVar5 = func_00150E40(param_1,param_2);
  iVar17 = DAT_001be8a8;
  *piVar5 = DAT_001be8a8;
  piVar5[200] = iVar17 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar16 = puVar6 + -0x103;
  puVar7 = (undefined4 *)func_0010BAB4(0x108);
  iVar17 = DAT_001be8ac;
  uVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    local_8c = (uint *)&DAT_001be8b0;
    local_90 = DAT_001be8ac;
    objStack_a0[0] = 1;
    uVar8 = func_001663BC(puVar7,&local_90,puVar6[-0x50],2,1);
  }
  puVar6[0xb] = uVar8;
  iVar9 = func_0054D964((int)puVar16,0);
  puVar6[0xc] = iVar9;
  iVar9 = func_0054D964((int)puVar16,1);
  puVar6[0xd] = iVar9;
  puVar10 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar10);
  }
  puVar6[0xe] = puVar7;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar7 = DAT_001be8c0;
  puVar6[0x12] = param_2[7];
  uVar8 = puVar7[1];
  puVar6[0x15] = *puVar7;
  puVar6[0x16] = uVar8;
  puVar6[0x13] = DAT_001be8c4;
  puVar6[0x14] = puVar16;
  *(undefined1 *)(puVar6 + 0x17) = 0;
  func_001BDEF0((int)puVar16);
  objStack_a0[0] = puVar6[-0xf];
  objStack_a0[1] = puVar6[-0xe];
  objStack_a0[2] = puVar6[-0xd];
  fVar19 = func_0054DE3C(puVar16,0,1);
  objStack_a0[1] = (uint)ALBW_AS_U32((fVar19 + ALBW_AS_F32(objStack_a0[1])));
  func_00115D70(&local_7c,(float *)(puVar6 + -0x26),DAT_001be8c8);
  local_88 = local_7c;
  local_84 = local_78;
  local_80 = (float *)uStack_74;
  func_00115C54((float *)objStack_a0,(float *)objStack_a0,&local_88);
  iVar9 = puVar6[0xd];
  *(uint *)(iVar9 + 4) = objStack_a0[0];
  *(uint *)(iVar9 + 8) = objStack_a0[1];
  *(uint *)(iVar9 + 0xc) = objStack_a0[2];
  func_004356B4((int *)puVar6[0xd]);
  objStack_a0[0] = 1;
  objStack_a0[1] = 0;
  objStack_a0[2] = 0;
  uVar8 = func_0014E428((int)puVar16,0,0,0,1,0,0);
  puVar6[9] = uVar8;
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar11 = (uint *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar11 = func_0016A2FC(puVar10,1,DAT_001be8cc,1);
  }
  puVar6[10] = puVar11;
  func_00169688(puVar11,0,DAT_001be8cc,*(int *)(puVar6[-0x4f] + 0x1c8));
  uVar18 = 0x1be6ac;
  func_0016A02C(puVar6[10],-1,(int *)0xffffffff,0);
  local_80 = &local_7c;
  piVar5 = (int *)&DAT_0000000a;
  local_84 = 4.2039e-45;
  local_88 = 1.4013e-45;
  pfVar15 = &local_78;
  local_34 = 10;
  local_30 = 0;
  local_7c = 0.0;
  local_68 = uVar18 | 0xff;
  local_78 = DAT_001be8d4;
  uStack_74 = DAT_001be8d0;
  uStack_70 = DAT_001be8d8;
  uStack_6c = DAT_001be8d0;
  uVar8 = DAT_001be8d0;
  fVar19 = DAT_001be8d4;
  func_0016898C(puVar6[10],(uint *)&local_88);
  iVar9 = *(int *)(puVar6[10] + 0x14);
  if (*(float *)(iVar9 + 8) != fVar19) {
    *(float *)(iVar9 + 8) = fVar19;
    *(undefined1 *)(iVar9 + 0x26) = 1;
  }
  uVar13 = *(undefined4 *)(puVar6[10] + 0xc);
  *(float *)(*(int *)(puVar6[10] + 0x14) + 0x10) = fVar19;
  func_00169A80((int *)puVar6[10],uVar13,pfVar15,piVar5);
  func_00168E9C((int *)puVar6[10],puVar6[9],(int *)0x0);
  iVar9 = puVar6[9];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar9 + 0x80),puVar6[-9],(float *)(puVar6 + -0xf));
  func_004CEAF0(puVar6[9]);
  func_004ECF6C((int)puVar16);
  piVar5 = (int *)func_0054D964((int)puVar16,0);
  iVar9 = puVar6[-0xd];
  fVar19 = ALBW_AS_F32(puVar6[-0xe]) + fRam001be8dc;
  piVar5[1] = puVar6[-0xf];
  piVar5[2] = (int)ALBW_AS_U32(fVar19);
  piVar5[3] = iVar9;
  func_004356B4(piVar5);
  puVar6[0xf] = piVar5;
  puVar10 = (undefined4 *)func_0010BAB4(100);
  iVar9 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    iVar9 = func_004EE484(puVar10);
  }
  puVar6[0x10] = iVar9;
  uStack_94 = puVar6[-0x50];
  objStack_a0[0] = (uint)*(short *)(puVar6 + -0xee);
  objStack_a0[2] = uRam001be8e0;
  uVar18 = objStack_a0[2];
  objStack_a0[1] = 0;
  (*(undefined2 *)((char *)&objStack_a0[2] + 0)) = (undefined2)uRam001be8e0;
  uVar3 = (undefined2)objStack_a0[2];
  objStack_a0[2] = uVar18;
  func_0014EB8C(iVar9,puVar6[0xf],(undefined2 *)puVar6[-0x1b],&uStack_94,*(short *)(puVar6 + -0xee),
                0,uVar3);
  objStack_a0[0] = CONCAT22((*(undefined2 *)((char *)&objStack_a0[0] + 2)),0x1a0);
  *(undefined2 *)(puVar6[0xf] + 0x28) = 0x1a0;
  *(undefined1 *)(puVar6[0x10] + 0x61) = 0;
  *(undefined1 *)((int)puVar6 + 6) = 3;
  puVar6[5] = puVar16;
  iVar9 = func_0010BA78(0x30);
  puVar6[6] = iVar9;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar14 = 3;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar13 = puVar7[0x11];
    iVar14 = iVar14 + -1;
    puVar10[2] = puVar7[0x10];
    puVar10[3] = uVar13;
    uVar13 = puVar7[0x11];
    puVar10[4] = puVar7[0x10];
    puVar10[5] = uVar13;
    puVar10 = puVar10 + 4;
  } while (iVar14 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar18 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar6[8] = puVar10;
  if (uVar18 != 0) {
    puVar12 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar7[7];
      *puVar10 = puVar7[6];
      puVar10[1] = uVar13;
      puVar12 = puVar10;
    }
    for (iVar9 = (int)uVar18 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar13 = puVar7[7];
      puVar12[2] = puVar7[6];
      puVar12[3] = uVar13;
      uVar13 = puVar7[7];
      puVar12[4] = puVar7[6];
      puVar12[5] = uVar13;
      puVar12 = puVar12 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar9 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 3;
    iVar9 = func_00100118((int)(puVar10 + 2),puRam001becd0,0x24,3);
  }
  if (iVar9 != 0) {
    puVar6[2] = 3;
    puVar6[3] = iVar9;
  }
  iVar9 = iRam001becd4;
  puVar6[-0x2e] = puVar6;
  *(undefined2 *)(iVar9 + (int)puVar16) = 3;
  local_8c = (uint *)s_cState_Wait_001becd8;
  local_90 = iVar17;
  iVar9 = puVar6[3];
  puVar11 = *(uint **)(iVar9 + 4);
  objStack_a0[0] = (uint)puVar6;
  (**(code **)(iVar17 + 8))(&local_90);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_8c + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001bea00;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001bea00:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar18) {
    uVar18 = iVar9 - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar11,local_8c,uVar18);
  *(undefined1 *)((int)puVar11 + uVar18) = 0;
  puVar10 = (undefined4 *)puVar6[6];
  uVar13 = puVar7[3];
  uVar20 = puVar7[4];
  uVar21 = puVar7[5];
  uVar22 = puVar7[6];
  uVar23 = puVar7[7];
  *puVar10 = puVar7[2];
  puVar10[1] = uVar13;
  puVar10 = (undefined4 *)puVar6[7];
  *puVar10 = uVar20;
  puVar10[1] = uVar21;
  puVar10 = (undefined4 *)puVar6[8];
  *puVar10 = uVar22;
  puVar10[1] = uVar23;
  local_8c = (uint *)s_cState_FallDown_001bece4;
  local_90 = iVar17;
  if ((uint)puVar6[2] < 2) {
    iVar9 = puVar6[3];
  }
  else {
    iVar9 = puVar6[3] + 0x24;
  }
  puVar11 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_90);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_8c + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001beab4;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001beab4:
  if (*(int *)(iVar9 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar11,local_8c,uVar18);
  *(undefined1 *)((int)puVar11 + uVar18) = 0;
  iVar9 = puVar6[6];
  uVar13 = puVar7[9];
  uVar20 = puVar7[7];
  uVar21 = puVar7[10];
  uVar22 = puVar7[6];
  uVar23 = puVar7[0xb];
  *(undefined4 *)(iVar9 + 8) = puVar7[8];
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar21;
  *(undefined4 *)(iVar9 + 0xc) = uVar23;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 8) = uVar22;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  local_8c = (uint *)s_cState_FallDownStay_001becf4;
  local_90 = iVar17;
  uVar18 = puVar6[2];
  if (uVar18 < 3) {
    iVar9 = puVar6[3];
    uVar2 = uVar18;
  }
  else {
    iVar9 = iVar17;
    uVar2 = puVar6[3];
  }
  if (2 < uVar18) {
    iVar9 = uVar2 + 0x48;
  }
  puVar11 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar17 + 8))(&local_90);
  uVar18 = 0;
  do {
    if (*(char *)((int)local_8c + uVar18) == '\0') {
      if ((int)uVar18 < 0x40001) goto LAB_001beb8c;
      break;
    }
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < 0x40001);
  uVar18 = 0;
LAB_001beb8c:
  if (*(int *)(iVar9 + 8) <= (int)uVar18) {
    uVar18 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar11,local_8c,uVar18);
  *(undefined1 *)((int)puVar11 + uVar18) = 0;
  uVar21 = puVar7[0xc];
  iVar17 = puVar6[6];
  uVar13 = puVar7[6];
  uVar23 = puVar7[7];
  uVar20 = puVar7[0xd];
  piVar5 = (int *)puVar7[0xe];
  uVar22 = puVar7[0xf];
  *(undefined4 *)(iVar17 + 0x10) = uVar21;
  *(undefined4 *)(iVar17 + 0x14) = uVar20;
  iVar17 = puVar6[7];
  *(int **)(iVar17 + 0x10) = piVar5;
  *(undefined4 *)(iVar17 + 0x14) = uVar22;
  iVar17 = puVar6[8];
  *(undefined4 *)(iVar17 + 0x10) = uVar13;
  *(undefined4 *)(iVar17 + 0x14) = uVar23;
  if (((*(short *)((int)puVar6 + -0x3d6) != 0) && (bVar4 = func_00588BF0((int)puVar16,0), bVar4)) ||
     (*(short *)(puVar6 + -0xf8) == 1)) {
    func_0065B524((undefined4 *)objStack_a0[0],2);
    iVar17 = *(int *)(puVar6[10] + 0x14);
    if (*(float *)(iVar17 + 8) != *(float *)(iVar17 + 0x14)) {
      *(float *)(iVar17 + 8) = *(float *)(iVar17 + 0x14);
      *(undefined1 *)(iVar17 + 0x26) = 1;
    }
    uVar13 = *(undefined4 *)(puVar6[10] + 0xc);
    *(undefined4 *)(*(int *)(puVar6[10] + 0x14) + 0x10) = uVar8;
    func_00169A80((int *)puVar6[10],uVar13,uVar21,piVar5);
    func_00168E9C((int *)puVar6[10],puVar6[9],(int *)0x0);
    iVar17 = puVar6[9];
    *(uint *)(iVar17 + 0x164) = *(uint *)(iVar17 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar17 + 0x80),puVar6[-9],(float *)(puVar6 + -0xf));
    func_004CEAF0(puVar6[9]);
  }
  else {
    func_0065B524((undefined4 *)objStack_a0[0],0);
  }
  return puVar16;
}

