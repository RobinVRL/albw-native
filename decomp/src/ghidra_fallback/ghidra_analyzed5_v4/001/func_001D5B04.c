#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001D4970(int param_1);
extern int func_001D4BB8(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_0065C844(undefined4 *param_1,undefined1 param_2);
extern int iRam001d5f40;
extern int iRam001d5f5c;
extern undefined4 uRam001d627c;
extern undefined4 *puRam001d5f38;
extern undefined4 *puRam001d5f3c;
extern undefined4 *puRam001d625c;
extern int DAT_001d5f18;
extern undefined4 DAT_001d5f1c;
extern undefined4 DAT_001d5f20;
extern float DAT_001d5f24;
extern float DAT_001d5f28;
extern int DAT_001d5f2c;
extern int *DAT_001d5f30;
extern int DAT_001d5f34;
extern char s_Waist_001d6280[];
extern char s_cState_DeliveryFly_001d6260[];
extern char s_cState_RecoveryFlyDown_001d5f44[];
extern char s_cState_RecoveryFlyUp_001d6244[];

// USA 001D5B04 <- EU 001D5B04 (Ghidra, non-matching)
// GLOBAL DAT_001d5f18 int
// GLOBAL DAT_001d5f1c undefined4
// GLOBAL DAT_001d5f20 undefined4
// GLOBAL DAT_001d5f24 float
// GLOBAL DAT_001d5f28 float
// GLOBAL DAT_001d5f2c int
// GLOBAL DAT_001d5f30 int *
// GLOBAL DAT_001d5f34 int
// GLOBAL UNK_001d5f38 undefined4 *
// GLOBAL UNK_001d5f3c undefined *
// GLOBAL UNK_001d5f40 int
// GLOBAL UNK_001d5f5c int
// GLOBAL UNK_001d625c undefined4 *
// GLOBAL UNK_001d627c uint
// GLOBAL s_Waist_001d6280 string
// GLOBAL s_cState_DeliveryFly_001d6260 string
// GLOBAL s_cState_RecoveryFlyDown_001d5f44 string
// GLOBAL s_cState_RecoveryFlyUp_001d6244 string

undefined4 * func_001D5B04(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define puStack_34 (*(uint * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_001d5f18;
  *piVar4 = DAT_001d5f18;
  piVar4[200] = iVar6 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x105);
  puVar5[5] = 0;
  uVar19 = DAT_001d5f1c;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = uVar19;
  puVar5[10] = puVar5 + -0x105;
  puVar5[0xb] = 0;
  puVar13 = puVar5 + -0x105;
  puVar5[0xc] = DAT_001d5f20;
  puVar5[0xd] = puVar13;
  iVar6 = func_0054D89C((int)puVar13,0);
  puVar5[0x11] = iVar6;
  puVar5[0x12] = puVar5[-0x11];
  puVar5[0x13] = puVar5[-0x10];
  puVar5[0x14] = puVar5[-0xf];
  fVar23 = DAT_001d5f28;
  fVar18 = DAT_001d5f24;
  puVar5[0x15] = puVar5[-0x11];
  puVar5[0x16] = puVar5[-0x10];
  puVar5[0x17] = puVar5[-0xf];
  puVar5[0x18] = puVar5[-0x11];
  puVar5[0x19] = puVar5[-0x10];
  puVar5[0x1a] = puVar5[-0xf];
  puVar5[0x1b] = ALBW_AS_U32(fVar18);
  puVar5[0x1c] = ALBW_AS_U32(fVar18);
  puVar5[0x1d] = ALBW_AS_U32(fVar18);
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = ALBW_AS_U32(fVar23);
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  puVar5[0x27] = ALBW_AS_U32(fVar23);
  *(undefined2 *)((int)puVar5 + 0xa2) = 0;
  *(undefined1 *)((int)puVar5 + 0xae) = 0;
  piVar4 = DAT_001d5f30;
  *(undefined1 *)((int)puVar5 + 0xaf) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)((int)puVar5 + 0xb1) = 0;
  *(undefined1 *)((int)puVar5 + 0xb2) = 0;
  bVar3 = func_00584B94(*piVar4,DAT_001d5f2c);
  *(bool *)((int)puVar5 + 0xb1) = bVar3;
  fVar17 = (float)VectorUnsignedToFloat((ushort)param_2[10] & 0xff,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar18 <= fVar17) && (fVar18 = fVar17, fVar23 < fVar17)) {
    fVar18 = fVar23;
  }
  uVar19 = VectorFloatToUnsigned(fVar18,3);
  *(char *)(puVar5 + 0x28) = (char)uVar19;
  uVar19 = func_0014E428((int)puVar13,0,0,0,0,0,0);
  piVar4 = puVar5 + -2;
  puVar5[-2] = uVar19;
  uVar19 = func_0014E904((int)puVar13,4,1);
  puVar5[-1] = uVar19;
  iVar6 = DAT_001d5f34;
  uVar14 = 0;
  iVar15 = *(int *)(puVar5[-0x51] + 0x1c8);
  do {
    func_00169688((uint *)puVar5[-1],uVar14,(int *)(iVar6 + uVar14 * 8),iVar15);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 4);
  uVar11 = 0xffffffff;
  piVar12 = (int *)0x0;
  func_0016A02C(puVar5[-1],-1,(int *)0xffffffff,0);
  puVar5[0x1e] = 0;
  func_00151148(puVar5[0x11],1);
  *(undefined1 *)((int)puVar5 + -0x83) = 1;
  func_001D4970((int)puVar13);
  uVar19 = extraout_r1;
  if (*(char *)((int)puVar5 + 0xb1) != '\0') {
    uVar11 = 0;
    func_004CF478(puVar5[-2],0);
    uVar19 = extraout_r1_00;
  }
  if (*(char *)((int)puVar5 + 0xb1) == '\0') {
    func_00169A80((int *)puVar5[-1],uVar19,uVar11,piVar12);
    uVar11 = 0;
    func_00168E9C((int *)puVar5[-1],puVar5[-2],(int *)0x0);
    uVar19 = extraout_r1_01;
  }
  func_00169A80((int *)puVar5[0x2a],uVar19,uVar11,piVar12);
  piVar12 = puVar5 + 0x29;
  func_00168E9C((int *)puVar5[0x2a],puVar5[0x29],(int *)0x0);
  func_001D4BB8((int)puVar13,(int)*(char *)((int)puVar5 + 0xb1));
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar13;
  iVar6 = func_0010BA78(0x40);
  puVar5[6] = iVar6;
  puVar9 = puRam001d5f38;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar15 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar19 = puVar9[0xf];
    iVar15 = iVar15 + -1;
    puVar7[2] = puVar9[0xe];
    puVar7[3] = uVar19;
    uVar19 = puVar9[0xf];
    puVar7[4] = puVar9[0xe];
    puVar7[5] = uVar19;
    puVar7 = puVar7 + 4;
  } while (iVar15 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = puVar9[5];
      *puVar7 = puVar9[4];
      puVar7[1] = uVar19;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar19 = puVar9[5];
      puVar8[2] = puVar9[4];
      puVar8[3] = uVar19;
      uVar19 = puVar9[5];
      puVar8[4] = puVar9[4];
      puVar8[5] = uVar19;
      puVar8 = puVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = puRam001d5f3c;
  iVar6 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 4;
    *puVar9 = 0x24;
    iVar6 = func_00100118((int)(puVar9 + 2),puVar2,0x24,4);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 4;
  }
  iVar6 = iRam001d5f40;
  puVar5[-0x30] = puVar5;
  iVar15 = iRam001d5f5c;
  *(undefined2 *)(iVar6 + (int)puVar13) = 4;
  puStack_34 = (uint *)s_cState_RecoveryFlyDown_001d5f44;
  iStack_38 = iVar15;
  if ((uint)puVar5[2] < 2) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar15 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d5f6c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d5f6c:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar5[6];
  uVar19 = puRam001d5f38[1];
  uVar11 = puRam001d5f38[2];
  uVar20 = puRam001d5f38[3];
  uVar21 = puRam001d5f38[4];
  uVar22 = puRam001d5f38[5];
  *(undefined4 *)(iVar6 + 8) = *puRam001d5f38;
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar20;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar21;
  *(undefined4 *)(iVar6 + 0xc) = uVar22;
  puStack_34 = (uint *)s_cState_RecoveryFlyUp_001d6244;
  iStack_38 = iVar15;
  if ((uint)puVar5[2] < 3) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar15 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d6030;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d6030:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar5[6];
  uVar19 = *puRam001d625c;
  uVar11 = puRam001d625c[1];
  uVar20 = puRam001d625c[3];
  uVar21 = puRam001d625c[4];
  uVar22 = puRam001d625c[5];
  *(undefined4 *)(iVar6 + 0x10) = puRam001d625c[2];
  *(undefined4 *)(iVar6 + 0x14) = uVar20;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar21;
  *(undefined4 *)(iVar6 + 0x14) = uVar22;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar19;
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  puStack_34 = (uint *)s_cState_DeliveryFly_001d6260;
  iStack_38 = iVar15;
  if ((uint)puVar5[2] < 4) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x6c;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar15 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d60f4;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d60f4:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  puVar9 = puRam001d5f38;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar5[6];
  uVar19 = puVar9[4];
  uVar11 = puVar9[5];
  uVar20 = puVar9[0xc];
  uVar21 = puVar9[0xd];
  uVar22 = puVar9[0xb];
  *(undefined4 *)(iVar6 + 0x18) = puVar9[10];
  *(undefined4 *)(iVar6 + 0x1c) = uVar22;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar20;
  *(undefined4 *)(iVar6 + 0x1c) = uVar21;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar19;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  puStack_34 = (uint *)0x1d6274;
  iStack_38 = iVar15;
  uVar10 = func_00564A78(puVar5[-2],&iStack_38);
  uVar14 = uRam001d627c;
  if (uVar10 != uRam001d627c) {
    puVar16 = (uint *)(*(int *)(*(int *)(puVar5[-2] + 0x24) + 0xc) + uVar10 * 0x40);
    *puVar16 = *puVar16 | 0x10;
    *(undefined4 **)(*piVar4 + 0x16c) = puVar5 + 9;
  }
  puStack_34 = (uint *)s_Waist_001d6280;
  iStack_38 = iVar15;
  uVar10 = func_00564A78(puVar5[0x29],&iStack_38);
  if (uVar10 != uVar14) {
    puVar16 = (uint *)(*(int *)(*(int *)(puVar5[0x29] + 0x24) + 0xc) + uVar10 * 0x40);
    *puVar16 = *puVar16 | 0x10;
    *(undefined4 **)(*piVar12 + 0x16c) = puVar5 + 0xc;
  }
  if (*(char *)(puVar5 + 0x28) == '\x01') {
    func_0065C844(puVar5,3);
  }
  else {
    func_0065C844(puVar5,1);
  }
  return puVar13;
}

