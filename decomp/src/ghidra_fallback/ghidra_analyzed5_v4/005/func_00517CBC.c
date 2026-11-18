#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00517218(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0066BBD4(undefined4 *param_1,undefined1 param_2);
extern int DAT_005180b4;
extern undefined *DAT_005180b8;
extern undefined *DAT_005180bc;
extern undefined4 *DAT_005180c0;
extern undefined4 DAT_005180c4;
extern float DAT_005180c8;
extern undefined4 DAT_005180cc;
extern float DAT_005180d0;
extern float DAT_005180d4;
extern float DAT_005180d8;
extern undefined *DAT_005180dc;
extern int DAT_005180e0;
extern int DAT_005180f0;
extern char s_cState_Die_0051823c[];
extern char s_cState_Move_005180e4[];

// USA 00517CBC <- EU 00517C94 (Ghidra, non-matching)
// GLOBAL DAT_005180b4 int
// GLOBAL DAT_005180b8 undefined *
// GLOBAL DAT_005180bc undefined *
// GLOBAL DAT_005180c0 undefined4 *
// GLOBAL DAT_005180c4 undefined4
// GLOBAL DAT_005180c8 float
// GLOBAL DAT_005180cc undefined4
// GLOBAL DAT_005180d0 float
// GLOBAL DAT_005180d4 float
// GLOBAL DAT_005180d8 float
// GLOBAL DAT_005180dc undefined *
// GLOBAL DAT_005180e0 int
// GLOBAL DAT_005180f0 int
// GLOBAL s_cState_Die_0051823c string
// GLOBAL s_cState_Move_005180e4 string

undefined4 * func_00517CBC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint in_fpscr;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  piVar4 = func_00150E40(param_1,param_2);
  iVar9 = DAT_005180b4 + 0x54;
  *piVar4 = DAT_005180b4;
  puVar3 = DAT_005180b8;
  piVar4[200] = iVar9;
  iVar9 = func_00100118((int)(piVar4 + 0x103),puVar3,0x24,10);
  iVar9 = func_00100118(iVar9 + 0x168,DAT_005180bc,0xc,0x96);
  iVar12 = iVar9 + -0x574;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar5);
  }
  puVar5 = DAT_005180c0;
  *(undefined4 **)(iVar9 + 0x708) = puVar6;
  *(undefined4 *)(iVar9 + 0x710) = 0;
  uVar10 = puVar5[1];
  *(undefined4 *)(iVar9 + 0x720) = *puVar5;
  *(undefined4 *)(iVar9 + 0x724) = uVar10;
  uVar10 = DAT_005180c4;
  *(undefined4 *)(iVar9 + 0x718) = DAT_005180c4;
  *(int *)(iVar9 + 0x71c) = iVar12;
  uVar11 = puVar5[3];
  *(undefined4 *)(iVar9 + 0x730) = puVar5[2];
  *(undefined4 *)(iVar9 + 0x734) = uVar11;
  *(undefined4 *)(iVar9 + 0x728) = uVar10;
  *(int *)(iVar9 + 0x72c) = iVar12;
  iVar12 = func_0054D964(iVar12,0);
  *(int *)(iVar9 + 0x738) = iVar12;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar10 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = func_004EE484(puVar6);
  }
  *(undefined4 *)(iVar9 + 0x73c) = uVar10;
  puVar6 = func_0010A794((undefined4 *)(iVar9 + 0x744));
  puVar6[5] = 0;
  puVar6[6] = 0;
  fVar22 = DAT_005180c8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = ALBW_AS_U32(fVar22);
  *(undefined2 *)(puVar6 + 10) = 0;
  *(undefined1 *)((int)puVar6 + 0x2a) = 0;
  *(undefined2 *)(puVar6 + 0xb) = 0xffff;
  uVar10 = DAT_005180cc;
  puVar6[0xd] = 0xffff;
  puVar6[0xe] = uVar10;
  puVar6[0xc] = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  *(undefined1 *)((int)puVar6 + 0x3d) = 0;
  *(undefined1 *)((int)puVar6 + 0x3e) = 0;
  uVar10 = puVar5[4];
  uVar11 = puVar5[5];
  puVar13 = puVar6 + -0x32e;
  puVar6[-10] = puVar13;
  puVar6[-9] = uVar10;
  puVar6[-8] = uVar11;
  puVar6[-0x233] = puVar6 + -0xb;
  iVar9 = puVar6[-3];
  uVar10 = puVar6[-0x239];
  uVar11 = puVar6[-0x238];
  *(undefined4 *)(iVar9 + 4) = puVar6[-0x23a];
  *(undefined4 *)(iVar9 + 8) = uVar10;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  func_004356B4((int *)puVar6[-3]);
  *(undefined2 *)(puVar6[-3] + 0x28) = 0x1a0;
  local_44 = puVar6[-0x27b];
  func_0014EB8C(puVar6[-2],puVar6[-3],(undefined2 *)puVar6[-0x246],&local_44,
                *(undefined2 *)(puVar6 + -0x319),0,0xffff);
  fVar23 = DAT_005180d4;
  fVar20 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  uVar16 = in_fpscr & 0xfffffff | (uint)(fVar22 <= fVar20) << 0x1d;
  fVar21 = fVar22;
  if ((SUB41(uVar16 >> 0x1d,0)) &&
     (uVar16 = in_fpscr & 0xfffffff | (uint)(fVar20 < DAT_005180d0) << 0x1f |
               (uint)(fVar20 == DAT_005180d0) << 0x1e, bVar1 = (byte)(uVar16 >> 0x18),
     fVar21 = fVar20,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar20) || NAN(DAT_005180d0)))) {
    fVar21 = DAT_005180d0;
  }
  *(short *)(puVar6 + 10) = (short)(int)fVar21;
  fVar21 = DAT_005180d8;
  fVar24 = (float)VectorUnsignedToFloat((ushort)param_2[0xb] & 0xff,(byte)(uVar16 >> 0x15) & 3);
  uVar15 = uVar16 & 0xfffffff | (uint)(fVar23 <= fVar24) << 0x1d;
  fVar20 = fVar23;
  if ((SUB41(uVar15 >> 0x1d,0)) &&
     (uVar15 = uVar16 & 0xfffffff | (uint)(fVar24 < fVar22) << 0x1f |
               (uint)(fVar24 == fVar22) << 0x1e, bVar1 = (byte)(uVar15 >> 0x18), fVar20 = fVar24,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar24) || NAN(fVar22)))) {
    fVar20 = fVar22;
  }
  uVar10 = VectorFloatToUnsigned(fVar20,3);
  *(char *)(puVar6 + -1) = (char)uVar10;
  uVar2 = *(ushort *)((int)param_2 + 0x2e);
  fVar22 = (float)VectorUnsignedToFloat(uVar2 & 0xff,(byte)(uVar15 >> 0x15) & 3);
  if ((fVar23 <= fVar22) && (fVar23 = fVar22, fVar21 < fVar22)) {
    fVar23 = fVar21;
  }
  uVar16 = VectorFloatToUnsigned(fVar23,3);
  *(char *)((int)puVar6 + -3) = (char)uVar16;
  if ((uVar16 & 0xff) == 2 || (uVar16 & 0xff) == 3) {
    *(undefined1 *)((int)puVar6 + 0x3d) = 1;
  }
  *(byte *)((int)puVar6 + -3) = (byte)uVar2 & 1;
  puVar6[-0x234] = puVar6[-0x234] + 0x20000000 >> 0x1e;
  puVar6[0xc] = 0;
  func_00517218((int)puVar13);
  *(undefined1 *)((int)puVar6 + 6) = 2;
  puVar6[5] = puVar13;
  iVar9 = func_0010BA78(0x20);
  puVar6[6] = iVar9;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 2;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar10 = puVar5[0x13];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar5[0x12];
    puVar7[3] = uVar10;
    uVar10 = puVar5[0x13];
    puVar7[4] = puVar5[0x12];
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar16 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar6[8] = puVar7;
  if (uVar16 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar5[0xb];
      *puVar7 = puVar5[10];
      puVar7[1] = uVar10;
      puVar8 = puVar7;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar10 = puVar5[0xb];
      puVar8[2] = puVar5[10];
      puVar8[3] = uVar10;
      uVar10 = puVar5[0xb];
      puVar8[4] = puVar5[10];
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_005180dc,0x24,2);
  }
  if (iVar9 != 0) {
    puVar6[3] = iVar9;
    puVar6[2] = 2;
  }
  iVar9 = DAT_005180e0;
  puVar6[-0x259] = puVar6;
  iVar12 = DAT_005180f0;
  *(undefined2 *)(iVar9 + (int)puVar13) = 2;
  local_3c = (uint *)s_cState_Move_005180e4;
  local_40 = iVar12;
  iVar9 = puVar6[3];
  puVar14 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_40);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_3c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00518100;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00518100:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar16) {
    uVar16 = iVar9 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar14,local_3c,uVar16);
  *(undefined1 *)((int)puVar14 + uVar16) = 0;
  puVar7 = (undefined4 *)puVar6[6];
  uVar10 = puVar5[7];
  uVar11 = puVar5[8];
  uVar17 = puVar5[9];
  uVar18 = puVar5[10];
  uVar19 = puVar5[0xb];
  *puVar7 = puVar5[6];
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_3c = (uint *)s_cState_Die_0051823c;
  local_40 = iVar12;
  if ((uint)puVar6[2] < 2) {
    iVar9 = puVar6[3];
  }
  else {
    iVar9 = puVar6[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_40);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_3c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_005181b8;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_005181b8:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar14,local_3c,uVar16);
  *(undefined1 *)((int)puVar14 + uVar16) = 0;
  iVar9 = puVar6[6];
  uVar10 = puVar5[0xd];
  uVar17 = puVar5[0xe];
  uVar11 = puVar5[0xf];
  uVar18 = puVar5[0xb];
  uVar19 = puVar5[10];
  *(undefined4 *)(iVar9 + 8) = puVar5[0xc];
  *(undefined4 *)(iVar9 + 0xc) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  func_0066BBD4(puVar6,0);
  return puVar13;
}

