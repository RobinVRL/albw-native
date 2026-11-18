#include "ghidra_types.h"

extern int func_001E70EC(undefined4 *param_1,uint *param_2);
extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_00290294(int param_1,int param_2);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int DAT_00394620;
extern undefined4 *DAT_00394624;
extern int DAT_00394628;
extern int DAT_0039462c;
extern undefined4 *DAT_00394630;
extern int *DAT_00394634;
extern undefined4 DAT_00394638;
extern undefined4 DAT_0039463c;
extern undefined4 DAT_00394640;
extern undefined4 DAT_00394644;
extern int *DAT_00394648;
extern int *DAT_0039464c;

// USA 0039433C <- EU 00394318 (Ghidra, non-matching)
// GLOBAL DAT_00394620 int
// GLOBAL DAT_00394624 undefined4 *
// GLOBAL DAT_00394628 int
// GLOBAL DAT_0039462c int
// GLOBAL DAT_00394630 undefined4 *
// GLOBAL DAT_00394634 int *
// GLOBAL DAT_00394638 undefined4
// GLOBAL DAT_0039463c undefined4
// GLOBAL DAT_00394640 undefined4
// GLOBAL DAT_00394644 undefined4
// GLOBAL DAT_00394648 int *
// GLOBAL DAT_0039464c int *

int func_0039433C(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  
  piVar3 = (int *)func_001E70EC(param_1,param_2);
  puVar1 = DAT_00394624;
  iVar8 = DAT_00394620;
  piVar3[200] = DAT_00394620 + 0x9c;
  *piVar3 = iVar8;
  piVar3[0x2bd] = 0;
  iVar8 = puVar1[5];
  piVar3[0x2be] = puVar1[4];
  piVar3[0x2bf] = iVar8;
  piVar3[700] = DAT_00394628;
  piVar3[0x2c1] = 0;
  iVar8 = puVar1[7];
  piVar3[0x2c2] = puVar1[6];
  piVar3[0x2c3] = iVar8;
  piVar3[0x2c0] = DAT_0039462c;
  puVar4 = func_002E1BB4(piVar3 + 0x2c4,0);
  puVar2 = DAT_00394630;
  uVar9 = DAT_00394630[1];
  uVar12 = DAT_00394630[2];
  puVar4[2] = *DAT_00394630;
  puVar4[3] = uVar9;
  puVar4[4] = uVar12;
  uVar9 = puVar2[1];
  uVar12 = puVar2[2];
  puVar4[5] = *puVar2;
  puVar4[6] = uVar9;
  puVar4[7] = uVar12;
  uVar9 = *puVar2;
  uVar12 = puVar2[1];
  puVar4[10] = puVar2[2];
  puVar4[8] = uVar9;
  puVar4[9] = uVar12;
  piVar3 = DAT_00394634;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0xffffffff;
  uVar9 = func_0055696C(*piVar3,0);
  puVar4[0xd] = uVar9;
  uVar9 = func_0055696C(*piVar3,1);
  puVar4[0xe] = uVar9;
  uVar9 = func_0055696C(*piVar3,0x1f);
  puVar4[0xf] = uVar9;
  puVar4[0x11] = 0xf0;
  uVar9 = DAT_00394638;
  puVar4[0x10] = 0;
  uVar12 = DAT_0039463c;
  puVar4[0x12] = uVar9;
  puVar4[0x14] = uVar12;
  puVar4[0x13] = 0;
  puVar4[0x15] = uVar9;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = uVar9;
  uVar9 = DAT_00394644;
  puVar4[0x1a] = DAT_00394640;
  puVar4[0x1b] = uVar9;
  puVar4[0x19] = 0;
  iVar8 = func_003673F4(puVar4 + 0x1c,3);
  *(undefined1 *)(iVar8 + 0x38) = 0;
  *(undefined1 *)(iVar8 + 0x39) = 0;
  iVar10 = iVar8 + -0xb80;
  *(undefined1 *)(iVar8 + 0x3a) = 0;
  func_00255484(*piVar3,0,3);
  func_00255484(*piVar3,0x1f,2);
  func_00255484(*piVar3,1,0);
  func_0036720C(iVar8,1,0xf0,0xf0,0,3,1);
  uVar9 = *puVar1;
  uVar12 = puVar1[1];
  *(int *)(iVar8 + -0x8c) = iVar10;
  *(undefined4 *)(iVar8 + -0x88) = uVar9;
  *(undefined4 *)(iVar8 + -0x84) = uVar12;
  uVar9 = puVar1[2];
  uVar12 = puVar1[3];
  *(int *)(iVar8 + -0x7c) = iVar10;
  *(undefined4 *)(iVar8 + -0x78) = uVar9;
  *(undefined4 *)(iVar8 + -0x74) = uVar12;
  *(int *)(iVar8 + -0xec) = iVar8 + -0x90;
  *(int *)(iVar8 + -0xe8) = iVar8 + -0x80;
  func_00290294(*piVar3,0);
  iVar5 = *DAT_00394648;
  if (((iVar5 != 0) && (*(char *)(iVar5 + 0x18) == '\0')) && (*(int *)(iVar5 + 0x1c) == 0x2b)) {
    *(undefined1 *)(iVar8 + 0x3a) = 1;
  }
  uVar11 = param_2[0xa7];
  if (-1 < (int)uVar11) {
    iVar5 = *DAT_0039464c;
    iVar6 = func_00581B9C(iVar5);
    if ((iVar6 == 1) && (puVar7 = (uint *)func_00582250(iVar5), uVar11 < *puVar7)) {
      uVar11 = *(uint *)(puVar7[2] + uVar11 * 4);
    }
    else {
      uVar11 = 0;
    }
    iVar5 = 0;
    if (*(int **)(uVar11 + 0x28) != (int *)0x0) {
      if (*(int *)(uVar11 + 0x20) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(uVar11 + 0x28);
      }
    }
    *(undefined4 *)(iVar8 + -0x68) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(iVar8 + -100) = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)(iVar8 + -0x60) = *(undefined4 *)(iVar5 + 0x20);
    iVar5 = *(int *)(uVar11 + 0x28);
    if (iVar5 != 0) {
      uVar11 = *(uint *)(uVar11 + 0x20);
    }
    if (iVar5 != 0 && 1 < uVar11) {
      iVar5 = *(int *)(iVar5 + 4);
    }
    else {
      iVar5 = 0;
    }
    *(undefined4 *)(iVar8 + -0x5c) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(iVar8 + -0x58) = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)(iVar8 + -0x54) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(iVar8 + -0x50) = *(undefined4 *)(iVar8 + -0x68);
    *(undefined4 *)(iVar8 + -0x4c) = *(undefined4 *)(iVar8 + -100);
    *(undefined4 *)(iVar8 + -0x48) = *(undefined4 *)(iVar8 + -0x60);
  }
  return iVar10;
}

