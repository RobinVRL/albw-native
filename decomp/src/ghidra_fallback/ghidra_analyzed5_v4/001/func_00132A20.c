#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010B830(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4);
extern int func_0025EDD0(undefined4 *param_1);
extern int func_0026ED38(undefined4 *param_1);
extern int func_002FE7B4(int param_1,int param_2,uint param_3);
extern int func_002FEA9C(undefined4 *param_1);
extern int func_00388254(undefined4 *param_1);
extern int func_003CBB00(undefined1 *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CCFF4(int *param_1);
extern int func_004928E8(undefined4 *param_1);
extern int func_00494EC0(undefined4 *param_1);
extern int func_00504ED0(uint *param_1,uint param_2,uint param_3);
extern int func_00561EB4(char *param_1,int *param_2,int param_3);
extern int func_00562488(char *param_1,uint *param_2,int param_3);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_00132ff0;
extern undefined4 *DAT_00132ff4;
extern undefined4 DAT_00132ff8;
extern int DAT_00132ffc;
extern uint DAT_00133000;
extern int DAT_00133004;
extern undefined *DAT_00133008;
extern undefined4 *DAT_0013300c;
extern undefined4 DAT_00133010;
extern uint DAT_00133014;
extern undefined4 *DAT_00133018;
extern undefined4 *DAT_0013301c;
extern undefined4 *DAT_00133020;
extern int DAT_00133024;
extern undefined4 DAT_00133028;
extern undefined4 DAT_0013302c;
extern uint DAT_00133030;
extern undefined4 DAT_00133034;
extern undefined4 DAT_00133038;
extern int DAT_0013303c;
extern int DAT_00133040;
extern undefined4 DAT_00133044;
extern int DAT_00133048;
extern int *DAT_001333f8;
extern int DAT_001333fc;
extern int *DAT_00133400;
extern uint *DAT_00133404;
extern undefined4 *DAT_00133408;
extern undefined4 DAT_0013340c;

// USA 00132A20 <- EU 00132A20 (Ghidra, non-matching)
// GLOBAL DAT_00132ff0 undefined4
// GLOBAL DAT_00132ff4 undefined4 *
// GLOBAL DAT_00132ff8 undefined4
// GLOBAL DAT_00132ffc int
// GLOBAL DAT_00133000 uint
// GLOBAL DAT_00133004 int
// GLOBAL DAT_00133008 undefined *
// GLOBAL DAT_0013300c undefined4 *
// GLOBAL DAT_00133010 undefined4
// GLOBAL DAT_00133014 uint
// GLOBAL DAT_00133018 undefined4 *
// GLOBAL DAT_0013301c undefined4 *
// GLOBAL DAT_00133020 undefined4 *
// GLOBAL DAT_00133024 int
// GLOBAL DAT_00133028 undefined4
// GLOBAL DAT_0013302c undefined4
// GLOBAL DAT_00133030 uint
// GLOBAL DAT_00133034 undefined4
// GLOBAL DAT_00133038 undefined4
// GLOBAL DAT_0013303c int
// GLOBAL DAT_00133040 int
// GLOBAL DAT_00133044 undefined4
// GLOBAL DAT_00133048 int
// GLOBAL DAT_001333f8 int *
// GLOBAL DAT_001333fc int
// GLOBAL DAT_00133400 int *
// GLOBAL DAT_00133404 uint *
// GLOBAL DAT_00133408 undefined4 *
// GLOBAL DAT_0013340c undefined4

undefined4 * func_00132A20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  _Alignas(8) unsigned char albw_frame[0x4c0];
  #define auStack_4b8 ((uint *)(albw_frame + 0x8))
  #define local_b8 (*(uint * *)(albw_frame + 0x408))
  #define local_b4 (*(undefined1 *)(albw_frame + 0x40c))
  #define local_b3 (*(undefined1 *)(albw_frame + 0x40d))
  #define local_b2 (*(undefined1 *)(albw_frame + 0x40e))
  #define local_68 (*(undefined1 *)(albw_frame + 0x458))
  #define local_64 ((char *)(albw_frame + 0x45c))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x488))
  puVar1 = DAT_00132ff4;
  *param_1 = DAT_00132ff0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0xffff;
  uVar12 = *puVar1;
  param_1[0xf] = puVar1[1];
  param_1[0xc] = DAT_00132ff8;
  param_1[0xd] = param_1;
  param_1[0xe] = uVar12;
  param_1[0x13] = 0;
  param_1[0x15] = param_1 + 0x14;
  param_1[0x16] = 0;
  param_1[0x14] = param_1 + 0x14;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar1 = param_1 + 0x1c;
  param_1[0x1b] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar15 = 0x1ff;
    iVar13 = 0;
    param_1[0x1a] = puVar1;
    do {
      iVar15 = iVar15 + -1;
      puVar1[iVar13] = puVar1 + iVar13 + 2;
      iVar13 = iVar13 + 2;
    } while (iVar15 != 0);
    param_1[0x41a] = 0;
    param_1[0x1b] = puVar1;
    func_0010B3EC(param_1 + 0x17,0x200,(int)(param_1 + 0x41c));
  }
  param_1[0x61c] = 0;
  param_1[0x61d] = 0;
  param_1[0x61e] = 0;
  func_0010B3EC(param_1 + 0x61c,0x200,(int)(param_1 + 0x61f));
  param_1[0x81f] = 0;
  param_1[0x820] = 0;
  param_1[0x821] = 0;
  func_0010B3EC(param_1 + 0x81f,0x200,(int)(param_1 + 0x822));
  *(undefined4 *)(DAT_00132ffc + (int)param_1) = 0;
  puVar1 = param_1 + 0xa23;
  param_1[0xa24] = puVar1;
  param_1[0xa25] = 0;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0xa26;
  param_1[0xa27] = puVar1;
  param_1[0xa28] = 0;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0xa29;
  param_1[0xa2a] = puVar1;
  param_1[0xa2b] = 0;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0xa2c;
  param_1[0xa2d] = puVar1;
  param_1[0xa2e] = 0;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0xa2f;
  param_1[0xa30] = puVar1;
  param_1[0xa31] = 0;
  *puVar1 = puVar1;
  uVar14 = DAT_00133000;
  iVar13 = DAT_00133000 + 4;
  *(undefined4 *)(DAT_00133000 + (int)param_1) = 0;
  *(undefined4 *)(iVar13 + (int)param_1) = 0;
  *(undefined4 *)((uVar14 | (int)uVar14 >> 8) + (int)param_1) = 0;
  puVar1 = (undefined4 *)func_0010BAB4(0x90);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_0025EDD0(puVar1);
  }
  *(int **)(DAT_00133004 + (int)param_1) = piVar2;
  iVar13 = func_00100118((int)(param_1 + 0xa42),DAT_00133008,0x10,6);
  *(undefined1 *)(iVar13 + 0x60) = 0;
  *(undefined1 *)(iVar13 + 0x61) = 0;
  iVar13 = func_00100118(iVar13 + 0x7c,DAT_00133008,0x10,6);
  puVar1 = DAT_0013300c;
  *(undefined1 *)(iVar13 + 0x60) = 0;
  *(undefined1 *)(iVar13 + 0x61) = 0;
  uVar14 = DAT_00133014;
  uVar12 = DAT_00133010;
  uVar16 = puVar1[1];
  uVar19 = puVar1[2];
  *(undefined4 *)(iVar13 + 100) = *puVar1;
  *(undefined4 *)(iVar13 + 0x68) = uVar16;
  *(undefined4 *)(iVar13 + 0x6c) = uVar19;
  *(undefined4 *)(iVar13 + 0x70) = uVar12;
  *(undefined4 *)(uVar14 + iVar13 + -0x2984) = 0;
  *(undefined4 *)((uVar14 | (int)uVar14 >> 9) + iVar13 + -0x2984) = 0;
  iVar13 = func_00494EC0((undefined4 *)(iVar13 + 0x7c));
  iVar13 = func_004928E8((undefined4 *)(iVar13 + 0xac));
  *(undefined1 *)(iVar13 + 0xac) = 0;
  *(undefined1 *)(iVar13 + 0xad) = 2;
  *(undefined1 *)(iVar13 + 0xae) = 0xff;
  *(undefined1 *)(iVar13 + 0xaf) = 0xff;
  *(undefined4 *)(iVar13 + 0xb0) = 0;
  *(undefined1 *)(iVar13 + 0xb4) = 0;
  puVar1 = DAT_00133018;
  *(undefined1 *)(iVar13 + 0xb5) = 2;
  *(undefined1 *)(iVar13 + 0xb6) = 0xff;
  *(undefined1 *)(iVar13 + 0xb7) = 0xff;
  *(undefined4 *)(iVar13 + 0xb8) = 0;
  uVar12 = puVar1[1];
  uVar16 = puVar1[2];
  *(undefined4 *)(iVar13 + 0xbc) = *puVar1;
  *(undefined4 *)(iVar13 + 0xc0) = uVar12;
  *(undefined4 *)(iVar13 + 0xc4) = uVar16;
  uVar12 = DAT_0013301c[1];
  uVar16 = DAT_0013301c[2];
  *(undefined4 *)(iVar13 + 200) = *DAT_0013301c;
  *(undefined4 *)(iVar13 + 0xcc) = uVar12;
  *(undefined4 *)(iVar13 + 0xd0) = uVar16;
  *(undefined4 *)(iVar13 + 0xd4) = 0;
  func_001151D8((undefined4 *)(iVar13 + 0xd8),DAT_00133020);
  *(undefined4 *)(DAT_00133024 + iVar13 + -0x2aac) = 0;
  puVar1 = func_0010B830((undefined4 *)(iVar13 + 0x100));
  puVar1 = func_0010B830(puVar1 + 7);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar17 = puVar1 + -0xaf2;
  puVar1[9] = 0;
  local_38 = puVar1 + 10;
  *local_38 = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  local_b8 = puVar1 + 0xf;
  puVar1[0xe] = 0;
  *local_b8 = 0;
  puVar1[0x10] = 0;
  uVar14 = DAT_00133030;
  uVar12 = DAT_0013302c;
  uVar7 = DAT_00133030 | (int)DAT_00133030 >> 0xd;
  puVar1[0x12] = DAT_00133028;
  puVar1[0x13] = uVar12;
  *(undefined1 *)(uVar14 + (int)puVar17) = 0;
  *(undefined1 *)(uVar7 + (int)puVar17) = 0;
  *(undefined1 *)((uVar14 | (int)uVar14 >> 0xc) + (int)puVar17) = 1;
  *(undefined1 *)((uVar14 | (int)uVar14 >> 10) + (int)puVar17) = 1;
  *(undefined1 *)(uVar14 + 4 + (int)puVar17) = 0;
  uVar7 = uVar14 | (int)uVar14 >> 9;
  *(undefined1 *)((uVar14 | (int)uVar14 >> 0xb) + (int)puVar17) = 0;
  *(undefined1 *)(uVar7 + (int)puVar17) = 0;
  uVar7 = uVar7 | (int)uVar7 >> 10;
  *(undefined1 *)(uVar7 + (int)puVar17) = 0;
  *(undefined4 *)(uVar7 + 9 + (int)puVar17) = 0;
  *(undefined4 *)(uVar7 + 0xd + (int)puVar17) = 0;
  *(undefined4 *)(uVar7 + 0x11 + (int)puVar17) = 0;
  *(undefined1 *)((uVar7 - 0xbd) + (int)puVar17) = 0x56;
  *(undefined1 *)((uVar7 - 0xbc) + (int)puVar17) = 0x59;
  *(undefined1 *)((uVar7 - 0xc5) + (int)puVar17) = 0x5a;
  uVar14 = 0;
  *(undefined1 *)((uVar7 - 0xc4) + (int)puVar17) = 0x5c;
  do {
    puVar3 = (undefined4 *)func_0010BAB4(DAT_00133034);
    iVar13 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      iVar13 = func_00388254(puVar3);
    }
    piVar2 = puVar1 + -0xbe;
    if (uVar14 < 3) {
      piVar2 = puVar1 + -0xbe + uVar14;
    }
    *piVar2 = iVar13;
    puVar4 = (undefined4 *)func_0010BAB4(DAT_00133038);
    puVar3 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = func_0026ED38(puVar4);
    }
    puVar4 = puVar1 + -0xbb;
    if (uVar14 < 3) {
      puVar4 = puVar1 + -0xbb + uVar14;
    }
    uVar14 = uVar14 + 1;
    *puVar4 = puVar3;
    iVar13 = DAT_0013303c;
  } while ((int)uVar14 < 3);
  uVar14 = 0;
  do {
    puVar4 = (undefined4 *)func_0010BAB4(0x48);
    puVar3 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = func_002FEA9C(puVar4);
    }
    puVar4 = puVar1 + -0xae2;
    if (uVar14 < 3) {
      puVar4 = puVar4 + uVar14;
    }
    *puVar4 = puVar3;
    piVar2 = puVar1 + -0xae2;
    piVar8 = (int *)(iVar13 + uVar14 * 8);
    if (uVar14 < 3) {
      piVar2 = piVar2 + uVar14;
    }
    func_002FE7B4(*piVar2,*piVar8,piVar8[1]);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 3);
  piVar2 = func_003CCFF4((int *)auStack_4b8);
  uVar14 = ((int)piVar2 - (int)auStack_4b8 & 0xfffffffcU) + 8;
  if (((uVar14 & 0xf) != 0) && (uVar14 = 4 - (uVar14 * 0x10000000 >> 0x1e), 0 < (int)uVar14)) {
    piVar8 = piVar2 + -1;
    if ((uVar14 & 1) != 0) {
      *piVar2 = 0;
      piVar8 = piVar2;
    }
    for (iVar13 = (int)uVar14 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      piVar8[1] = 0;
      piVar8 = piVar8 + 2;
      *piVar8 = 0;
    }
    piVar2 = piVar2 + uVar14;
  }
  puVar3 = func_003CC030(piVar2,1);
  *puVar3 = 0;
  iVar15 = DAT_00133040;
  iVar13 = (int)puVar3 - (int)auStack_4b8 >> 2;
  puVar3[3] = DAT_00133040 + 1;
  puVar3[1] = iVar15;
  puVar3[2] = 0;
  func_00110490(puVar3 + 4,0x98);
  iVar15 = DAT_00133048;
  piVar2 = puVar3 + 0x2a;
  puVar3[5] = DAT_00133044;
  iVar9 = 0;
  iVar11 = 0xc;
  do {
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *piVar2 = iVar9;
    piVar2[1] = iVar15;
    iVar11 = iVar11 + -1;
    piVar2 = piVar2 + 6;
    iVar9 = iVar9 + 1;
  } while (iVar11 != 0);
  puVar4 = puVar3 + 0x72;
  uVar14 = ((int)puVar4 - (int)puVar3 & 0xfffffffcU) + 8;
  if (((uVar14 & 0xf) != 0) && (uVar14 = 4 - (uVar14 * 0x10000000 >> 0x1e), 0 < (int)uVar14)) {
    puVar5 = puVar3 + 0x71;
    if ((uVar14 & 1) != 0) {
      *puVar4 = 0;
      puVar5 = puVar4;
    }
    for (iVar15 = (int)uVar14 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      *puVar5 = 0;
    }
    puVar4 = puVar4 + uVar14;
  }
  puVar4 = func_003CC030(puVar4,1);
  uVar14 = (int)puVar4 - (int)puVar3 >> 2;
  uVar18 = iVar13 * 4 + uVar14 * 4;
  uVar7 = func_001B79FC(*DAT_001333f8,uVar18,0x10,2);
  if (iVar13 * 4 == 0) {
    uVar20 = 0;
    uVar10 = uVar7;
  }
  else {
    uVar20 = uVar7 + 0xf & 0xfffffff0;
    uVar10 = uVar20 + iVar13 * 4;
  }
  puVar1[0xe] = iVar13;
  puVar1[0xd] = uVar20;
  if ((uVar14 & 0x3fffffff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar10 + 0xf & 0xfffffff0;
  }
  *local_b8 = uVar10;
  local_b8[1] = uVar14;
  func_00504ED0(auStack_4b8,uVar7,uVar18);
  func_003CBB00((undefined1 *)&local_b8);
  local_b8 = (uint *)0xc000001;
  local_b3 = 0xd;
  local_b4 = 0;
  local_b2 = 0;
  local_64[0] = '\x01';
  local_64[1] = 0;
  local_64[2] = 2;
  puVar6 = (uint *)func_00561EB4((char *)&local_b8,(int *)auStack_4b8,0);
  puVar3 = (undefined4 *)func_00562488(local_64,puVar6,1);
  if ((((int)puVar3 - (int)auStack_4b8 & 0xcU) != 0) &&
     (uVar14 = 4 - ((((int)puVar3 - (int)auStack_4b8 & 0xfffffffcU) << 0x1c) >> 0x1e),
     0 < (int)uVar14)) {
    puVar4 = puVar3 + -1;
    if ((uVar14 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (iVar13 = (int)uVar14 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
    puVar3 = puVar3 + uVar14;
  }
  uVar14 = ((int)puVar3 - (int)auStack_4b8 & 0xfffffffcU) + 8;
  if (((uVar14 & 0xf) != 0) && (uVar14 = 4 - (uVar14 * 0x10000000 >> 0x1e), 0 < (int)uVar14)) {
    puVar4 = puVar3 + -1;
    if ((uVar14 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (iVar13 = (int)uVar14 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
    puVar3 = puVar3 + uVar14;
  }
  puVar3 = func_003CC030(puVar3,1);
  iVar13 = (int)puVar3 - (int)auStack_4b8 >> 2;
  puVar6 = (uint *)func_0058FAAC(iVar13 << 2,0x10);
  func_0010E3C4(puVar6,auStack_4b8,iVar13 << 2);
  iVar15 = DAT_001333fc;
  puVar1[9] = iVar13;
  puVar1[8] = puVar6;
  *(uint **)(iVar15 + (int)puVar17) = puVar6 + 6;
  func_003CBB00((undefined1 *)&local_b8);
  local_64[0] = '\x01';
  local_64[1] = 1;
  local_64[2] = 4;
  local_68 = 0;
  puVar3 = (undefined4 *)func_00562488(local_64,auStack_4b8,1);
  if ((((int)puVar3 - (int)auStack_4b8 & 0xcU) != 0) &&
     (uVar14 = 4 - ((((int)puVar3 - (int)auStack_4b8 & 0xfffffffcU) << 0x1c) >> 0x1e),
     0 < (int)uVar14)) {
    puVar4 = puVar3 + -1;
    if ((uVar14 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (iVar13 = (int)uVar14 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
    puVar3 = puVar3 + uVar14;
  }
  uVar14 = ((int)puVar3 - (int)auStack_4b8 & 0xfffffffcU) + 8;
  if (((uVar14 & 0xf) != 0) && (uVar14 = 4 - (uVar14 * 0x10000000 >> 0x1e), 0 < (int)uVar14)) {
    puVar4 = puVar3 + -1;
    if ((uVar14 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (iVar13 = (int)uVar14 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
    puVar3 = puVar3 + uVar14;
  }
  puVar3 = func_003CC030(puVar3,1);
  iVar13 = (int)puVar3 - (int)auStack_4b8 >> 2;
  puVar6 = (uint *)func_0058FAAC(iVar13 << 2,0x10);
  func_0010E3C4(puVar6,auStack_4b8,iVar13 << 2);
  local_38[1] = iVar13;
  *local_38 = puVar6;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  (**(code **)(*(int *)puVar1[-0xb7] + 0x14))((int *)puVar1[-0xb7]);
  *(undefined1 *)(puVar1[-0xb7] + 0x8c) = 0;
  puVar3 = *(undefined4 **)(*DAT_00133400 + 0x1c);
  if (((*DAT_00133404 & 1) == 0) && (iVar13 = func_00100174((int *)DAT_00133404), iVar13 != 0)) {
    *DAT_00133408 = DAT_0013340c;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar13 = (**(code **)*puVar3)(puVar3,DAT_00133408), iVar13 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  puVar3[99] = puVar1 + -0xae6;
  return puVar17;
}

