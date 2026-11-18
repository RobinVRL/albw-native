#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0019B04C(uint param_1);
extern int func_001E45E0(undefined1 *param_1);
extern int func_002B7634(int param_1);
extern int func_002D3B28(int param_1,int param_2);
extern int func_002D40FC(undefined4 *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_003844D4(int *param_1,int param_2);
extern int func_00396FE8(int *param_1,int param_2);
extern int func_003A2ABC(byte *param_1);
extern int func_003A2F8C(int param_1,undefined1 param_2);
extern void func_003A2FB0(int param_1,undefined1 param_2);
extern int func_003A37D4(undefined1 *param_1,undefined4 param_2);
extern int func_003ABA84(int *param_1);
extern int func_003AC354(undefined4 *param_1,undefined4 param_2);
extern int func_004C6A64(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F871C(int param_1,undefined4 param_2);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FB024(int param_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00521380(int param_1);
extern int func_0054D8B0(int param_1,undefined4 param_2,uint param_3);
extern uint *DAT_002bafbc;
extern int DAT_002bafc0;
extern int *DAT_002bafc4;
extern undefined4 DAT_002bafc8;
extern int DAT_002bafcc;
extern undefined4 DAT_002bafd0;
extern undefined4 DAT_002bafd4;
extern undefined4 DAT_002bafd8;
extern uint DAT_002bb2cc;
extern uint *DAT_002bb2d0;
extern undefined4 *DAT_002bb2d4;
extern int *DAT_002bb2d8;
extern undefined *DAT_002bb2dc;

// USA 002BABF4 <- EU 002BABD0 (Ghidra, non-matching)
// GLOBAL DAT_002bafbc uint *
// GLOBAL DAT_002bafc0 int
// GLOBAL DAT_002bafc4 int *
// GLOBAL DAT_002bafc8 undefined4
// GLOBAL DAT_002bafcc int
// GLOBAL DAT_002bafd0 undefined4
// GLOBAL DAT_002bafd4 undefined4
// GLOBAL DAT_002bafd8 undefined4
// GLOBAL DAT_002bb2cc uint
// GLOBAL DAT_002bb2d0 uint *
// GLOBAL DAT_002bb2d4 undefined4 *
// GLOBAL DAT_002bb2d8 int *
// GLOBAL DAT_002bb2dc undefined *

byte * func_002BABF4(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *pfVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  
  piVar1 = func_004FD464(param_1,param_2,DAT_002bafbc);
  iVar8 = DAT_002bafc0 + 0x84;
  *piVar1 = DAT_002bafc0;
  piVar3 = DAT_002bafc4;
  piVar1[200] = iVar8;
  piVar1[0x22f] = *(int *)(*piVar3 + 0x51c);
  iVar2 = func_003844D4(piVar1 + 0x230,(int)piVar1);
  *(undefined1 *)(iVar2 + 0x74) = 0;
  *(undefined1 *)(iVar2 + 0x75) = 0;
  *(undefined1 *)(iVar2 + 0x76) = 1;
  *(undefined1 *)(iVar2 + 0x77) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  uVar10 = DAT_002bafc8;
  *(undefined4 *)(iVar2 + 0x80) = DAT_002bafc8;
  *(undefined4 *)(iVar2 + 0x84) = uVar10;
  *(undefined4 *)(iVar2 + 0x88) = uVar10;
  *(undefined4 *)(iVar2 + 0x98) = uVar10;
  *(undefined4 *)(iVar2 + 0x9c) = uVar10;
  *(undefined4 *)(iVar2 + 0xa0) = uVar10;
  *(undefined4 *)(iVar2 + 0xa4) = uVar10;
  *(undefined4 *)(iVar2 + 0xa8) = uVar10;
  *(undefined4 *)(iVar2 + 0xac) = uVar10;
  *(undefined4 *)(iVar2 + 0xb0) = uVar10;
  *(undefined4 *)(iVar2 + 0xb4) = uVar10;
  *(undefined4 *)(iVar2 + 0xb8) = uVar10;
  *(undefined4 *)(iVar2 + 0xbc) = uVar10;
  *(undefined4 *)(iVar2 + 0xc0) = uVar10;
  *(undefined4 *)(iVar2 + 0xc4) = uVar10;
  *(undefined4 *)(iVar2 + 200) = uVar10;
  *(undefined4 *)(iVar2 + 0xcc) = uVar10;
  *(undefined4 *)(iVar2 + 0xd0) = uVar10;
  *(undefined4 *)(iVar2 + 0xd4) = uVar10;
  *(undefined4 *)(iVar2 + 0xd8) = uVar10;
  *(undefined4 *)(iVar2 + 0xdc) = uVar10;
  *(undefined4 *)(iVar2 + 0xe0) = uVar10;
  *(undefined4 *)(iVar2 + 0xe4) = uVar10;
  *(undefined4 *)(iVar2 + 0xe8) = uVar10;
  *(undefined4 *)(iVar2 + 0xec) = uVar10;
  *(undefined4 *)(iVar2 + 0xf0) = uVar10;
  *(undefined4 *)(iVar2 + 0xf4) = uVar10;
  *(undefined4 *)(iVar2 + 0xf8) = uVar10;
  *(undefined4 *)(iVar2 + 0xfc) = uVar10;
  *(undefined4 *)(iVar2 + 0x100) = uVar10;
  *(undefined4 *)(iVar2 + 0x104) = uVar10;
  *(undefined4 *)(iVar2 + 0x108) = uVar10;
  *(undefined4 *)(iVar2 + 0x10c) = uVar10;
  *(undefined4 *)(iVar2 + 0x110) = uVar10;
  *(undefined4 *)(iVar2 + 0x114) = uVar10;
  *(undefined4 *)(iVar2 + 0x118) = uVar10;
  *(undefined4 *)(iVar2 + 0x11c) = uVar10;
  *(undefined4 *)(iVar2 + 0x120) = uVar10;
  *(undefined4 *)(iVar2 + 0x124) = uVar10;
  *(undefined4 *)(iVar2 + 0x128) = uVar10;
  *(undefined4 *)(iVar2 + 300) = uVar10;
  *(undefined4 *)(iVar2 + 0x130) = uVar10;
  *(undefined4 *)(iVar2 + 0x134) = uVar10;
  *(undefined4 *)(iVar2 + 0x138) = uVar10;
  *(undefined4 *)(iVar2 + 0x13c) = uVar10;
  *(undefined4 *)(iVar2 + 0x140) = uVar10;
  *(undefined4 *)(iVar2 + 0x144) = uVar10;
  *(undefined4 *)(iVar2 + 0x148) = uVar10;
  *(undefined4 *)(iVar2 + 0x14c) = uVar10;
  *(undefined4 *)(iVar2 + 0x150) = uVar10;
  *(undefined4 *)(iVar2 + 0x154) = uVar10;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x164) = 0;
  iVar8 = DAT_002bafcc;
  *(undefined4 *)(iVar2 + 0x168) = 0;
  *(undefined4 *)(iVar2 + 0x16c) = uVar10;
  *(undefined4 *)(iVar2 + 0x170) = uVar10;
  *(undefined4 *)(iVar2 + 0x174) = uVar10;
  uVar14 = DAT_002bafd0;
  uVar15 = *(undefined4 *)(iVar8 + 4);
  uVar19 = *(undefined4 *)(iVar8 + 8);
  *(int *)(iVar2 + 0x17c) = iVar2 + -0x8c0;
  *(undefined4 *)(iVar2 + 0x180) = uVar15;
  *(undefined4 *)(iVar2 + 0x184) = uVar19;
  *(undefined4 *)(iVar2 + 0x178) = uVar14;
  uVar15 = *(undefined4 *)(iVar8 + 0xc);
  uVar19 = *(undefined4 *)(iVar8 + 0x10);
  *(undefined4 *)(iVar2 + 0x188) = uVar14;
  *(int *)(iVar2 + 0x18c) = iVar2 + -0x8c0;
  *(undefined4 *)(iVar2 + 400) = uVar15;
  *(undefined4 *)(iVar2 + 0x194) = uVar19;
  uVar19 = DAT_002bafd8;
  *(undefined4 *)(iVar2 + 0x198) = uVar10;
  uVar15 = DAT_002bafd4;
  *(undefined4 *)(iVar2 + 0x19c) = uVar10;
  *(undefined4 *)(iVar2 + 0x1a0) = uVar19;
  *(undefined4 *)(iVar2 + 0x1a4) = uVar15;
  *(undefined4 *)(iVar2 + 0x1a8) = uVar15;
  iVar8 = func_002D40FC((undefined4 *)(iVar2 + 0x1ac));
  *(undefined4 *)(iVar8 + 0x50) = 0;
  func_001E45E0((undefined1 *)(iVar8 + 0x3c));
  *(undefined2 *)(iVar8 + 0x84) = 0;
  *(undefined2 *)(iVar8 + 0x86) = 0;
  *(undefined2 *)(iVar8 + 0x88) = 0;
  *(undefined2 *)(iVar8 + 0x8a) = 0;
  *(undefined2 *)(iVar8 + 0x8c) = 0;
  *(undefined2 *)(iVar8 + 0x8e) = 0;
  *(undefined2 *)(iVar8 + 0x90) = 0;
  *(undefined2 *)(iVar8 + 0x92) = 0;
  *(undefined2 *)(iVar8 + 0x94) = 0;
  *(undefined2 *)(iVar8 + 0x96) = 0;
  *(undefined2 *)(iVar8 + 0x98) = 0;
  *(undefined2 *)(iVar8 + 0x9a) = 0;
  *(undefined1 *)(iVar8 + 0x9c) = 0;
  *(undefined1 *)(iVar8 + 0x9d) = 0;
  *(undefined4 *)(iVar8 + 0xa0) = 0;
  *(undefined4 *)(iVar8 + 0xa4) = 0;
  *(undefined4 *)(iVar8 + 0xa8) = 0;
  *(undefined4 *)(iVar8 + 0xac) = 0;
  *(undefined4 *)(iVar8 + 0xb0) = 0;
  *(undefined4 *)(iVar8 + 0xb4) = 0;
  *(undefined4 *)(iVar8 + 0xb8) = 0;
  *(undefined4 *)(iVar8 + 0xbc) = 0;
  *(undefined4 *)(iVar8 + 0xc0) = 0;
  *(undefined4 *)(iVar8 + 0xc4) = 0;
  *(undefined1 *)(iVar8 + 200) = 1;
  *(undefined1 *)(iVar8 + 0xc9) = 0;
  *(undefined1 *)(iVar8 + 0xca) = 0;
  *(undefined1 *)(iVar8 + 0xcb) = 0;
  *(undefined1 *)(iVar8 + 0xcc) = 0;
  *(undefined1 *)(iVar8 + 0xcd) = 0;
  *(undefined1 *)(iVar8 + 0xce) = 0;
  *(undefined1 *)(iVar8 + 0xcf) = 0;
  *(undefined1 *)(iVar8 + 0xd0) = 0;
  *(undefined1 *)(iVar8 + 0xd1) = 0;
  *(undefined1 *)(iVar8 + 0xd2) = 0;
  *(undefined1 *)(iVar8 + 0xd3) = 0;
  *(undefined1 *)(iVar8 + 0xd4) = 0;
  *(undefined1 *)(iVar8 + 0xd5) = 0;
  *(undefined1 *)(iVar8 + 0xd6) = 0;
  *(undefined1 *)(iVar8 + 0xd7) = 1;
  *(undefined1 *)(iVar8 + 0xd8) = 0;
  *(undefined1 *)(iVar8 + 0xd9) = 0;
  *(undefined1 *)(iVar8 + 0xda) = 0;
  *(undefined1 *)(iVar8 + 0xdb) = 0;
  piVar3 = func_00396FE8((int *)(iVar8 + 0xdc),iVar8 + -0xa6c);
  pbVar4 = (byte *)func_003A37D4((undefined1 *)(piVar3 + 0x20),piVar3 + -0x2d2);
  pbVar4[0x8cc] = 0;
  pbVar4[0x8cd] = 0;
  pbVar4[0x8ce] = 0;
  pbVar4[0x8cf] = 0;
  pbVar5 = pbVar4 + 0x8d0;
  pbVar17 = pbVar4 + -0xbc8;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar4[0x8d4] = 0;
  pbVar4[0x8d5] = 0;
  pbVar4[0x8d6] = 0;
  pbVar4[0x8d7] = 0;
  pbVar4[0x8d8] = 0;
  pbVar4[0x8d9] = 0;
  pbVar4[0x8da] = 0;
  pbVar4[0x8db] = 0;
  pbVar4[0x8dc] = 0;
  pbVar4[0x8dd] = 0;
  pbVar4[0x8de] = 0;
  pbVar4[0x8df] = 0;
  pbVar6 = pbVar4 + 0x8e0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar4[0x8e4] = 0;
  pbVar4[0x8e5] = 0;
  pbVar4[0x8e6] = 0;
  pbVar4[0x8e7] = 0;
  pbVar4[0x8e8] = 0;
  pbVar4[0x8e9] = 0;
  pbVar4[0x8ea] = 0;
  pbVar4[0x8eb] = 0;
  pbVar4[0x8ec] = 0;
  iVar8 = DAT_002bafcc;
  pbVar4[0x8ed] = 0;
  pbVar4[0x8ee] = 0;
  pbVar4[0x8ef] = 0;
  puVar9 = (undefined4 *)(DAT_002bafcc + 0x2c);
  pbVar4[0x8f4] = 0;
  pbVar4[0x8f5] = 0;
  pbVar4[0x8f6] = 0;
  pbVar4[0x8f7] = 0;
  uVar10 = *puVar9;
  uVar15 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(pbVar4 + 0x8f0) = uVar14;
  *(undefined4 *)(pbVar4 + 0x8f8) = uVar10;
  *(undefined4 *)(pbVar4 + 0x8fc) = uVar15;
  pbVar4[0x904] = 0;
  pbVar4[0x905] = 0;
  pbVar4[0x906] = 0;
  pbVar4[0x907] = 0;
  fVar11 = *(float *)(iVar8 + 0x2c);
  uVar10 = *(undefined4 *)(iVar8 + 0x30);
  pfVar16 = (float *)(pbVar4 + 0x908);
  *(undefined4 *)(pbVar4 + 0x900) = uVar14;
  *pfVar16 = fVar11;
  *(undefined4 *)(pbVar4 + 0x90c) = uVar10;
  pbVar4[0x914] = 0;
  pbVar4[0x915] = 0;
  pbVar4[0x916] = 0;
  pbVar4[0x917] = 0;
  uVar10 = *(undefined4 *)(iVar8 + 0x30);
  pbVar18 = pbVar4 + 0x920;
  *(undefined4 *)(pbVar4 + 0x918) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(pbVar4 + 0x91c) = uVar10;
  *(undefined4 *)(pbVar4 + 0x910) = uVar14;
  pbVar18[0] = 0;
  pbVar18[1] = 0;
  pbVar18[2] = 0;
  pbVar18[3] = 0;
  *(uint *)(pbVar4 + -0x8e8) = *(uint *)(pbVar4 + -0x8e8) | 8;
  func_004FC78C((int)pbVar17,(short)*(char *)(*(int *)(pbVar4 + -0x30c) + 8));
  uVar13 = DAT_002bb2cc | (int)DAT_002bb2cc >> 0xc;
  pbVar17[DAT_002bb2cc] = *(byte *)(*(int *)(pbVar4 + -0x30c) + 0xe);
  pbVar17[uVar13] = *(byte *)(*(int *)(pbVar4 + -0x30c) + 0xf);
  func_003A2F8C((int)pbVar4,*(undefined1 *)(*(int *)(pbVar4 + -0x30c) + 0xc));
  func_003A2FB0((int)pbVar4,*(undefined1 *)(*(int *)(pbVar4 + -0x30c) + 0xd));
  if (*(char *)(*(int *)(pbVar4 + -0x30c) + 3) != '\0') {
    func_002D3B28((int)(pbVar4 + -0x15c),1);
  }
  func_004C6A64(*DAT_002bafc4,*(undefined4 *)(pbVar4 + -0x8fc),uVar13,(int *)pfVar16);
  uVar13 = 0;
  do {
    pbVar12 = pbVar4 + -0x20;
    if (uVar13 < 0x20) {
      pbVar12 = pbVar4 + -0x20 + uVar13;
    }
    uVar13 = uVar13 + 1;
    *pbVar12 = 0;
  } while ((int)uVar13 < 0x20);
  *(undefined4 *)(pbVar4 + -0x7bc) = *(undefined4 *)(pbVar4 + -0x2f4);
  *(undefined4 *)(pbVar4 + -0x7b8) = *(undefined4 *)(pbVar4 + -0x2ec);
  *(uint *)(pbVar4 + -0x62c) = *(uint *)(pbVar4 + -0x62c) | 0x80000700;
  iVar8 = func_0019B04C(*DAT_002bb2d0);
  piVar3 = func_0054D8B0(iVar8 + 0x18,pbVar17,0);
  *(int **)(pbVar4 + 0x8cc) = piVar3;
  iVar8 = func_00521380((int)piVar3);
  if (iVar8 != 0) {
    func_001512B4(*(int *)(pbVar4 + 0x8cc),(float *)(pbVar4 + -0x7f8));
  }
  *(byte **)(pbVar4 + -0x7dc) = pbVar4 + -400;
  *(uint *)(pbVar4 + -0x644) = *(uint *)(pbVar4 + -0x644) | 4;
  *(uint *)(pbVar4 + -0x62c) = *(uint *)(pbVar4 + -0x62c) | 0x8000;
  func_004F87F8((int)pbVar17,5);
  *(uint *)(pbVar4 + -0x62c) = *(uint *)(pbVar4 + -0x62c) & 0xfff7feff;
  func_004F5BD8((int)pbVar17,(uint *)0x0,(int **)0x0,pfVar16);
  func_003A2ABC(pbVar4);
  func_0036D0C8((int *)pbVar18,0);
  puVar9 = DAT_002bb2d4;
  if (*(int *)pbVar18 == 0) {
    iVar8 = 1;
  }
  else {
    iVar8 = func_0010983C(*DAT_002bb2d4,*(int *)pbVar18);
  }
  puVar7 = (undefined4 *)func_0010BAB4(0x820);
  piVar3 = (int *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    piVar3 = (int *)func_003AC354(puVar7,pbVar17);
  }
  *(int **)(pbVar4 + -0x28c) = piVar3;
  func_003ABA84(piVar3);
  if (iVar8 != 1) {
    func_0010983C(*puVar9,iVar8);
  }
  func_002B7634((int)pbVar17);
  iVar8 = DAT_002bafcc;
  uVar10 = *(undefined4 *)(DAT_002bafcc + 0x14);
  uVar14 = *(undefined4 *)(DAT_002bafcc + 0x18);
  *(byte **)(pbVar4 + 0x904) = pbVar17;
  *(undefined4 *)(pbVar4 + 0x908) = uVar10;
  *(undefined4 *)(pbVar4 + 0x90c) = uVar14;
  pfVar16 = (float *)(pbVar4 + 0x8f8);
  fVar11 = *(float *)(iVar8 + 0x1c);
  uVar10 = *(undefined4 *)(iVar8 + 0x20);
  *(byte **)(pbVar4 + 0x8f4) = pbVar17;
  *pfVar16 = fVar11;
  *(undefined4 *)(pbVar4 + 0x8fc) = uVar10;
  uVar10 = *(undefined4 *)(iVar8 + 0x24);
  uVar14 = *(undefined4 *)(iVar8 + 0x28);
  *(byte **)(pbVar4 + 0x914) = pbVar17;
  *(undefined4 *)(pbVar4 + 0x918) = uVar10;
  *(undefined4 *)(pbVar4 + 0x91c) = uVar14;
  func_004F871C((int)pbVar17,pbVar4 + 0x900);
  *(byte **)(pbVar4 + -0x788) = pbVar4 + 0x8f0;
  *(byte **)(pbVar4 + -0x784) = pbVar4 + 0x910;
  func_004FB024((int)pbVar17);
  func_004F5BD8((int)pbVar17,(uint *)0x0,(int **)0x0,pfVar16);
  *(byte **)(*DAT_002bb2d8 + 0x5c) = pbVar17;
  *(undefined4 *)(pbVar4 + -0x27c) = *(undefined4 *)(pbVar4 + -0x7f8);
  *(undefined4 *)(pbVar4 + -0x278) = *(undefined4 *)(pbVar4 + -0x7f4);
  *(undefined4 *)(pbVar4 + -0x274) = *(undefined4 *)(pbVar4 + -0x7f0);
  iVar8 = func_0010CEE0(0x50,(int *)0x0,4);
  if ((iVar8 != 0) && (iVar8 = func_00100118(iVar8,DAT_002bb2dc,4,0x14), iVar8 != 0)) {
    pbVar4[0x8dc] = 0;
    pbVar4[0x8dd] = 0;
    pbVar4[0x8de] = 0;
    pbVar4[0x8df] = 0;
    *(int *)pbVar5 = iVar8;
    pbVar4[0x8d4] = 0x14;
    pbVar4[0x8d5] = 0;
    pbVar4[0x8d6] = 0;
    pbVar4[0x8d7] = 0;
    pbVar4[0x8d8] = 0;
    pbVar4[0x8d9] = 0;
    pbVar4[0x8da] = 0;
    pbVar4[0x8db] = 0;
  }
  iVar8 = func_0010CEE0(0x50,(int *)0x0,4);
  if ((iVar8 != 0) && (iVar8 = func_00100118(iVar8,DAT_002bb2dc,4,0x14), iVar8 != 0)) {
    pbVar4[0x8ec] = 0;
    pbVar4[0x8ed] = 0;
    pbVar4[0x8ee] = 0;
    pbVar4[0x8ef] = 0;
    *(int *)pbVar6 = iVar8;
    pbVar4[0x8e4] = 0x14;
    pbVar4[0x8e5] = 0;
    pbVar4[0x8e6] = 0;
    pbVar4[0x8e7] = 0;
    pbVar4[0x8e8] = 0;
    pbVar4[0x8e9] = 0;
    pbVar4[0x8ea] = 0;
    pbVar4[0x8eb] = 0;
  }
  pbVar4[-0x86a] = 0;
  return pbVar17;
}

