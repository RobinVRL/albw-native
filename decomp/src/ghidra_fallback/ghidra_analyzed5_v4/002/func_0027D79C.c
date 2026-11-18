#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110848(int param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0027CDD4(int param_1,uint param_2);
extern int func_0027CFD8(int param_1);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0027db88;
extern float DAT_0027db8c;
extern undefined4 *DAT_0027db90;
extern undefined4 DAT_0027db94;
extern undefined *DAT_0027db98;
extern uint DAT_0027db9c;
extern uint DAT_0027dba0;
extern undefined *DAT_0027dba4;
extern int DAT_0027dbb4;
extern int *DAT_0027e000;
extern uint *DAT_0027e004;
extern undefined4 *DAT_0027e008;
extern undefined4 DAT_0027e00c;
extern int DAT_0027e010;
extern int DAT_0027e014;
extern int DAT_0027e018;
extern int *DAT_0027e01c;
extern char s_ObjFire_0027e0b8[];
extern char s_cState_Move_0027dff4[];
extern char s_cState_Stop_0027dba8[];
extern char s_cState_TimerStop_0027dbb8[];

// USA 0027D79C <- EU 0027D7C4 (Ghidra, non-matching)
// GLOBAL DAT_0027db88 int
// GLOBAL DAT_0027db8c float
// GLOBAL DAT_0027db90 undefined4 *
// GLOBAL DAT_0027db94 undefined4
// GLOBAL DAT_0027db98 undefined *
// GLOBAL DAT_0027db9c uint
// GLOBAL DAT_0027dba0 uint
// GLOBAL DAT_0027dba4 undefined *
// GLOBAL DAT_0027dbb4 int
// GLOBAL DAT_0027e000 int *
// GLOBAL DAT_0027e004 uint *
// GLOBAL DAT_0027e008 undefined4 *
// GLOBAL DAT_0027e00c undefined4
// GLOBAL DAT_0027e010 int
// GLOBAL DAT_0027e014 int
// GLOBAL DAT_0027e018 int
// GLOBAL DAT_0027e01c int *
// GLOBAL s_ObjFire_0027e0b8 string
// GLOBAL s_cState_Move_0027dff4 string
// GLOBAL s_cState_Stop_0027dba8 string
// GLOBAL s_cState_TimerStop_0027dbb8 string

/* WARNING: Variable defined which should be unmapped: objStack_78 */
/* WARNING: Variable defined which should be unmapped: objStack_74 */

int * func_0027D79C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint extraout_r1;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint in_fpscr;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_78 ((uint *)(albw_frame + 0x8))
  #define objStack_74 ((uint *)(albw_frame + 0xc))
  #define local_6c (*(uint *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(uint * *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined2 *)(albw_frame + 0x24))
  #define local_3c (*(uint *)(albw_frame + 0x44))
  #define local_38 (*(uint * *)(albw_frame + 0x48))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0027db88;
  *piVar5 = DAT_0027db88;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  fVar23 = DAT_0027db8c;
  puVar6[0xb] = 0;
  puVar12 = DAT_0027db90;
  puVar6[0xc] = ALBW_AS_U32(fVar23);
  uVar13 = DAT_0027db94;
  puVar6[0xe] = 0;
  uVar14 = puVar12[0x15];
  puVar6[0xf] = puVar12[0x14];
  puVar6[0x10] = uVar14;
  puVar6[0xd] = uVar13;
  iVar7 = func_004EE484(puVar6 + 0x11);
  *(undefined4 *)(iVar7 + 0x68) = 0;
  uVar14 = puVar12[0x14];
  uVar15 = puVar12[0x15];
  *(undefined4 *)(iVar7 + 100) = uVar13;
  *(undefined4 *)(iVar7 + 0x6c) = uVar14;
  *(undefined4 *)(iVar7 + 0x70) = uVar15;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  puVar6 = func_004EDC9C((undefined4 *)(iVar7 + 0x78));
  puVar8 = (uint *)func_00100118((int)(puVar6 + 0x12),DAT_0027db98,8,0xc);
  puVar8[0x1d] = 0;
  puVar8[0x23] = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = (uint)ALBW_AS_U32(fVar23);
  puVar8[0x26] = 0;
  uVar10 = DAT_0027db9c;
  puVar8[0x27] = 0;
  uVar17 = DAT_0027dba0;
  puVar8[0x29] = uVar10;
  puVar8[0x2a] = uVar17;
  puVar8[0x28] = 0;
  *(undefined1 *)(puVar8 + 0x2b) = 0;
  *(undefined1 *)((int)puVar8 + 0xad) = 0;
  puVar16 = puVar8 + -0x144;
  puVar9 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar9);
  }
  puVar8[-0x13] = (uint)puVar6;
  objStack_74[0] = 0;
  objStack_78[0] = 1;
  objStack_74[1] = 0;
  uVar10 = func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar8[-0x38] = uVar10;
  *(undefined1 *)(puVar8 + 0x1e) = 0;
  if ((short)param_2[10] != 0) {
    *(undefined1 *)(puVar8 + 0x1e) = 1;
  }
  local_38 = puVar8 + 0x1f;
  puVar8[0x1f] = (int)*(short *)((int)param_2 + 0x2a);
  puVar8[0x21] = (int)(short)param_2[0xb];
  sVar3 = *(short *)((int)param_2 + 0x2e);
  puVar8[0x20] = (int)sVar3;
  if ((int)sVar3 == 0) {
    *(undefined1 *)((int)puVar8 + 0x89) = 0;
  }
  else {
    *(undefined1 *)((int)puVar8 + 0x89) = 1;
  }
  if (*(short *)((int)param_2 + 0x32) == 0) {
    *(undefined1 *)(puVar8 + 0x22) = 0;
  }
  else {
    *(undefined1 *)(puVar8 + 0x22) = 1;
  }
  puVar8[0x26] = puVar8[-0x4a];
  *(undefined1 *)((int)puVar8 + -0xfe) = 3;
  puVar8[-0x3c] = (uint)puVar16;
  uVar10 = func_0010BA78(0x30);
  puVar8[-0x3b] = uVar10;
  puVar8[-0x3a] = uVar10 + (uint)*(byte *)((int)puVar8 + -0xfe) * 8;
  iVar7 = 3;
  puVar6 = (undefined4 *)(uVar10 - 8);
  do {
    uVar14 = puVar12[0x13];
    iVar7 = iVar7 + -1;
    puVar6[2] = puVar12[0x12];
    puVar6[3] = uVar14;
    uVar14 = puVar12[0x13];
    puVar6[4] = puVar12[0x12];
    puVar6[5] = uVar14;
    puVar6 = puVar6 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar8 + -0xfe);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar8[-0x39] = (uint)puVar6;
  if (uVar10 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar12[5];
      *puVar6 = puVar12[4];
      puVar6[1] = uVar14;
      puVar9 = puVar6;
    }
    for (iVar7 = (int)uVar10 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar14 = puVar12[5];
      puVar9[2] = puVar12[4];
      puVar9[3] = uVar14;
      uVar14 = puVar12[5];
      puVar9[4] = puVar12[4];
      puVar9[5] = uVar14;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  uVar10 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 3;
    uVar10 = func_00100118((int)(puVar6 + 2),DAT_0027dba4,0x24,3);
  }
  if (uVar10 != 0) {
    puVar8[-0x3e] = uVar10;
    puVar8[-0x3f] = 3;
  }
  puVar8[-0x6f] = (uint)(puVar8 + -0x41);
  *(undefined2 *)((int)puVar8 + -0x1b6) = 3;
  iVar7 = DAT_0027dbb4;
  local_64 = (uint *)s_cState_Stop_0027dba8;
  local_68 = DAT_0027dbb4;
  uVar17 = puVar8[-0x3e];
  puVar18 = *(uint **)(uVar17 + 4);
  (**(code **)(DAT_0027dbb4 + 8))(&local_68);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_64 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0027dadc;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0027dadc:
  iVar11 = *(int *)(uVar17 + 8);
  if (iVar11 <= (int)uVar10) {
    uVar10 = iVar11 - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar10);
  *(undefined1 *)((int)puVar18 + uVar10) = 0;
  puVar6 = (undefined4 *)puVar8[-0x3b];
  uVar14 = DAT_0027db90[1];
  uVar15 = DAT_0027db90[2];
  uVar20 = DAT_0027db90[3];
  uVar21 = DAT_0027db90[4];
  uVar22 = DAT_0027db90[5];
  *puVar6 = *DAT_0027db90;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)puVar8[-0x3a];
  *puVar6 = uVar15;
  puVar6[1] = uVar20;
  puVar6 = (undefined4 *)puVar8[-0x39];
  *puVar6 = uVar21;
  puVar6[1] = uVar22;
  local_64 = (uint *)s_cState_TimerStop_0027dbb8;
  local_68 = iVar7;
  if (puVar8[-0x3f] < 2) {
    uVar10 = puVar8[-0x3e];
  }
  else {
    uVar10 = puVar8[-0x3e] + 0x24;
  }
  puVar18 = *(uint **)(uVar10 + 4);
  (**(code **)(iVar7 + 8))(&local_68);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_64 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0027dbd8;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0027dbd8:
  if (*(int *)(uVar10 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(uVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar17);
  puVar6 = DAT_0027db90;
  *(undefined1 *)((int)puVar18 + uVar17) = 0;
  uVar15 = puVar6[9];
  uVar22 = puVar6[4];
  uVar10 = puVar8[-0x3b];
  uVar14 = puVar6[5];
  uVar20 = puVar6[7];
  uVar21 = puVar6[8];
  *(undefined4 *)(uVar10 + 8) = puVar6[6];
  *(undefined4 *)(uVar10 + 0xc) = uVar20;
  uVar10 = puVar8[-0x3a];
  *(undefined4 *)(uVar10 + 8) = uVar21;
  *(undefined4 *)(uVar10 + 0xc) = uVar15;
  uVar10 = puVar8[-0x39];
  *(undefined4 *)(uVar10 + 8) = uVar22;
  *(undefined4 *)(uVar10 + 0xc) = uVar14;
  local_64 = (uint *)s_cState_Move_0027dff4;
  local_68 = iVar7;
  if (puVar8[-0x3f] < 3) {
    uVar10 = puVar8[-0x3e];
  }
  else {
    uVar10 = puVar8[-0x3e] + 0x48;
  }
  puVar18 = *(uint **)(uVar10 + 4);
  (**(code **)(iVar7 + 8))(&local_68);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_64 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0027dcb0;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0027dcb0:
  if (*(int *)(uVar10 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(uVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar17);
  puVar6 = DAT_0027db90;
  *(undefined1 *)((int)puVar18 + uVar17) = 0;
  uVar10 = puVar8[-0x3b];
  uVar14 = puVar6[5];
  uVar21 = puVar6[0xc];
  uVar15 = puVar6[4];
  uVar22 = puVar6[0xb];
  uVar20 = puVar6[0xd];
  *(undefined4 *)(uVar10 + 0x10) = puVar6[10];
  *(undefined4 *)(uVar10 + 0x14) = uVar22;
  uVar10 = puVar8[-0x3a];
  *(undefined4 *)(uVar10 + 0x10) = uVar21;
  *(undefined4 *)(uVar10 + 0x14) = uVar20;
  uVar10 = puVar8[-0x39];
  *(undefined4 *)(uVar10 + 0x10) = uVar15;
  *(undefined4 *)(uVar10 + 0x14) = uVar14;
  func_0027CFD8((int)puVar16);
  cVar2 = *(char *)(*DAT_0027e000 + 0x18);
  if (cVar2 == '\a' || cVar2 == '%') {
    puVar18 = (uint *)0x1;
  }
  puVar8[0x1c] = (uint)ALBW_AS_U32(fVar23);
  puVar8[0x1b] = (uint)ALBW_AS_U32(fVar23);
  if (cVar2 != '\a' && cVar2 != '%') {
    puVar18 = (uint *)0x0;
  }
  puVar12 = (undefined4 *)func_0010BAB4(100);
  uVar10 = 0;
  if (puVar12 != (undefined4 *)0x0) {
    uVar10 = func_004EE484(puVar12);
  }
  puVar8[0x18] = uVar10;
  puVar12 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar12 != (undefined4 *)0x0) {
    puVar12[1] = 0;
    uVar14 = puVar6[0x14];
    uVar15 = puVar6[0x15];
    *puVar12 = uVar13;
    puVar12[2] = uVar14;
    puVar12[3] = uVar15;
  }
  puVar8[0x1a] = (uint)puVar12;
  puVar12 = (undefined4 *)func_0054D964((int)puVar16,0);
  if (((*DAT_0027e004 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0027e004), iVar7 != 0)) {
    *DAT_0027e008 = DAT_0027e00c;
  }
  if ((puVar12 == (undefined4 *)0x0) ||
     (iVar7 = (**(code **)*puVar12)(puVar12,DAT_0027e008), iVar7 == 0)) {
    puVar12 = (undefined4 *)0x0;
  }
  puVar8[0x19] = (uint)puVar12;
  objStack_74[0] = CONCAT22((*(undefined2 *)((char *)&objStack_74[0] + 2)),0x1a0);
  *(undefined2 *)(puVar12 + 10) = 0x1a0;
  *(uint *)(puVar8[0x19] + 0x2c) = *(uint *)(puVar8[0x19] + 0x2c) | 0x8000;
  uVar10 = puVar8[0x1a];
  uVar13 = puVar6[0xe];
  uVar14 = puVar6[0xf];
  *(uint **)(uVar10 + 4) = puVar16;
  *(undefined4 *)(uVar10 + 8) = uVar13;
  *(undefined4 *)(uVar10 + 0xc) = uVar14;
  func_004356B4((int *)puVar8[0x19]);
  local_3c = puVar8[-0x91];
  objStack_78[0] = (uint)(short)puVar8[-0x12f];
  objStack_74[0] = puVar8[0x1a];
  objStack_74[1] = DAT_0027db9c;
  uVar10 = objStack_74[1];
  (*(undefined2 *)((char *)&objStack_74[1] + 0)) = (undefined2)DAT_0027db9c;
  uVar4 = (undefined2)objStack_74[1];
  objStack_74[1] = uVar10;
  func_0014EB8C(puVar8[0x18],puVar8[0x19],(undefined2 *)puVar8[-0x5c],&local_3c,
                (short)puVar8[-0x12f],objStack_74[0],uVar4);
  if (puVar18 != (uint *)0x0) {
    *(undefined2 *)(puVar8[0x18] + 0x30) = 2;
  }
  objStack_74[0] = 8;
  piVar5 = func_00435714(objStack_74);
  iVar7 = DAT_0027e010;
  puVar8[0x1d] = (uint)piVar5;
  piVar5[0x19] = (int)ALBW_AS_U32(fVar23);
  piVar5[0x1a] = iVar7;
  piVar5[0x1b] = iVar7;
  piVar5[0x1c] = iVar7;
  piVar5[0x1d] = (int)ALBW_AS_U32(fVar23);
  piVar5[0x1e] = iVar7;
  piVar5[0x1f] = iVar7;
  piVar5[0x20] = iVar7;
  piVar5[0x21] = (int)ALBW_AS_U32(fVar23);
  iVar7 = DAT_0027e014;
  piVar5[0x16] = (int)ALBW_AS_U32(fVar23);
  piVar5[0x17] = iVar7;
  piVar5[0x18] = (int)ALBW_AS_U32(fVar23);
  piVar5[1] = puVar8[-0x50];
  piVar5[2] = puVar8[-0x4f];
  piVar5[3] = puVar8[-0x4e];
  local_5c = 0xe3;
  *(undefined2 *)(piVar5 + 10) = 0xe3;
  piVar5[0xb] = piVar5[0xb] | 0x80;
  func_004356B4((int *)puVar8[0x1d]);
  puVar8[-0xc] = puVar8[0x1d];
  local_6c = puVar8[-0x91];
  func_004EDAD0((int)(puVar8 + -0x12),&local_6c);
  *(short *)(DAT_0027e018 + (int)puVar16) = (short)puVar8[-0x12f];
  func_004A7F00(*DAT_0027e01c,(int)(puVar8 + -0x12),0);
  uVar10 = puVar6[0x10];
  uVar17 = puVar6[0x11];
  puVar8[-0x16] = (uint)puVar16;
  puVar8[-0x15] = uVar10;
  puVar8[-0x14] = uVar17;
  fVar19 = (float)VectorSignedToFloat(puVar8[0x1f],(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(puVar8[-0x38] + 0x14c) = fVar19 + fVar23;
  piVar5 = (int *)func_00521028((int)puVar16);
  (**(code **)(*piVar5 + 8))(piVar5);
  func_003529A0(&uStack_60,piVar5[1],puVar8 + -0x7c);
  func_002C41BC((int *)(puVar8 + -0x7c),&uStack_60,0);
  uVar17 = 0;
  uVar10 = extraout_r1;
  if (0 < (int)*local_38) {
    do {
      puVar18 = puVar8;
      if (uVar17 < 0xc) {
        puVar18 = puVar8 + uVar17 * 2;
      }
      if (puVar8[-0x73] == 0) {
        *puVar18 = 0;
        puVar18[1] = 0;
      }
      else {
        uVar10 = *puVar18;
        if ((uVar10 != 0) && (*(uint *)(uVar10 + 0x1c) == puVar18[1])) {
          func_00110848(uVar10);
        }
        func_004A1B9C((int *)objStack_78,puVar8[-0x73],(uint *)s_ObjFire_0027e0b8);
        *puVar18 = objStack_78[0];
        puVar18[1] = objStack_74[0];
        uVar10 = objStack_74[0];
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)puVar8[0x1f]);
  }
  func_0027CDD4((int)puVar16,uVar10);
  return (int *)puVar16;
}

