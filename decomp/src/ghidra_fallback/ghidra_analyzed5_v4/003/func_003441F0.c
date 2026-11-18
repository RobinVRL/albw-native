#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_002D34B4(undefined4 *param_1,undefined4 param_2);
extern int func_003402A8(int param_1);
extern int func_00341328(int param_1);
extern int func_0038AF14(undefined1 *param_1);
extern int *DAT_00344604;
extern int DAT_00344608;
extern int DAT_0034460c;
extern int DAT_00344610;
extern int DAT_00344614;
extern undefined *DAT_00344618;
extern undefined4 DAT_0034461c;
extern undefined *DAT_00344620;
extern undefined *DAT_00344624;
extern undefined4 *DAT_00344628;

// USA 003441F0 <- EU 003441CC (Ghidra, non-matching)
// GLOBAL DAT_00344604 int *
// GLOBAL DAT_00344608 int
// GLOBAL DAT_0034460c int
// GLOBAL DAT_00344610 int
// GLOBAL DAT_00344614 int
// GLOBAL DAT_00344618 undefined *
// GLOBAL DAT_0034461c undefined4
// GLOBAL DAT_00344620 undefined *
// GLOBAL DAT_00344624 undefined *
// GLOBAL DAT_00344628 undefined4 *

int func_003441F0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar3 = func_0010DA7C(param_1,0,3);
  piVar1 = DAT_00344604;
  piVar3[5] = DAT_00344608;
  iVar9 = *piVar1;
  piVar3[8] = piVar1[1];
  piVar3[6] = (int)(piVar3 + 4);
  piVar3[7] = iVar9;
  iVar9 = DAT_0034460c;
  piVar3[4] = DAT_0034460c + 0x1c;
  *piVar3 = iVar9;
  piVar3[9] = param_2;
  puVar4 = (undefined4 *)func_0010BAB4(0x104);
  iVar9 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar9 = func_002D34B4(puVar4,param_2);
  }
  piVar3[10] = iVar9;
  piVar3[0xb] = *(int *)(*(int *)(param_2 + 0x600) + 0x30);
  piVar3[0xc] = 0;
  piVar3[0xd] = *(int *)(param_2 + 0x5fc);
  iVar9 = DAT_00344610;
  piVar3[0xe] = *(int *)(param_2 + 0x600);
  piVar3[0xf] = param_2 + 0x3d0;
  piVar3[0x10] = param_2 + 0x368;
  piVar3[0x11] = param_2 + 0x3dc;
  piVar3[0x12] = param_2 + 1000;
  piVar3[0x13] = param_2 + 0x5ac;
  iVar8 = DAT_00344614;
  piVar3[0x14] = *(int *)(param_2 + 0x5f4);
  piVar3[0x15] = iVar9;
  piVar3[0x16] = iVar8;
  piVar3[0x18] = param_2 + 0x59c;
  piVar3[0x17] = 0;
  puVar2 = DAT_00344618;
  piVar3[0x19] = *(int *)(param_2 + 0x2cc);
  *(undefined1 *)(piVar3 + 0x20) = 0;
  piVar3[0x21] = 0;
  *(undefined2 *)(piVar3 + 0x22) = 0;
  *(undefined1 *)((int)piVar3 + 0x8a) = 0;
  iVar5 = func_00100118((int)(piVar3 + 0x24),puVar2,0x28,4);
  *(undefined1 *)(iVar5 + 0xb8) = 0;
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  *(undefined2 *)(iVar5 + 0xc0) = 0;
  *(undefined1 *)(iVar5 + 0xc2) = 0;
  *(int *)(iVar5 + 200) = iVar9;
  *(int *)(iVar5 + 0xcc) = iVar8;
  *(int *)(iVar5 + 0xd0) = iVar9;
  *(undefined1 *)(iVar5 + 0xd4) = 0;
  *(undefined1 *)(iVar5 + 0xd5) = 0;
  *(undefined1 *)(iVar5 + 0xd6) = 1;
  *(undefined1 *)(iVar5 + 0xd7) = 0;
  *(undefined1 *)(iVar5 + 0xd8) = 0;
  *(undefined1 *)(iVar5 + 0xd9) = 0;
  *(undefined1 *)(iVar5 + 0xda) = 0;
  *(undefined1 *)(iVar5 + 0xdb) = 0;
  *(undefined1 *)(iVar5 + 0xdc) = 1;
  *(undefined1 *)(iVar5 + 0xdd) = 0;
  *(undefined1 *)(iVar5 + 0xde) = 0;
  *(int *)(iVar5 + 0xe0) = iVar9;
  *(int *)(iVar5 + 0xe4) = iVar8;
  *(int *)(iVar5 + 0xe8) = iVar9;
  *(int *)(iVar5 + 0xec) = iVar9;
  *(int *)(iVar5 + 0xf0) = iVar8;
  *(undefined4 *)(iVar5 + 0xf8) = 0;
  iVar10 = piVar1[0xd];
  *(int *)(iVar5 + 0xfc) = piVar1[0xc];
  *(int *)(iVar5 + 0x100) = iVar10;
  uVar6 = DAT_0034461c;
  *(undefined4 *)(iVar5 + 0xf4) = DAT_0034461c;
  *(undefined4 *)(iVar5 + 0x108) = 0;
  iVar10 = piVar1[0xc];
  iVar11 = piVar1[0xd];
  *(undefined4 *)(iVar5 + 0x104) = uVar6;
  *(int *)(iVar5 + 0x10c) = iVar10;
  *(int *)(iVar5 + 0x110) = iVar11;
  *(undefined4 *)(iVar5 + 0x118) = 0;
  iVar10 = piVar1[0xc];
  iVar11 = piVar1[0xd];
  *(undefined4 *)(iVar5 + 0x114) = uVar6;
  *(int *)(iVar5 + 0x11c) = iVar10;
  *(int *)(iVar5 + 0x120) = iVar11;
  *(undefined4 *)(iVar5 + 0x128) = 0;
  iVar10 = piVar1[0xc];
  iVar11 = piVar1[0xd];
  *(undefined4 *)(iVar5 + 0x124) = uVar6;
  *(int *)(iVar5 + 300) = iVar10;
  *(int *)(iVar5 + 0x130) = iVar11;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  iVar10 = piVar1[0xc];
  iVar11 = piVar1[0xd];
  *(undefined4 *)(iVar5 + 0x134) = uVar6;
  *(int *)(iVar5 + 0x13c) = iVar10;
  *(int *)(iVar5 + 0x140) = iVar11;
  *(int *)(iVar5 + 0x144) = iVar9;
  *(int *)(iVar5 + 0x148) = iVar9;
  *(int *)(iVar5 + 0x14c) = iVar9;
  *(undefined1 *)(iVar5 + 0x150) = 0;
  *(undefined4 *)(iVar5 + 0x154) = 0;
  *(int *)(iVar5 + 0x158) = iVar9;
  *(int *)(iVar5 + 0x15c) = iVar9;
  *(int *)(iVar5 + 0x160) = iVar9;
  *(undefined4 *)(iVar5 + 0x164) = 0;
  *(undefined4 *)(iVar5 + 0x168) = 0x40;
  *(undefined4 *)(iVar5 + 0x16c) = 0;
  puVar2 = DAT_00344620;
  if (iVar5 + 0x170 != 0) {
    *(int *)(iVar5 + 0x16c) = iVar5 + 0x170;
  }
  iVar5 = func_00100118(iVar5 + 0x170,puVar2,4,0x40);
  *(undefined1 *)(iVar5 + 0x100) = 0;
  *(undefined4 *)(iVar5 + 0x104) = 0;
  *(undefined4 *)(iVar5 + 0x114) = 0;
  func_0038AF14((undefined1 *)(iVar5 + 0x100));
  *(undefined1 *)(iVar5 + 0x124) = 0;
  *(undefined4 *)(iVar5 + 0x128) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  func_0038AF14((undefined1 *)(iVar5 + 0x124));
  iVar5 = func_00100118(iVar5 + 0x148,DAT_00344624,0xc,10);
  iVar5 = func_00100118(iVar5 + 0x88,DAT_00344620,4,10);
  puVar2 = DAT_00344624;
  *(undefined4 *)(iVar5 + -4) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x2c) = 0;
  iVar5 = func_00100118(iVar5 + 0x30,puVar2,0xc,10);
  iVar5 = func_00100118(iVar5 + 0x88,DAT_00344620,4,10);
  puVar4 = DAT_00344628;
  *(undefined4 *)(iVar5 + -4) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x2c) = 0;
  *(undefined1 *)(iVar5 + 0x31) = 0;
  *(undefined1 *)(iVar5 + 0x32) = 0;
  *(undefined1 *)(iVar5 + 0x33) = 0;
  iVar10 = iVar5 + -0x488;
  *(undefined1 *)(iVar5 + 0x34) = 0;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  *(undefined4 *)(iVar5 + 0x5c) = *puVar4;
  *(undefined4 *)(iVar5 + 0x60) = uVar6;
  *(undefined4 *)(iVar5 + 100) = uVar7;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  *(undefined4 *)(iVar5 + 0x70) = 0;
  *(int *)(iVar5 + 0x74) = iVar8;
  *(int *)(iVar5 + 0x78) = iVar8;
  *(int *)(iVar5 + 0x88) = iVar9;
  *(int *)(iVar5 + 0x8c) = iVar9;
  *(int *)(iVar5 + 0x90) = iVar9;
  *(int *)(iVar5 + 0x94) = iVar9;
  *(int *)(iVar5 + 0x98) = iVar9;
  *(int *)(iVar5 + 0x9c) = iVar9;
  *(undefined1 *)(iVar5 + 0xa0) = 0;
  *(undefined1 *)(iVar5 + 0xa1) = 0;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  *(undefined1 *)(iVar5 + 0xa3) = 0;
  *(undefined1 *)(iVar5 + 0xa4) = 0;
  *(undefined1 *)(iVar5 + 0xa5) = 0;
  *(undefined1 *)(iVar5 + 0xa6) = 0;
  *(undefined1 *)(iVar5 + 0xac) = 0;
  *(undefined4 *)(iVar5 + 0xb0) = 0;
  iVar9 = piVar1[2];
  iVar8 = piVar1[3];
  *(int *)(iVar5 + -0x300) = iVar10;
  *(int *)(iVar5 + -0x2fc) = iVar9;
  *(int *)(iVar5 + -0x2f8) = iVar8;
  iVar9 = piVar1[4];
  iVar8 = piVar1[5];
  *(int *)(iVar5 + -0x2f0) = iVar10;
  *(int *)(iVar5 + -0x2ec) = iVar9;
  *(int *)(iVar5 + -0x2e8) = iVar8;
  iVar9 = piVar1[6];
  iVar8 = piVar1[7];
  *(int *)(iVar5 + -0x2e0) = iVar10;
  *(int *)(iVar5 + -0x2dc) = iVar9;
  *(int *)(iVar5 + -0x2d8) = iVar8;
  iVar9 = piVar1[8];
  iVar8 = piVar1[9];
  *(int *)(iVar5 + -0x2d0) = iVar10;
  *(int *)(iVar5 + -0x2cc) = iVar9;
  *(int *)(iVar5 + -0x2c8) = iVar8;
  iVar9 = piVar1[10];
  iVar8 = piVar1[0xb];
  *(int *)(iVar5 + -0x2c0) = iVar10;
  *(int *)(iVar5 + -700) = iVar9;
  *(int *)(iVar5 + -0x2b8) = iVar8;
  *(undefined4 *)(iVar5 + -0x420) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(iVar5 + -0x41c) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(iVar5 + -0x418) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(iVar5 + -0x414) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(iVar5 + -0x410) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(iVar5 + -0x40c) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined1 *)(iVar5 + -0x3fc) = 0;
  *(undefined4 *)(iVar5 + -0x358) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(iVar5 + -0x354) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(iVar5 + -0x350) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(iVar5 + -0x34c) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(iVar5 + -0x348) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(iVar5 + -0x344) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined1 *)(iVar5 + -0x334) = 0;
  iVar9 = 0;
  do {
    iVar8 = iVar9 + 1;
    iVar9 = iVar10 + iVar9 * 0x28;
    *(undefined4 *)(iVar9 + 0x90) = *(undefined4 *)(iVar5 + -0x420);
    *(undefined4 *)(iVar9 + 0x94) = *(undefined4 *)(iVar5 + -0x41c);
    *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar5 + -0x418);
    *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar5 + -0x414);
    *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar5 + -0x410);
    *(undefined4 *)(iVar9 + 0xa4) = *(undefined4 *)(iVar5 + -0x40c);
    *(undefined1 *)(iVar9 + 0xb4) = 0;
    iVar9 = iVar8;
  } while (iVar8 < 4);
  *(undefined4 *)(*(int *)(iVar5 + -0x45c) + 0x168) = 0x80000000;
  func_003402A8(iVar10);
  func_00341328(iVar10);
  return iVar10;
}

