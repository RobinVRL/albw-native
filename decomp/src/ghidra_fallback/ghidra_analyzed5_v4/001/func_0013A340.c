#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0053B348(int param_1,float *param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0013a7f8;
extern undefined4 *DAT_0013a7fc;
extern undefined4 DAT_0013a800;
extern undefined4 DAT_0013a804;
extern undefined4 DAT_0013a808;
extern undefined4 DAT_0013a80c;
extern undefined4 DAT_0013a810;
extern undefined4 DAT_0013a814;
extern undefined4 DAT_0013a818;
extern undefined4 DAT_0013a81c;
extern undefined4 DAT_0013a820;
extern int *DAT_0013a824;
extern undefined *DAT_0013aa1c;
extern int DAT_0013aa20;
extern uint DAT_0013aa30;
extern char s_cState_Wait_0013aa24[];

// USA 0013A340 <- EU 0013A340 (Ghidra, non-matching)
// GLOBAL DAT_0013a7f8 int
// GLOBAL DAT_0013a7fc undefined4 *
// GLOBAL DAT_0013a800 undefined4
// GLOBAL DAT_0013a804 undefined4
// GLOBAL DAT_0013a808 undefined4
// GLOBAL DAT_0013a80c undefined4
// GLOBAL DAT_0013a810 undefined4
// GLOBAL DAT_0013a814 undefined4
// GLOBAL DAT_0013a818 undefined4
// GLOBAL DAT_0013a81c undefined4
// GLOBAL DAT_0013a820 undefined4
// GLOBAL DAT_0013a824 int *
// GLOBAL DAT_0013aa1c undefined *
// GLOBAL DAT_0013aa20 int
// GLOBAL DAT_0013aa30 uint
// GLOBAL s_cState_Wait_0013aa24 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

undefined4 * func_0013A340(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int extraout_r1;
  int extraout_r1_00;
  int iVar12;
  code *pcVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(uint * *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  piVar3 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0013a7f8;
  *piVar3 = DAT_0013a7f8;
  piVar3[200] = iVar8 + 0x54;
  piVar3[0x103] = 0;
  puVar4 = func_0010A794(piVar3 + 0x104);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar14 = puVar4 + -0x104;
  puVar4[8] = 0;
  objStack_58[0] = 1;
  objStack_58[1] = 0;
  objStack_58[2] = 0;
  uVar5 = func_0014E428((int)puVar14,0,0,0,1,0,0);
  puVar4[9] = uVar5;
  puVar4[10] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar4[0xb] = puVar7;
  piVar3 = puVar4 + 0xb;
  iVar8 = func_0054D964((int)puVar14,0);
  puVar4[0xc] = iVar8;
  piVar17 = puVar4 + 0xc;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar6);
  }
  puVar6 = DAT_0013a7fc;
  puVar4[0xd] = puVar7;
  uVar5 = puVar6[1];
  puVar4[0x10] = *puVar6;
  puVar4[0x11] = uVar5;
  uVar5 = DAT_0013a808;
  puVar4[0xe] = DAT_0013a800;
  puVar4[0xf] = puVar14;
  uVar11 = puVar6[3];
  puVar4[0x14] = puVar6[2];
  puVar4[0x15] = uVar11;
  puVar4[0x12] = DAT_0013a804;
  puVar4[0x13] = puVar14;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = uVar5;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = uVar5;
  uVar5 = DAT_0013a80c;
  puVar4[0x1c] = DAT_0013a80c;
  puVar4[0x1d] = uVar5;
  puVar4[0x1e] = 0;
  puVar4[0x20] = 0;
  puVar4[0x22] = 0;
  *(undefined1 *)(puVar4 + 0x24) = 0;
  *(undefined1 *)((int)puVar4 + 0x91) = 0;
  *(undefined1 *)((int)puVar4 + 0x92) = 0;
  puVar7 = (undefined4 *)func_0010BAB4(0x88);
  piVar9 = (int *)0x0;
  iVar8 = extraout_r1;
  if (puVar7 != (undefined4 *)0x0) {
    piVar9 = func_002758CC(puVar7,(int *)param_2);
    iVar8 = extraout_r1_00;
  }
  puVar4[10] = piVar9;
  if (piVar9 != (int *)0x0) {
    iVar8 = *piVar9;
  }
  uVar24 = CONCAT44(DAT_0013a818,DAT_0013a814);
  uVar23 = CONCAT44(DAT_0013a81c,DAT_0013a810);
  if (piVar9 != (int *)0x0 && iVar8 != 0) {
    func_0053B348((int)piVar9,(float *)(puVar4 + -0x10));
    iVar8 = puVar4[9];
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
      func_00491938((float *)(iVar8 + 0x80),0,puVar4[-10],0);
      iVar8 = puVar4[9];
      *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar8 + 0x8c) = puVar4[-0x10];
      *(undefined4 *)(iVar8 + 0x9c) = puVar4[-0xf];
      *(undefined4 *)(iVar8 + 0xac) = puVar4[-0xe];
      func_004CEAF0(puVar4[9]);
    }
    if (puVar4[0xc] != 0) {
      objStack_58[0] = (uint)uVar23;
      objStack_58[1] = (uint)ALBW_AS_U32((*(float *)(puVar4[0xc] + 0x5c) * ALBW_AS_F32(uVar24)));
      iVar8 = *piVar17;
      fVar19 = ALBW_AS_F32(puVar4[0x1c]) * ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
      *(undefined4 *)(iVar8 + 100) = puVar4[0x1c];
      *(float *)(iVar8 + 0x60) = fVar19;
      *(float *)(iVar8 + 0x58) = fVar19;
      iVar8 = *piVar17;
      objStack_58[2] = objStack_58[0];
      func_00115C54(&local_40,(float *)(puVar4 + -0x10),(float *)objStack_58);
      *(float *)(iVar8 + 4) = local_40;
      *(undefined4 *)(iVar8 + 8) = uStack_3c;
      *(undefined4 *)(iVar8 + 0xc) = uStack_38;
      func_004356B4((int *)*piVar17);
    }
    iVar8 = puVar4[9];
    if (iVar8 != 0) {
      fVar19 = ALBW_AS_F32(puVar4[0x1c]) * ALBW_AS_F32(((ulonglong)uVar23 >> 0x20));
      *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
      *(float *)(iVar8 + 0x74) = fVar19;
      *(float *)(iVar8 + 0x78) = fVar19;
      *(float *)(iVar8 + 0x7c) = fVar19;
    }
  }
  iVar8 = puVar4[9];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar4[-10],(float *)(puVar4 + -0x10));
  (**(code **)(*(int *)puVar4[9] + 0x10))((int *)puVar4[9],0x6f);
  if (puVar4[0xb] != 0) {
    objStack_58[1] = CONCAT22((*(undefined2 *)((char *)&objStack_58[1] + 2)),(short)DAT_0013a820);
    *(short *)(puVar4[0xc] + 0x28) = (short)DAT_0013a820;
    *(int *)(puVar4[0xb] + 0x18) = *piVar17;
    objStack_58[0] = puVar4[-0x51];
    func_004EDAD0(*piVar3,objStack_58);
    *(undefined2 *)(*piVar3 + 0x2c) = 0xffff;
    func_004A7F00(*DAT_0013a824,*piVar3,3);
    *(undefined4 **)(*piVar3 + 0x28) = puVar4 + 0x12;
  }
  puVar4[-0x4c] = puVar4[-0x4c] | 1;
  if (puVar4[0xc] != 0) {
    objStack_58[0] = (uint)uVar23;
    objStack_58[1] = (uint)ALBW_AS_U32((*(float *)(puVar4[0xc] + 0x5c) * ALBW_AS_F32(uVar24)));
    iVar8 = *piVar17;
    fVar19 = ALBW_AS_F32(puVar4[0x1c]) * ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
    *(undefined4 *)(iVar8 + 100) = puVar4[0x1c];
    *(float *)(iVar8 + 0x60) = fVar19;
    *(float *)(iVar8 + 0x58) = fVar19;
    iVar8 = *piVar17;
    objStack_58[2] = objStack_58[0];
    func_00115C54(&local_40,(float *)(puVar4 + -0x10),(float *)objStack_58);
    *(float *)(iVar8 + 4) = local_40;
    *(undefined4 *)(iVar8 + 8) = uStack_3c;
    *(undefined4 *)(iVar8 + 0xc) = uStack_38;
    func_004356B4((int *)*piVar17);
  }
  iVar8 = puVar4[9];
  if (iVar8 != 0) {
    fVar19 = ALBW_AS_F32(puVar4[0x1c]) * ALBW_AS_F32(((ulonglong)uVar23 >> 0x20));
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    *(float *)(iVar8 + 0x74) = fVar19;
    *(float *)(iVar8 + 0x78) = fVar19;
    *(float *)(iVar8 + 0x7c) = fVar19;
  }
  puVar4[5] = puVar14;
  *(undefined1 *)((int)puVar4 + 6) = 1;
  iVar8 = func_0010BA78(0x10);
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar12 = 1;
  puVar7 = (undefined4 *)(iVar8 + -8);
  do {
    uVar5 = puVar6[0xb];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar6[10];
    puVar7[3] = uVar5;
    uVar5 = puVar6[0xb];
    puVar7[4] = puVar6[10];
    puVar7[5] = uVar5;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar16 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar4[8] = puVar7;
  if (uVar16 != 0) {
    puVar10 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar6[9];
      *puVar7 = puVar6[8];
      puVar7[1] = uVar5;
      puVar10 = puVar7;
    }
    for (iVar8 = (int)uVar16 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar5 = puVar6[9];
      puVar10[2] = puVar6[8];
      puVar10[3] = uVar5;
      uVar5 = puVar6[9];
      puVar10[4] = puVar6[8];
      puVar10[5] = uVar5;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 1;
    iVar8 = func_00100118((int)(puVar7 + 2),DAT_0013aa1c,0x24,1);
  }
  if (iVar8 != 0) {
    puVar4[2] = 1;
    puVar4[3] = iVar8;
  }
  iVar8 = DAT_0013aa20;
  puVar4[-0x2f] = puVar4;
  uVar16 = DAT_0013aa30;
  *(undefined2 *)(iVar8 + (int)puVar14) = 1;
  local_44 = (uint *)s_cState_Wait_0013aa24;
  local_48 = uVar16;
  iVar8 = puVar4[3];
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar16 + 8))(&local_48);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_44 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0013a8ac;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0013a8ac:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar15) {
    uVar15 = iVar8 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar18,local_44,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar5 = puVar6[5];
  uVar11 = puVar6[6];
  uVar20 = puVar6[7];
  uVar21 = puVar6[8];
  uVar22 = puVar6[9];
  *puVar7 = puVar6[4];
  puVar7[1] = uVar5;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar20;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar21;
  puVar7[1] = uVar22;
  iVar8 = (int)*(char *)(puVar4 + 1);
  if (iVar8 != -1) {
    iVar12 = puVar4[8];
    pcVar13 = *(code **)(iVar12 + iVar8 * 8);
    if ((pcVar13 != (code *)0x0) ||
       ((uVar15 = *(uint *)(iVar12 + iVar8 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
      uVar15 = *(uint *)(iVar12 + iVar8 * 8 + 4);
      piVar3 = (int *)(puVar4[5] + ((int)uVar15 >> 1));
      if ((uVar15 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *piVar3);
      }
      (*pcVar13)(piVar3,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar4 + 1);
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 5) = uVar2;
  if (puVar4[4] != 0) {
    piVar3 = (int *)puVar4[3];
    (**(code **)(*piVar3 + 8))(piVar3);
    objStack_58[1] = piVar3[1];
    objStack_58[0] = uVar16;
    func_0010BEB4(puVar4[4],(int *)objStack_58);
  }
  iVar12 = (int)*(char *)(puVar4 + 1);
  iVar8 = puVar4[6];
  pcVar13 = *(code **)(iVar8 + iVar12 * 8);
  if ((pcVar13 != (code *)0x0) ||
     ((uVar16 = *(uint *)(iVar8 + iVar12 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
    uVar16 = *(uint *)(iVar8 + iVar12 * 8 + 4);
    if ((uVar16 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *(int *)(puVar4[5] + ((int)uVar16 >> 1)));
    }
    (*pcVar13)((int)(puVar4[5]) + ((int)uVar16 >> 1));
  }
  return puVar14;
}

