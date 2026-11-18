#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002B2590(undefined4 *param_1,undefined4 param_2);
extern int func_0032493C(undefined4 *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F9A2C(int param_1,char *param_2);
extern int func_004FA000(int param_1);
extern int func_004FC798(int param_1,int param_2,undefined1 *param_3,float fparam_0);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054DD3C(int param_1,uint param_2);
extern int func_0054DD54(int param_1,uint param_2);
extern int DAT_004fd934;
extern int *DAT_004fd938;
extern int *DAT_004fd93c;
extern int DAT_004fd940;
extern int DAT_004fd944;
extern int DAT_004fd948;
extern int DAT_004fd94c;
extern int DAT_004fd950;
extern int DAT_004fd954;
extern int DAT_004fd958;
extern undefined *DAT_004fd95c;
extern undefined *DAT_004fd960;
extern undefined *DAT_004fd964;
extern undefined4 DAT_004fd968;
extern undefined1 *DAT_004fdd78;
extern undefined4 *DAT_004fdd7c;
extern float DAT_004fdd80;
extern undefined4 *DAT_004fdd84;
extern int *DAT_004fdd88;

// USA 004FD464 <- EU 004FD43C (Ghidra, non-matching)
// GLOBAL DAT_004fd934 int
// GLOBAL DAT_004fd938 int *
// GLOBAL DAT_004fd93c int *
// GLOBAL DAT_004fd940 int
// GLOBAL DAT_004fd944 int
// GLOBAL DAT_004fd948 int
// GLOBAL DAT_004fd94c int
// GLOBAL DAT_004fd950 int
// GLOBAL DAT_004fd954 int
// GLOBAL DAT_004fd958 int
// GLOBAL DAT_004fd95c undefined *
// GLOBAL DAT_004fd960 undefined *
// GLOBAL DAT_004fd964 undefined *
// GLOBAL DAT_004fd968 undefined4
// GLOBAL DAT_004fdd78 undefined1 *
// GLOBAL DAT_004fdd7c undefined4 *
// GLOBAL DAT_004fdd80 float
// GLOBAL DAT_004fdd84 undefined4 *
// GLOBAL DAT_004fdd88 int *

/* WARNING: Variable defined which should be unmapped: objStack_38 */

undefined4 * func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_38 ((uint *)(albw_frame + 0x8))
  piVar7 = func_00150E40(param_1,param_2);
  iVar9 = DAT_004fd934;
  piVar7[200] = DAT_004fd934 + 0x84;
  *piVar7 = iVar9;
  piVar7[0x103] = 0;
  piVar7[0x104] = 0;
  piVar7[0x105] = 0;
  piVar7[0x106] = 0;
  piVar7[0x107] = 0;
  puVar8 = (undefined4 *)func_0010BAB4(100);
  iVar9 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    iVar9 = func_004EE484(puVar8);
  }
  piVar7[0x108] = iVar9;
  piVar7[0x109] = 0;
  piVar7[0x10a] = 0;
  piVar7[0x10b] = 0;
  piVar7[0x10c] = 0;
  piVar7[0x10d] = 0;
  puVar8 = (undefined4 *)func_0010BAB4(0xc);
  iVar9 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    iVar9 = func_0032493C(puVar8);
  }
  piVar7[0x10e] = iVar9;
  puVar10 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar8 = func_0034CAA0(puVar10);
  }
  piVar7[0x10f] = (int)puVar8;
  piVar7[0x110] = (int)(piVar7 + 0x149);
  piVar7[0x111] = (int)(piVar7 + 0x14d);
  piVar7[0x112] = (int)(piVar7 + 0x151);
  piVar5 = DAT_004fd93c;
  piVar4 = DAT_004fd938;
  iVar9 = DAT_004fd938[1];
  iVar23 = DAT_004fd938[2];
  piVar7[0x113] = *DAT_004fd938;
  piVar7[0x114] = iVar9;
  piVar7[0x115] = iVar23;
  iVar9 = piVar5[1];
  iVar23 = piVar5[2];
  piVar7[0x116] = *piVar5;
  piVar7[0x117] = iVar9;
  piVar7[0x118] = iVar23;
  iVar9 = piVar4[1];
  iVar23 = piVar4[2];
  piVar7[0x119] = *piVar4;
  piVar7[0x11a] = iVar9;
  piVar7[0x11b] = iVar23;
  iVar9 = piVar5[1];
  iVar23 = piVar5[2];
  piVar7[0x11c] = *piVar5;
  piVar7[0x11d] = iVar9;
  piVar7[0x11e] = iVar23;
  iVar9 = piVar4[1];
  iVar23 = piVar4[2];
  piVar7[0x11f] = *piVar4;
  piVar7[0x120] = iVar9;
  piVar7[0x121] = iVar23;
  iVar9 = piVar5[1];
  iVar23 = piVar5[2];
  piVar7[0x122] = *piVar5;
  piVar7[0x123] = iVar9;
  piVar7[0x124] = iVar23;
  iVar9 = piVar4[1];
  iVar23 = piVar4[2];
  piVar7[0x125] = *piVar4;
  piVar7[0x126] = iVar9;
  piVar7[0x127] = iVar23;
  iVar9 = piVar5[1];
  iVar23 = piVar5[2];
  piVar7[0x128] = *piVar5;
  piVar7[0x129] = iVar9;
  piVar7[0x12a] = iVar23;
  piVar7[299] = 0;
  piVar7[300] = 0;
  *(undefined1 *)(piVar7 + 0x12d) = 0;
  *(undefined1 *)((int)piVar7 + 0x4b5) = 0;
  iVar9 = DAT_004fd940;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  piVar7[0x12e] = *piVar4;
  piVar7[0x12f] = iVar23;
  piVar7[0x130] = iVar24;
  piVar7[0x131] = iVar9;
  piVar7[0x132] = iVar9;
  piVar7[0x133] = iVar9;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  piVar7[0x134] = *piVar4;
  piVar7[0x135] = iVar23;
  piVar7[0x136] = iVar24;
  *(undefined1 *)(piVar7 + 0x137) = 8;
  piVar7[0x138] = 0;
  iVar23 = *piVar5;
  iVar24 = piVar5[1];
  piVar7[0x13b] = piVar5[2];
  piVar7[0x139] = iVar23;
  piVar7[0x13a] = iVar24;
  piVar7[0x13c] = iVar9;
  piVar7[0x13d] = iVar9;
  piVar7[0x13e] = iVar9;
  piVar7[0x13f] = 0;
  piVar7[0x140] = 0;
  piVar7[0x141] = 0;
  *(undefined2 *)(piVar7 + 0x142) = 4;
  *(undefined2 *)((int)piVar7 + 0x50a) = 4;
  *(undefined2 *)(piVar7 + 0x143) = 4;
  *(undefined2 *)((int)piVar7 + 0x50e) = 4;
  puVar10 = (undefined4 *)func_0010BAB4(0x2c4);
  puVar8 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar8 = func_002B2590(puVar10,piVar7);
  }
  iVar23 = DAT_004fd944;
  piVar7[0x144] = (int)puVar8;
  piVar7[0x146] = 0;
  iVar25 = DAT_004fd94c;
  iVar24 = *(int *)(iVar23 + 0x54);
  piVar7[0x147] = *(int *)(iVar23 + 0x50);
  piVar7[0x148] = iVar24;
  iVar24 = DAT_004fd948;
  piVar7[0x145] = DAT_004fd948;
  piVar7[0x14a] = 0;
  iVar16 = *(int *)(iVar23 + 0x50);
  iVar20 = *(int *)(iVar23 + 0x54);
  piVar7[0x149] = iVar24;
  piVar7[0x14b] = iVar16;
  piVar7[0x14c] = iVar20;
  piVar7[0x14e] = 0;
  iVar16 = *(int *)(iVar23 + 0x50);
  iVar20 = *(int *)(iVar23 + 0x54);
  piVar7[0x14d] = iVar24;
  piVar4 = DAT_004fd938;
  piVar7[0x14f] = iVar16;
  piVar7[0x150] = iVar20;
  piVar7[0x152] = 0;
  iVar16 = *(int *)(iVar23 + 0x50);
  iVar20 = *(int *)(iVar23 + 0x54);
  piVar7[0x151] = iVar24;
  piVar7[0x153] = iVar16;
  piVar7[0x154] = iVar20;
  piVar7[0x156] = 0;
  iVar16 = *(int *)(iVar23 + 0x54);
  iVar23 = *(int *)(iVar23 + 0x50);
  piVar7[0x155] = iVar24;
  piVar7[0x157] = iVar23;
  piVar7[0x158] = iVar16;
  piVar7[0x159] = iVar25;
  piVar7[0x15a] = iVar25;
  piVar7[0x15b] = iVar25;
  iVar24 = DAT_004fd954;
  piVar7[0x15c] = iVar25;
  piVar7[0x15d] = iVar25;
  piVar7[0x15e] = iVar25;
  iVar23 = DAT_004fd950;
  piVar7[0x15f] = iVar25;
  piVar7[0x160] = iVar25;
  piVar7[0x161] = iVar23;
  piVar7[0x162] = 0x36;
  piVar7[0x163] = iVar24;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  piVar7[0x164] = *piVar4;
  piVar7[0x165] = iVar23;
  piVar7[0x166] = iVar24;
  iVar23 = DAT_004fd958;
  piVar7[0x168] = 0x3000;
  piVar7[0x167] = iVar23;
  puVar6 = DAT_004fd95c;
  piVar7[0x169] = piVar7[0x168];
  iVar23 = func_00100118((int)(piVar7 + 0x16a),puVar6,0xc,7);
  iVar23 = func_00100118(iVar23 + 0x70,DAT_004fd960,4,7);
  iVar23 = func_00100118(iVar23 + 0x1c,DAT_004fd960,4,7);
  *(undefined1 *)(iVar23 + 0x1c) = 0;
  *(undefined1 *)(iVar23 + 0x1d) = 0;
  *(undefined1 *)(iVar23 + 0x1e) = 0;
  *(undefined1 *)(iVar23 + 0x1f) = 0;
  *(undefined1 *)(iVar23 + 0x20) = 10;
  *(undefined1 *)(iVar23 + 0x21) = 10;
  *(undefined1 *)(iVar23 + 0x22) = 0;
  *(undefined1 *)(iVar23 + 0x23) = 0;
  *(undefined4 *)(iVar23 + 0x24) = 0;
  *(undefined4 *)(iVar23 + 0x28) = 0;
  *(int *)(iVar23 + 0x2c) = iVar9;
  *(undefined4 *)(iVar23 + 0x30) = 0;
  *(undefined4 *)(iVar23 + 0x34) = 0;
  *(int *)(iVar23 + 0x38) = iVar9;
  *(undefined4 *)(iVar23 + 0x3c) = 0;
  *(undefined4 *)(iVar23 + 0x40) = 0;
  *(int *)(iVar23 + 0x44) = iVar9;
  *(undefined4 *)(iVar23 + 0x48) = 0;
  *(undefined4 *)(iVar23 + 0x4c) = 0;
  *(int *)(iVar23 + 0x50) = iVar9;
  *(undefined4 *)(iVar23 + 0x54) = 0;
  *(undefined4 *)(iVar23 + 0x58) = 0;
  *(int *)(iVar23 + 0x5c) = iVar9;
  *(undefined4 *)(iVar23 + 0x60) = 0;
  *(undefined4 *)(iVar23 + 100) = 0;
  *(int *)(iVar23 + 0x68) = iVar9;
  *(undefined4 *)(iVar23 + 0x6c) = 0;
  *(undefined4 *)(iVar23 + 0x70) = 0;
  *(int *)(iVar23 + 0x74) = iVar9;
  *(undefined4 *)(iVar23 + 0x78) = 0;
  *(undefined4 *)(iVar23 + 0x7c) = 0;
  *(int *)(iVar23 + 0x80) = iVar9;
  *(undefined4 *)(iVar23 + 0x84) = 0;
  *(undefined4 *)(iVar23 + 0x88) = 0;
  *(int *)(iVar23 + 0x8c) = iVar9;
  *(undefined4 *)(iVar23 + 0x90) = 0;
  *(undefined4 *)(iVar23 + 0x94) = 0;
  *(int *)(iVar23 + 0x98) = iVar9;
  *(undefined4 *)(iVar23 + 0x9c) = 0;
  *(undefined4 *)(iVar23 + 0xa0) = 0;
  *(int *)(iVar23 + 0xa4) = iVar9;
  *(undefined4 *)(iVar23 + 0xa8) = 0;
  *(undefined4 *)(iVar23 + 0xac) = 0;
  *(int *)(iVar23 + 0xb0) = iVar9;
  *(undefined4 *)(iVar23 + 0xb4) = 0;
  *(undefined4 *)(iVar23 + 0xb8) = 0;
  *(int *)(iVar23 + 0xbc) = iVar9;
  *(undefined4 *)(iVar23 + 0xc0) = 0;
  *(undefined4 *)(iVar23 + 0xc4) = 0;
  *(int *)(iVar23 + 200) = iVar9;
  *(undefined4 *)(iVar23 + 0xcc) = 0;
  *(undefined4 *)(iVar23 + 0xd0) = 0;
  *(int *)(iVar23 + 0xd4) = iVar9;
  *(undefined4 *)(iVar23 + 0xd8) = 0;
  *(undefined4 *)(iVar23 + 0xdc) = 0;
  *(int *)(iVar23 + 0xe0) = iVar9;
  *(undefined4 *)(iVar23 + 0xe4) = 0;
  *(undefined4 *)(iVar23 + 0xe8) = 0;
  *(int *)(iVar23 + 0xec) = iVar9;
  *(undefined4 *)(iVar23 + 0xf0) = 0;
  *(undefined4 *)(iVar23 + 0xf4) = 0;
  *(int *)(iVar23 + 0xf8) = iVar9;
  *(undefined4 *)(iVar23 + 0xfc) = 0;
  *(undefined4 *)(iVar23 + 0x100) = 0;
  *(int *)(iVar23 + 0x104) = iVar9;
  *(undefined4 *)(iVar23 + 0x108) = 0;
  *(undefined4 *)(iVar23 + 0x10c) = 0;
  *(int *)(iVar23 + 0x110) = iVar9;
  iVar23 = func_00100118(iVar23 + 0x114,DAT_004fd964,0x10,2);
  *(undefined1 *)(iVar23 + 0x20) = 0;
  *(undefined1 *)(iVar23 + 0x24) = 0;
  iVar24 = piVar4[1];
  iVar16 = piVar4[2];
  *(int *)(iVar23 + 0x28) = *piVar4;
  *(int *)(iVar23 + 0x2c) = iVar24;
  *(int *)(iVar23 + 0x30) = iVar16;
  *(undefined1 *)(iVar23 + 0x34) = 1;
  *(undefined1 *)(iVar23 + 0x35) = 0xff;
  *(undefined1 *)(iVar23 + 0x36) = 0xff;
  *(undefined1 *)(iVar23 + 0x37) = 0;
  *(undefined1 *)(iVar23 + 0x38) = 0xff;
  *(undefined2 *)(iVar23 + 0x3a) = 0x5a;
  *(undefined2 *)(iVar23 + 0x3c) = 0;
  uVar15 = DAT_004fd968;
  *(undefined2 *)(iVar23 + 0x3e) = 0xffff;
  *(undefined2 *)(iVar23 + 0x40) = 0xffff;
  *(undefined4 *)(iVar23 + 0x50) = uVar15;
  *(undefined4 *)(iVar23 + 0x54) = 0;
  *(undefined4 *)(iVar23 + 0x58) = 0;
  *(undefined4 *)(iVar23 + 0x5c) = 0;
  iVar24 = piVar4[1];
  iVar16 = piVar4[2];
  *(int *)(iVar23 + 0x60) = *piVar4;
  *(int *)(iVar23 + 100) = iVar24;
  *(int *)(iVar23 + 0x68) = iVar16;
  puVar8 = func_0034CAA0((undefined4 *)(iVar23 + 0x6c));
  *(undefined1 *)(puVar8 + 0x12) = 0;
  puVar10 = puVar8 + -0x1ed;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  *(undefined1 *)(puVar8 + 0x1c) = 0xff;
  *(undefined1 *)((int)puVar8 + 0x71) = 0xff;
  *(undefined1 *)((int)puVar8 + 0x72) = 0xff;
  *(undefined1 *)((int)puVar8 + 0x73) = 0xff;
  *(undefined1 *)(puVar8 + 0x1d) = 0;
  *(undefined1 *)((int)puVar8 + 0x75) = 0;
  *(undefined1 *)((int)puVar8 + 0x76) = 0;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  puVar8[0x1e] = *piVar4;
  puVar8[0x1f] = iVar23;
  puVar8[0x20] = iVar24;
  *(undefined2 *)(puVar8 + 0x21) = 0;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  puVar8[0x22] = *piVar4;
  puVar8[0x23] = iVar23;
  puVar8[0x24] = iVar24;
  *(undefined1 *)(puVar8 + 0x25) = 0;
  *(undefined1 *)((int)puVar8 + 0x95) = 0;
  *(undefined1 *)((int)puVar8 + 0x96) = 0;
  puVar8[0x26] = iVar25;
  *(undefined1 *)(puVar8 + 0x27) = 2;
  *(undefined1 *)((int)puVar8 + 0x9d) = *DAT_004fdd78;
  *(undefined1 *)((int)puVar8 + 0x9e) = 0;
  *(undefined1 *)((int)puVar8 + 0x9f) = 0;
  puVar8[0x28] = iVar25;
  *(undefined1 *)(puVar8 + 0x29) = 1;
  *(undefined1 *)((int)puVar8 + 0xa5) = 0;
  *(undefined1 *)((int)puVar8 + 0xa6) = 0;
  *(undefined1 *)((int)puVar8 + 0xa7) = 0;
  puVar8[0x2a] = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = iVar9;
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 0;
  puVar8[0x2f] = iVar9;
  *(undefined1 *)(puVar8 + 0x30) = 0x80;
  *(undefined1 *)((int)puVar8 + 0xc1) = 0x80;
  *(undefined1 *)((int)puVar8 + 0xc2) = 0x80;
  *(undefined1 *)((int)puVar8 + 0xc3) = 0x80;
  puVar8[0x31] = *DAT_004fdd7c;
  *(undefined1 *)(puVar8 + 0x32) = 10;
  *(undefined1 *)((int)puVar8 + 0xc9) = 0x14;
  *(undefined1 *)((int)puVar8 + 0xca) = 0x28;
  *(undefined1 *)((int)puVar8 + 0xcb) = 10;
  *(undefined1 *)(puVar8 + 0x33) = 0xf;
  *(undefined1 *)((int)puVar8 + 0xcd) = 5;
  *(undefined1 *)((int)puVar8 + 0xce) = 0;
  puVar8[0x35] = puVar8 + 0x34;
  puVar8[0x36] = 0;
  puVar8[0x34] = puVar8 + 0x34;
  *(undefined1 *)(puVar8 + 0x38) = 0;
  *(undefined1 *)((int)puVar8 + 0xe1) = 0;
  *(undefined1 *)((int)puVar8 + 0xe2) = 1;
  *(undefined1 *)((int)puVar8 + 0xe3) = 0;
  puVar8[0x39] = iVar25;
  *(undefined1 *)(puVar8 + 0x3a) = 0;
  *(undefined1 *)((int)puVar8 + 0xe9) = 0;
  *(undefined1 *)((int)puVar8 + 0xea) = 0;
  *(undefined1 *)((int)puVar8 + 0xeb) = 0;
  puVar8[0x3b] = 0;
  puVar8[0x3c] = 0;
  iVar23 = piVar4[1];
  iVar24 = piVar4[2];
  puVar8[0x3d] = *piVar4;
  puVar8[0x3e] = iVar23;
  puVar8[0x3f] = iVar24;
  *(undefined1 *)(puVar8 + 0x40) = 0;
  *(undefined1 *)((int)puVar8 + 0x101) = 0;
  *(undefined1 *)((int)puVar8 + 0x102) = 0;
  *(undefined1 *)((int)puVar8 + 0x103) = 1;
  *(undefined1 *)(puVar8 + 0x41) = 0;
  puVar8[0x37] = 0x28;
  puVar11 = func_004FA000(0);
  puVar21 = puVar8 + -0x83;
  *(undefined1 *)((int)puVar8 + 0x9d) = *puVar11;
  *(undefined1 *)(puVar8 + -0xfa) = 1;
  puVar8[-0xba] = iVar9;
  uVar13 = 0;
  do {
    puVar14 = puVar21 + uVar13 * 3;
    uVar12 = uVar13 + 1;
    *puVar14 = 0;
    *(undefined1 *)(puVar14 + 1) = 0xb;
    puVar14[2] = iVar9;
    puVar21[uVar13 + 0x15] = 0;
    puVar21[uVar13 + 0x1c] = 0;
    puVar21[uVar13 + 0x23] = 0;
    uVar13 = uVar12;
  } while (uVar12 < 7);
  *(undefined1 *)((int)puVar8 + -0x161) = 0;
  *(undefined1 *)((int)puVar8 + -0x162) = 0;
  *(undefined1 *)((int)puVar8 + -0x163) = 0;
  *(undefined1 *)(puVar8 + -0x59) = 0;
  if ((*param_3 & 1) == 0) {
    uVar13 = param_3[3];
    if ((int)uVar13 < 0) {
      uVar13 = func_005330BC(*(int *)(puVar8[-0x139] + 0x1c8 + param_3[2] * 4),(int *)(param_3 + 6))
      ;
    }
    uVar12 = param_3[1];
    uVar17 = param_3[2];
    uVar22 = param_3[0x11];
    puVar8[-0xb5] = *(undefined4 *)(puVar8[-0x139] + 0x1c8 + uVar17 * 4);
    objStack_38[0] = 1;
    objStack_38[1] = 0;
    objStack_38[2] = 0;
    iVar9 = func_0014E428((int)puVar10,uVar12 | 1,uVar17,uVar13,1,0,0);
    puVar8[-0xea] = iVar9;
    objStack_38[0] = CONCAT31((*(undefined4 *)((char *)&objStack_38[0] + 1) & 0xFFFFFF),(char)uVar22) | 4;
    func_004FC798((int)puVar21,iVar9,(undefined1 *)objStack_38,DAT_004fdd80);
    puVar8[-0x86] = puVar8[-0x86] | 0x400;
  }
  if (-1 < (int)(*param_3 << 0x1e)) {
    func_004F9A2C((int)puVar10,(char *)(param_3 + 4));
  }
  uVar15 = *DAT_004fdd84;
  uVar18 = DAT_004fdd84[1];
  puVar8[-0x97] = puVar10;
  puVar8[-0x96] = uVar15;
  puVar8[-0x95] = uVar18;
  puVar8[-0xf2] = puVar8 + -0x98;
  if ((((-1 < (int)(*param_3 << 0x1d)) && (puVar8[-0x139] != 0)) &&
      (iVar9 = func_0054DD54(puVar8[-0x139] + 0x18,0), iVar9 != 0)) &&
     (iVar9 = func_0054DD3C(puVar8[-0x139] + 0x18,0), iVar9 != 0)) {
    puVar14 = (undefined4 *)func_0054D89C((int)puVar10,0);
    puVar8[-0xe6] = puVar14;
    if (puVar14 != (undefined4 *)0x0) {
      uVar13 = (uint)*(byte *)((int)puVar8 + -0x163);
      if (uVar13 < 7) {
        if (uVar13 != 0) {
          uVar12 = uVar13 & 1;
          uVar17 = 0;
          if ((*(byte *)((int)puVar8 + -0x163) & 1) != 0) {
            do {
              if ((undefined4 *)puVar21[uVar17 + 0x15] == puVar14) goto LAB_004fdd24;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar12);
          }
          for (; uVar12 < uVar13; uVar12 = uVar12 + 2) {
            puVar19 = puVar21 + uVar12;
            puVar1 = puVar19 + 0x15;
            if ((undefined4 *)*puVar1 != puVar14) {
              puVar19 = (undefined4 *)puVar19[0x16];
            }
            if ((undefined4 *)*puVar1 == puVar14 || puVar19 == puVar14) goto LAB_004fdd24;
          }
        }
        puVar21[uVar13 + 0x15] = puVar14;
        *(char *)((int)puVar8 + -0x163) = *(char *)((int)puVar8 + -0x163) + '\x01';
      }
    }
  }
LAB_004fdd24:
  if (puVar8[-0x104] != 0) {
    uVar2 = *(undefined2 *)(puVar8[-0x104] + 2);
    *(undefined2 *)((int)puVar8 + -0x2aa) = uVar2;
    *(undefined2 *)(puVar8 + -0xab) = uVar2;
  }
  if (*DAT_004fdd88 != 0) {
    cVar3 = *(char *)(*DAT_004fdd88 + 0x18);
    if (cVar3 == '\x14') {
      *(undefined1 *)((int)puVar8 + 0x101) = 1;
    }
    else if (cVar3 == '\v') {
      *(undefined1 *)(puVar8 + 0x41) = 1;
    }
  }
  return puVar10;
}

