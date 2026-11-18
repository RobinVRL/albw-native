#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C713C(int param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_006632F0(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c7b48;
extern undefined4 DAT_002c7b4c;
extern undefined4 DAT_002c7b50;
extern undefined4 *DAT_002c7b54;
extern undefined4 DAT_002c7b58;
extern undefined4 DAT_002c7b5c;
extern undefined4 DAT_002c7b60;
extern undefined *DAT_002c7b64;
extern undefined4 *DAT_002c7b68;
extern float DAT_002c7b6c;
extern undefined4 DAT_002c7b70;
extern undefined4 DAT_002c7b74;
extern int *DAT_002c7b78;
extern undefined4 DAT_002c800c;
extern undefined *DAT_002c8010;
extern int DAT_002c8014;
extern int DAT_002c8024;
extern undefined DAT_002c8028;
extern char s__cState_Move_002c802b[];
extern char s_cState_Ice_002c8038[];
extern char s_cState_Vibration_002c8044[];
extern char s_cState_Wait_002c8018[];
extern char s_cf_002c802b[];
extern undefined4 _DAT_002c8028;

// USA 002C7794 <- EU 002C7770 (Ghidra, non-matching)
// GLOBAL DAT_002c7b48 int
// GLOBAL DAT_002c7b4c undefined4
// GLOBAL DAT_002c7b50 undefined4
// GLOBAL DAT_002c7b54 undefined4 *
// GLOBAL DAT_002c7b58 undefined4
// GLOBAL DAT_002c7b5c undefined4
// GLOBAL DAT_002c7b60 undefined4
// GLOBAL DAT_002c7b64 undefined *
// GLOBAL DAT_002c7b68 undefined4 *
// GLOBAL DAT_002c7b6c float
// GLOBAL DAT_002c7b70 undefined4
// GLOBAL DAT_002c7b74 undefined4
// GLOBAL DAT_002c7b78 int *
// GLOBAL DAT_002c800c undefined4
// GLOBAL DAT_002c8010 undefined *
// GLOBAL DAT_002c8014 int
// GLOBAL DAT_002c8024 int
// GLOBAL DAT_002c8028 undefined
// GLOBAL s_cf_002c802b string
// GLOBAL s_cState_Ice_002c8038 string
// GLOBAL s_cState_Vibration_002c8044 string
// GLOBAL s_cState_Wait_002c8018 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int func_002C7794(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int *piVar19;
  int *piVar20;
  undefined4 uVar21;
  uint in_fpscr;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_002c7b48;
  *piVar3 = DAT_002c7b48;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar13 = DAT_002c7b50;
  uVar12 = DAT_002c7b4c;
  puVar4[8] = 0;
  puVar4[9] = uVar12;
  puVar4[10] = uVar13;
  puVar4[0xb] = 0;
  puVar17 = puVar4 + -0x103;
  iVar5 = func_0054D964((int)puVar17,0);
  puVar4[0xc] = iVar5;
  iVar5 = func_0054D964((int)puVar17,0);
  puVar4[0xd] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar6 = DAT_002c7b54;
  puVar4[0xe] = puVar7;
  uVar12 = DAT_002c7b58;
  uVar8 = *puVar6;
  uVar11 = puVar6[1];
  puVar4[0x10] = puVar17;
  uVar13 = DAT_002c7b5c;
  puVar4[0x11] = uVar8;
  puVar4[0x12] = uVar11;
  puVar4[0xf] = uVar12;
  puVar4[0x13] = 0;
  puVar4[0x14] = uVar13;
  *(undefined2 *)(puVar4 + 0x15) = 0;
  *(undefined2 *)((int)puVar4 + 0x56) = 0;
  *(undefined2 *)(puVar4 + 0x16) = 0;
  *(undefined2 *)((int)puVar4 + 0x5a) = 0;
  *(undefined1 *)(puVar4 + 0x17) = 0;
  *(undefined1 *)((int)puVar4 + 0x5d) = 0;
  *(undefined1 *)((int)puVar4 + 0x5e) = 0;
  *(undefined1 *)((int)puVar4 + 0x5f) = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  iVar5 = func_004EE484(puVar4 + 0x1d);
  iVar15 = iVar5 + -0x480;
  *(undefined4 *)(iVar5 + 100) = uVar12;
  *(int *)(iVar5 + 0x68) = iVar15;
  *(undefined4 *)(iVar5 + 0x74) = 0;
  uVar12 = puVar6[5];
  *(undefined4 *)(iVar5 + 0x6c) = puVar6[4];
  *(undefined4 *)(iVar5 + 0x70) = uVar12;
  uVar12 = puVar6[6];
  uVar8 = puVar6[7];
  *(int *)(iVar5 + -0x34) = iVar15;
  *(undefined4 *)(iVar5 + -0x30) = uVar12;
  *(undefined4 *)(iVar5 + -0x2c) = uVar8;
  *(int *)(iVar5 + -0x94) = iVar5 + -0x38;
  uVar14 = param_2[10];
  *(int *)(iVar5 + -0x28) = (int)(short)uVar14;
  if ((short)uVar14 < 1) {
    *(undefined4 *)(iVar5 + -0x28) = 5;
  }
  if (*(short *)((int)param_2 + 0x2a) == 1) {
    *(undefined4 *)(iVar5 + -0x24) = _DAT_002c8028;
  }
  else if (*(short *)((int)param_2 + 0x2a) == 2) {
    *(undefined4 *)(iVar5 + -0x24) = uVar13;
  }
  else {
    *(undefined4 *)(iVar5 + -0x24) = DAT_002c7b60;
  }
  if ((short)param_2[0xb] == 1) {
    *(undefined1 *)(iVar5 + -0x15) = 1;
  }
  *(undefined2 *)(iVar5 + -0x1a) = *(undefined2 *)((int)param_2 + 0x2e);
  piVar3 = (int *)(iVar5 + -0x14);
  func_0010B380(piVar3,*(int *)(iVar5 + -0x28),(int *)0x0,4);
  iVar16 = *(int *)(iVar5 + -0x28);
  if (0 < iVar16) {
    iVar9 = func_0010CEE0(iVar16 * 0x18,(int *)0x0,4);
    iVar10 = 0;
    if (iVar9 != 0) {
      iVar10 = func_00100118(iVar9,DAT_002c7b64,0x18,iVar16);
    }
    if (iVar10 != 0) {
      *(int *)(iVar5 + -4) = iVar10;
      *(int *)(iVar5 + -8) = iVar16;
    }
  }
  iVar10 = 0;
  func_0036D0C8((int *)(iVar5 + 0x74),0);
  iVar16 = *(int *)(iVar5 + 0x74);
  if (iVar16 == 0) {
    iVar16 = 1;
  }
  else {
    iVar16 = func_0010983C(*DAT_002c7b68,iVar16);
  }
  do {
    if (*(int *)(iVar5 + -0x28) <= iVar10) break;
    uVar14 = 0;
    if (iVar10 == 0) {
      uVar14 = 2;
    }
    else if (*(int *)(iVar5 + -0x28) + -1 == iVar10) {
      uVar14 = 1;
    }
    uVar12 = func_0014E428(iVar15,1,0,uVar14,1,0,0);
    if (*piVar3 < *(int *)(iVar5 + -0x10)) {
      *(undefined4 *)(*(int *)(iVar5 + -0xc) + *piVar3 * 4) = uVar12;
      *piVar3 = *piVar3 + 1;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 10);
  if (iVar16 != 1) {
    func_0010983C(*DAT_002c7b68,iVar16);
  }
  iVar16 = *(int *)(iVar5 + -0x28);
  if (iVar10 < iVar16) {
    do {
      uVar14 = 0;
      if (iVar10 == 0) {
        uVar14 = 2;
      }
      else if (iVar16 + -1 == iVar10) {
        uVar14 = 1;
      }
      uVar12 = func_0014E428(iVar15,1,0,uVar14,1,0,0);
      if (*piVar3 < *(int *)(iVar5 + -0x10)) {
        *(undefined4 *)(*(int *)(iVar5 + -0xc) + *piVar3 * 4) = uVar12;
        *piVar3 = *piVar3 + 1;
      }
      iVar16 = *(int *)(iVar5 + -0x28);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar16);
  }
  func_00115154((float *)(iVar5 + -0x4c),(float *)(iVar5 + -0x50),*(uint *)(iVar5 + -0x98));
  uVar13 = DAT_002c7b74;
  uVar12 = DAT_002c7b70;
  piVar3 = (int *)(iVar5 + -0x44);
  fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + -0x28),(byte)(in_fpscr >> 0x15) & 3);
  piVar20 = (int *)(iVar5 + -0x40);
  piVar19 = (int *)(iVar5 + -0x3c);
  *(float *)(*(int *)(iVar5 + -0x44) + 0x58) = fVar22 * DAT_002c7b6c;
  *(undefined4 *)(*(int *)(iVar5 + -0x44) + 0x60) = uVar12;
  *(undefined4 *)(*(int *)(iVar5 + -0x40) + 0x58) = *(undefined4 *)(*(int *)(iVar5 + -0x44) + 0x58);
  *(undefined4 *)(*(int *)(iVar5 + -0x40) + 0x60) = uVar13;
  *(int *)(*(int *)(iVar5 + -0x3c) + 0x18) = *piVar3;
  func_004ED9C8(*(int *)(iVar5 + -0x3c));
  local_3c = *(uint *)(iVar5 + -0x1b4);
  func_004EDAD0(*piVar19,&local_3c);
  *(undefined2 *)(*piVar19 + 0x2c) = *(undefined2 *)(iVar5 + -0x42c);
  func_004A7F00(*DAT_002c7b78,*piVar19,2);
  *(undefined1 *)(*piVar19 + 0x44) = *(undefined1 *)(iVar5 + -0x15);
  func_002C713C(iVar15);
  local_3c = *(uint *)(iVar5 + -0x1b4);
  func_0014EB8C(iVar5,*piVar20,*(undefined2 **)(iVar5 + -0xe0),&local_3c,
                *(undefined2 *)(iVar5 + -0x42c),0,(short)DAT_002c800c);
  uVar14 = *(uint *)(*piVar3 + 0x2c);
  *(uint *)(*piVar3 + 0x2c) = uVar14 | 8;
  puVar17 = (undefined4 *)(iVar5 + -0x74);
  *(uint *)(*piVar3 + 0x2c) = uVar14 | 0x100008;
  uVar14 = *(uint *)(*piVar20 + 0x2c);
  *(uint *)(*piVar20 + 0x2c) = uVar14 | 8;
  *(uint *)(*piVar20 + 0x2c) = uVar14 | 0x100008;
  *(undefined1 *)(iVar5 + -0x6e) = 4;
  *(int *)(iVar5 + -0x60) = iVar15;
  iVar16 = func_0010BA78(0x40);
  *(int *)(iVar5 + -0x5c) = iVar16;
  puVar7 = DAT_002c7b54;
  *(uint *)(iVar5 + -0x58) = iVar16 + (uint)*(byte *)(iVar5 + -0x6e) * 8;
  iVar10 = 4;
  puVar4 = (undefined4 *)(iVar16 + -8);
  do {
    uVar12 = puVar7[0x1b];
    iVar10 = iVar10 + -1;
    puVar4[2] = puVar7[0x1a];
    puVar4[3] = uVar12;
    uVar12 = puVar7[0x1b];
    puVar4[4] = puVar7[0x1a];
    puVar4[5] = uVar12;
    puVar4 = puVar4 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar5 + -0x6e);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  *(undefined4 **)(iVar5 + -0x54) = puVar4;
  if (uVar14 != 0) {
    puVar6 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar7[0xd];
      *puVar4 = puVar7[0xc];
      puVar4[1] = uVar12;
      puVar6 = puVar4;
    }
    for (iVar16 = (int)uVar14 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
      uVar12 = puVar7[0xd];
      puVar6[2] = puVar7[0xc];
      puVar6[3] = uVar12;
      uVar12 = puVar7[0xd];
      puVar6[4] = puVar7[0xc];
      puVar6[5] = uVar12;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar16 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar16 = func_00100118((int)(puVar7 + 2),DAT_002c8010,0x24,4);
  }
  if (iVar16 != 0) {
    *(undefined4 *)(iVar5 + -0x6c) = 4;
    *(int *)(iVar5 + -0x68) = iVar16;
  }
  iVar16 = DAT_002c8014;
  *(undefined4 **)(iVar5 + -300) = puVar17;
  *(undefined2 *)(iVar16 + iVar15) = 4;
  iVar16 = DAT_002c8024;
  local_34 = (uint *)s_cState_Wait_002c8018;
  local_38 = DAT_002c8024;
  iVar10 = *(int *)(iVar5 + -0x68);
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(DAT_002c8024 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002c7d9c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002c7d9c:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar14) {
    uVar14 = iVar10 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  puVar7 = *(undefined4 **)(iVar5 + -0x5c);
  uVar8 = DAT_002c7b54[0xc];
  uVar13 = DAT_002c7b54[10];
  uVar11 = DAT_002c7b54[0xb];
  uVar21 = DAT_002c7b54[8];
  uVar12 = DAT_002c7b54[0xd];
  puVar7[1] = DAT_002c7b54[9];
  *puVar7 = uVar21;
  puVar7 = *(undefined4 **)(iVar5 + -0x58);
  *puVar7 = uVar13;
  puVar7[1] = uVar11;
  puVar7 = *(undefined4 **)(iVar5 + -0x54);
  puVar7[1] = uVar12;
  *puVar7 = uVar8;
  local_34 = (uint *)(s__cState_Move_002c802b + 1);
  local_38 = iVar16;
  if (*(uint *)(iVar5 + -0x6c) < 2) {
    iVar10 = *(int *)(iVar5 + -0x68);
  }
  else {
    iVar10 = *(int *)(iVar5 + -0x68) + 0x24;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002c7e6c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002c7e6c:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar14);
  puVar7 = DAT_002c7b54;
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  iVar10 = *(int *)(iVar5 + -0x5c);
  uVar8 = puVar7[0x10];
  uVar13 = puVar7[0xc];
  uVar21 = puVar7[0x11];
  uVar12 = puVar7[0xd];
  uVar11 = puVar7[0xf];
  *(undefined4 *)(iVar10 + 8) = puVar7[0xe];
  *(undefined4 *)(iVar10 + 0xc) = uVar11;
  iVar10 = *(int *)(iVar5 + -0x58);
  *(undefined4 *)(iVar10 + 8) = uVar8;
  *(undefined4 *)(iVar10 + 0xc) = uVar21;
  iVar10 = *(int *)(iVar5 + -0x54);
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar12;
  local_34 = (uint *)s_cState_Ice_002c8038;
  local_38 = iVar16;
  if (*(uint *)(iVar5 + -0x6c) < 3) {
    iVar10 = *(int *)(iVar5 + -0x68);
  }
  else {
    iVar10 = *(int *)(iVar5 + -0x68) + 0x48;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002c7f44;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002c7f44:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  puVar7 = DAT_002c7b54;
  iVar10 = *(int *)(iVar5 + -0x5c);
  uVar13 = DAT_002c7b54[0x13];
  uVar8 = DAT_002c7b54[0x14];
  uVar21 = DAT_002c7b54[0x15];
  uVar12 = DAT_002c7b54[0xc];
  uVar11 = DAT_002c7b54[0xd];
  *(undefined4 *)(iVar10 + 0x10) = DAT_002c7b54[0x12];
  *(undefined4 *)(iVar10 + 0x14) = uVar13;
  iVar10 = *(int *)(iVar5 + -0x58);
  *(undefined4 *)(iVar10 + 0x10) = uVar8;
  *(undefined4 *)(iVar10 + 0x14) = uVar21;
  iVar10 = *(int *)(iVar5 + -0x54);
  *(undefined4 *)(iVar10 + 0x10) = uVar12;
  *(undefined4 *)(iVar10 + 0x14) = uVar11;
  local_34 = (uint *)s_cState_Vibration_002c8044;
  local_38 = iVar16;
  uVar14 = *(uint *)(iVar5 + -0x6c);
  if (uVar14 < 4) {
    iVar10 = *(int *)(iVar5 + -0x68);
    uVar2 = uVar14;
  }
  else {
    iVar10 = iVar16;
    uVar2 = *(uint *)(iVar5 + -0x68);
  }
  if (3 < uVar14) {
    iVar10 = uVar2 + 0x6c;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar16 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002c8064;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002c8064:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar14);
  *(undefined1 *)((int)puVar18 + uVar14) = 0;
  iVar16 = *(int *)(iVar5 + -0x5c);
  uVar11 = puVar7[0x17];
  uVar12 = puVar7[0xd];
  uVar21 = puVar7[0xc];
  uVar13 = puVar7[0x18];
  uVar8 = puVar7[0x19];
  *(undefined4 *)(iVar16 + 0x18) = puVar7[0x16];
  *(undefined4 *)(iVar16 + 0x1c) = uVar11;
  iVar16 = *(int *)(iVar5 + -0x58);
  *(undefined4 *)(iVar16 + 0x18) = uVar13;
  *(undefined4 *)(iVar16 + 0x1c) = uVar8;
  iVar5 = *(int *)(iVar5 + -0x54);
  *(undefined4 *)(iVar5 + 0x18) = uVar21;
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  if (*(short *)((int)param_2 + 0x32) == 0) {
    func_006632F0(puVar17,1);
  }
  else {
    func_006632F0(puVar17,0);
  }
  return iVar15;
}

