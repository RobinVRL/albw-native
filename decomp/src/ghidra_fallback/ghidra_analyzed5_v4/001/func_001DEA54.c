#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00149D2C(undefined1 *param_1);
extern int func_0014A0E8(int param_1,undefined4 param_2);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001E45E0(undefined1 *param_1);
extern int func_001E6898(undefined4 *param_1);
extern int func_001FE6C8(int param_1);
extern int func_00255D9C(undefined4 *param_1,undefined4 param_2);
extern int func_0028C954(undefined4 *param_1);
extern int func_002933AC(undefined4 *param_1,int param_2);
extern int func_002D1348(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002D40FC(undefined4 *param_1);
extern int func_002D43C8(undefined4 *param_1,undefined4 param_2);
extern int func_002D4404(undefined4 *param_1,undefined4 param_2,uint param_3);
extern int func_002D4C30(undefined4 *param_1,int param_2);
extern int func_0031E4DC(undefined4 *param_1,undefined4 param_2);
extern int func_003441F0(undefined4 *param_1,int param_2);
extern int func_003613F0(int param_1,int param_2,undefined4 param_3);
extern int func_003614CC(int *param_1);
extern int func_003623F8(undefined4 *param_1,int param_2);
extern int func_0038F174(undefined4 *param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_0054D8B0(int param_1,undefined4 param_2,uint param_3);
extern int DAT_001dee38;
extern undefined4 DAT_001dee3c;
extern undefined4 DAT_001dee40;
extern undefined4 DAT_001dee44;
extern undefined4 DAT_001dee48;
extern undefined4 DAT_001dee4c;
extern int *DAT_001dee50;
extern undefined *DAT_001dee54;
extern undefined4 DAT_001dee58;
extern undefined4 DAT_001dee5c;
extern undefined4 DAT_001dee60;
extern undefined *PTR_001dee64;
extern undefined *PTR_001dee68;
extern undefined *PTR_001dee6c;
extern undefined *PTR_001dee70;
extern undefined *PTR_001dee74;
extern undefined *PTR_001df3dc;
extern undefined *PTR_001df3e0;
extern undefined *PTR_001df3e4;
extern undefined *PTR_001df3e8;
extern undefined *PTR_001df3ec;
extern undefined *PTR_001df3f0;
extern undefined *PTR_001df3f4;
extern undefined *PTR_001df3f8;
extern undefined *PTR_001df3fc;
extern undefined *PTR_001df400;
extern undefined *PTR_001df404;
extern undefined *PTR_001df408;
extern undefined *PTR_001df40c;
extern undefined *PTR_001df410;
extern undefined *PTR_001df414;
extern undefined *PTR_001df418;
extern undefined *PTR_001df41c;
extern undefined *PTR_001df420;
extern undefined *PTR_001df424;
extern undefined *PTR_001df428;
extern undefined *PTR_001df42c;
extern undefined *PTR_001df430;
extern undefined *PTR_001df434;
extern undefined *PTR_001df438;

// USA 001DEA54 <- EU 001DEA54 (Ghidra, non-matching)
// GLOBAL DAT_001dee38 int
// GLOBAL DAT_001dee3c undefined4
// GLOBAL DAT_001dee40 undefined4
// GLOBAL DAT_001dee44 undefined4
// GLOBAL DAT_001dee48 undefined4
// GLOBAL DAT_001dee4c undefined4
// GLOBAL DAT_001dee50 int *
// GLOBAL DAT_001dee54 undefined *
// GLOBAL DAT_001dee58 undefined4
// GLOBAL DAT_001dee5c undefined4
// GLOBAL DAT_001dee60 undefined4
// GLOBAL PTR_001dee64 undefined *
// GLOBAL PTR_001dee68 undefined *
// GLOBAL PTR_001dee6c undefined *
// GLOBAL PTR_001dee70 undefined *
// GLOBAL PTR_001dee74 undefined *
// GLOBAL PTR_001df3dc undefined *
// GLOBAL PTR_001df3e0 undefined *
// GLOBAL PTR_001df3e4 undefined *
// GLOBAL PTR_001df3e8 undefined *
// GLOBAL PTR_001df3ec undefined *
// GLOBAL PTR_001df3f0 undefined *
// GLOBAL PTR_001df3f4 undefined *
// GLOBAL PTR_001df3f8 undefined *
// GLOBAL PTR_001df3fc undefined *
// GLOBAL PTR_001df400 undefined *
// GLOBAL PTR_001df404 undefined *
// GLOBAL PTR_001df408 undefined *
// GLOBAL PTR_001df40c undefined *
// GLOBAL PTR_001df410 undefined *
// GLOBAL PTR_001df414 undefined *
// GLOBAL PTR_001df418 undefined *
// GLOBAL PTR_001df41c undefined *
// GLOBAL PTR_001df420 undefined *
// GLOBAL PTR_001df424 undefined *
// GLOBAL PTR_001df428 undefined *
// GLOBAL PTR_001df42c undefined *
// GLOBAL PTR_001df430 undefined *
// GLOBAL PTR_001df434 undefined *
// GLOBAL PTR_001df438 undefined *

int func_001DEA54(undefined4 *param_1,uint *param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  float fparam_0;
  undefined8 uVar14;
  undefined4 uVar15;
  
  piVar2 = func_00150E40(param_1,param_2);
  iVar6 = DAT_001dee38;
  piVar2[200] = DAT_001dee38 + 0x5c;
  *piVar2 = iVar6;
  puVar3 = func_00255D9C(piVar2 + 0x103,piVar2);
  puVar4 = func_00149D2C((undefined1 *)(puVar3 + 99));
  uVar7 = DAT_001dee3c;
  puVar11 = puVar4 + -0x598;
  *(undefined4 *)(puVar4 + 4) = DAT_001dee3c;
  *(undefined4 *)(puVar4 + 8) = uVar7;
  *(undefined4 *)(puVar4 + 0xc) = uVar7;
  uVar14 = CONCAT44(uVar7,DAT_001dee40);
  *(undefined4 *)(puVar4 + 0x10) = DAT_001dee40;
  *(undefined4 *)(puVar4 + 0x28) = 0;
  func_001E45E0(puVar4 + 0x14);
  iVar5 = func_0010BAB4(DAT_001dee44);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = func_001FE6C8(iVar5);
  }
  *(int *)(puVar4 + 0x5c) = iVar6;
  puVar3 = (undefined4 *)func_0010BAB4(0x3c);
  uVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = func_002D40FC(puVar3);
  }
  *(undefined4 *)(puVar4 + 0x60) = uVar7;
  puVar3 = (undefined4 *)func_0010BAB4(0x38);
  uVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = func_0031E4DC(puVar3,puVar11);
  }
  *(undefined4 *)(puVar4 + 100) = uVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0x144);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_0028C954(puVar8);
  }
  *(undefined4 **)(puVar4 + 0x68) = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(DAT_001dee48);
  iVar6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = func_003441F0(puVar3,(int)puVar11);
  }
  *(int *)(puVar4 + 0x6c) = iVar6;
  puVar3 = (undefined4 *)func_0010BAB4(DAT_001dee4c);
  iVar6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = func_003623F8(puVar3,(int)puVar11);
  }
  *(int *)(puVar4 + 0x70) = iVar6;
  *(undefined4 *)(puVar4 + 0x74) = 0;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_0038F174(puVar8,(int)puVar11);
  }
  *(undefined4 **)(puVar4 + 0x78) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x17c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002933AC(puVar8,(int)puVar11);
  }
  *(undefined4 **)(puVar4 + 0x7c) = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(0x34);
  uVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = func_002D1348(puVar3,puVar11,*(undefined4 *)(puVar4 + 0x7c));
  }
  *(undefined4 *)(puVar4 + 0x80) = uVar7;
  puVar3 = (undefined4 *)func_0010BAB4(0x3c);
  uVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = func_002D4C30(puVar3,*(int *)(*DAT_001dee50 + 0x10));
  }
  *(undefined4 *)(puVar4 + 0x84) = uVar7;
  *(undefined4 *)(puVar4 + 0x88) = 0;
  *(undefined4 *)(puVar4 + 0x8c) = 0;
  *(undefined4 *)(puVar4 + 0x90) = 0;
  puVar1 = DAT_001dee54;
  *(undefined4 *)(puVar4 + 0x94) = 0;
  iVar6 = func_00100118((int)(puVar4 + 0xfc),puVar1,0xc,3);
  *(undefined1 *)(iVar6 + 0x25) = 0;
  *(undefined1 *)(iVar6 + 0x26) = 0;
  *(undefined1 *)(iVar6 + 0x27) = 0;
  *(undefined1 *)(iVar6 + 0x28) = 1;
  *(undefined1 *)(iVar6 + 0x29) = 0;
  *(undefined1 *)(iVar6 + 0x2a) = 0;
  *(undefined1 *)(iVar6 + 0x2b) = 0;
  *(undefined1 *)(iVar6 + 0x2c) = 0;
  *(undefined1 *)(iVar6 + 0x2d) = 0;
  *(undefined1 *)(iVar6 + 0x2e) = 0;
  *(undefined1 *)(iVar6 + 0x2f) = 0;
  *(undefined1 *)(iVar6 + 0x30) = 0;
  *(undefined1 *)(iVar6 + 0x31) = 0;
  *(undefined1 *)(iVar6 + 0x32) = 0;
  uVar7 = DAT_001dee58;
  *(undefined1 *)(iVar6 + 0x33) = 0;
  *(undefined1 *)(iVar6 + 0x34) = 0;
  *(undefined4 *)(iVar6 + 0x38) = uVar7;
  *(int *)(iVar6 + 0x3c) = (int)uVar14;
  *(undefined4 *)(iVar6 + 0x40) = 0;
  *(undefined4 *)(iVar6 + 0x48) = 0;
  iVar6 = func_001E6898((undefined4 *)(iVar6 + 0x50));
  uVar7 = DAT_001dee5c;
  iVar5 = iVar6 + -0x6e4;
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)(iVar6 + 0x28) = uVar15;
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  *(undefined4 *)(iVar6 + 0x30) = uVar15;
  *(undefined4 *)(iVar6 + 0x34) = uVar7;
  uVar7 = DAT_001dee60;
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar6 + -0x2fc);
  *(undefined4 *)(iVar6 + 0x3c) = uVar7;
  *(undefined4 *)(iVar6 + 0x40) = uVar15;
  *(uint *)(iVar6 + -0x404) = *(uint *)(iVar6 + -0x404) | 2;
  func_004ECF6C(iVar5);
  iVar12 = 0;
  do {
    func_002D4404((undefined4 *)(iVar6 + -0x50 + iVar12 * 0xc),iVar5,(int)(char)iVar12);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  func_003614CC((int *)0x0);
  func_003613F0(*(int *)PTR_001dee64,iVar5,*(undefined4 *)(iVar6 + -0xd0));
  piVar2 = func_0054D8B0(*(int *)(iVar6 + -0x414) + 0x18,iVar5,0);
  *(int **)(iVar6 + -0xd8) = piVar2;
  iVar9 = 1;
  iVar12 = 1;
  *(undefined4 *)(iVar6 + -0xb4) = 0;
  do {
    iVar10 = iVar9 + 1;
    iVar12 = iVar12 + 2;
    *(undefined4 *)(iVar5 + iVar9 * 4 + 0x630) = 0;
    iVar9 = iVar9 + 2;
    *(undefined4 *)(iVar5 + iVar10 * 4 + 0x630) = 0;
  } while (iVar12 < 0x19);
  puVar8 = (undefined4 *)func_0010BAB4(0x2c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001dee68;
  }
  *(undefined4 **)(iVar6 + -0xb4) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001dee6c;
  }
  *(undefined4 **)(iVar6 + -0xb0) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001dee70;
  }
  *(undefined4 **)(iVar6 + -0xac) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001dee74;
  }
  *(undefined4 **)(iVar6 + -0xa8) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3dc;
  }
  *(undefined4 **)(iVar6 + -0xa4) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x30);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar13 = *(undefined4 **)(iVar6 + -0xa4);
    if (((*(uint *)PTR_001df3e0 & 1) == 0) &&
       (iVar12 = func_00100174((int *)PTR_001df3e0), iVar12 != 0)) {
      *(undefined **)PTR_001df3e4 = PTR_001df3e8;
    }
    if ((puVar13 == (undefined4 *)0x0) ||
       (iVar12 = (**(code **)*puVar13)(puVar13,PTR_001df3e4), iVar12 == 0)) {
      puVar13 = (undefined4 *)0x0;
    }
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3ec;
    puVar3[7] = puVar13;
    puVar3[8] = 0xffffffff;
    uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
    puVar3[9] = uVar7;
    puVar3[10] = uVar7;
    puVar3[0xb] = uVar7;
  }
  *(undefined4 **)(iVar6 + -0xa0) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3f0;
  }
  *(undefined4 **)(iVar6 + -0x9c) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3f4;
  }
  *(undefined4 **)(iVar6 + -0x98) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3f8;
    puVar3[7] = 0xffffffff;
  }
  *(undefined4 **)(iVar6 + -0x94) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df3fc;
    puVar3[7] = 0;
  }
  *(undefined4 **)(iVar6 + -0x90) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x2c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df400;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
  }
  *(undefined4 **)(iVar6 + -0x8c) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x60);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    puVar1 = PTR_001df408;
    *puVar3 = PTR_001df404;
    puVar3[7] = puVar1;
    puVar3[8] = puVar3;
    puVar3[9] = 0xffffffff;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0xffffffff;
    puVar3[0xe] = 0;
    uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
    puVar3[0xf] = uVar7;
    puVar3[0x10] = uVar7;
    puVar3[0x11] = uVar7;
    puVar3[0x12] = uVar7;
    puVar3[0x13] = uVar7;
    puVar3[0x14] = uVar7;
    puVar3[0x15] = uVar7;
    puVar3[0x16] = uVar7;
    puVar3[0x17] = uVar7;
  }
  fparam_0 = ALBW_AS_F32(uVar14);
  *(undefined4 **)(iVar6 + -0x88) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df40c;
  }
  *(undefined4 **)(iVar6 + -0x84) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df410;
  }
  *(undefined4 **)(iVar6 + -0x80) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df414;
  }
  *(undefined4 **)(iVar6 + -0x7c) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df418;
  }
  *(undefined4 **)(iVar6 + -0x78) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    puVar1 = PTR_001df41c;
    *(undefined1 *)(puVar3 + 7) = 0;
    *puVar3 = puVar1;
  }
  *(undefined4 **)(iVar6 + -0x74) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    puVar1 = PTR_001df420;
    *(undefined1 *)(puVar3 + 7) = 0;
    *puVar3 = puVar1;
  }
  *(undefined4 **)(iVar6 + -0x70) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar1 = PTR_001df424;
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
    *(undefined1 *)(puVar3 + 7) = 0;
  }
  *(undefined4 **)(iVar6 + -0x68) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
    *(undefined1 *)(puVar3 + 7) = 1;
  }
  *(undefined4 **)(iVar6 + -0x6c) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar1 = PTR_001df428;
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
  }
  *(undefined4 **)(iVar6 + -100) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
  }
  *(undefined4 **)(iVar6 + -100) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x2c);
  puVar1 = PTR_001df42c;
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
    *(undefined1 *)(puVar3 + 7) = 1;
    puVar8 = func_0014D9B4(puVar3 + 8,fparam_0);
    puVar3 = puVar8 + -8;
    puVar8[2] = 0;
  }
  *(undefined4 **)(iVar6 + -0x60) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x2c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = puVar1;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar8 = func_0014D9B4(puVar3 + 8,fparam_0);
    puVar3 = puVar8 + -8;
    puVar8[2] = 0;
  }
  *(undefined4 **)(iVar6 + -0x5c) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df430;
  }
  *(undefined4 **)(iVar6 + -0x58) = puVar3;
  puVar8 = (undefined4 *)func_0010BAB4(0x1c);
  puVar3 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar3 = func_002D43C8(puVar8,iVar6 + -0x2d8);
    *puVar3 = PTR_001df434;
  }
  *(undefined4 **)(iVar6 + -0x54) = puVar3;
  func_0014A0E8(*(int *)PTR_001df438,iVar5);
  return iVar5;
}

