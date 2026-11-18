#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_003CD2EC(undefined4 *param_1);
extern int func_003E70C8(int *param_1);
extern int func_003ECB98(int *param_1);
extern int func_003F35A8(undefined4 *param_1);
extern int func_003F3600(int param_1);
extern undefined8 func_003F3854(int *param_1,int *param_2,int param_3,int param_4);
extern int func_003F8660(undefined4 *param_1);
extern undefined *DAT_003f770c;
extern int *DAT_003f7710;
extern uint DAT_003f7714;
extern undefined4 DAT_003f7718;
extern undefined4 DAT_003f771c;
extern undefined4 DAT_003f7720;
extern undefined4 DAT_003f7724;
extern undefined4 DAT_003f7728;
extern int DAT_003f772c;
extern int DAT_003f7730;
extern int *DAT_003f7734;
extern undefined4 DAT_003f7738;
extern undefined *DAT_003f773c;
extern undefined *DAT_003f7740;
extern undefined *DAT_003f7744;

// USA 003F6FF4 <- EU 003F6FD4 (Ghidra, non-matching)
// GLOBAL DAT_003f770c undefined *
// GLOBAL DAT_003f7710 int *
// GLOBAL DAT_003f7714 uint
// GLOBAL DAT_003f7718 undefined4
// GLOBAL DAT_003f771c undefined4
// GLOBAL DAT_003f7720 undefined4
// GLOBAL DAT_003f7724 undefined4
// GLOBAL DAT_003f7728 undefined4
// GLOBAL DAT_003f772c int
// GLOBAL DAT_003f7730 int
// GLOBAL DAT_003f7734 int *
// GLOBAL DAT_003f7738 undefined4
// GLOBAL DAT_003f773c undefined *
// GLOBAL DAT_003f7740 undefined *
// GLOBAL DAT_003f7744 undefined *

void func_003F6FF4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_90 ((undefined4 *)(albw_frame + 0x0))
  #define local_30 (*(int * *)(albw_frame + 0x60))
  local_30 = (int *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x14);
  iVar10 = *(int *)(param_3 + 8);
  piVar12 = (int *)(param_1 + 0x44c);
  *(int *)(param_1 + 0x448) = iVar10;
  iVar3 = *(int *)(param_3 + 0xc);
  *(int *)(param_1 + 0x44c) = iVar3;
  iVar13 = *(int *)(param_3 + 0x10);
  *(int *)(param_1 + 0x18) = iVar13;
  iVar11 = *(int *)(param_3 + 0x18);
  *(int *)(param_1 + 0x450) = iVar11;
  *(int *)(param_1 + 0x454) = iVar10 + -1;
  *(int *)(param_1 + 0x458) = iVar3 + -1;
  *(int *)(param_1 + 0x1c) = iVar13 + -1;
  *(int *)(param_1 + 0x328) = iVar10;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(int *)(param_1 + 0x45c) = iVar11 + -1;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4bc) = 0xffffffff;
  func_00110490((undefined4 *)(param_1 + 0x20),0x100);
  func_00110490((undefined4 *)(param_1 + 0x120),0x100);
  func_00110490((undefined4 *)(param_1 + 0x220),0x100);
  func_00110490((undefined4 *)(param_1 + 0x340),0x100);
  func_003E70C8(*(int **)(param_1 + 8));
  puVar4 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))
                     (*(int **)(param_1 + 8),*(int *)(param_1 + 0x10) * 4 + 0x40,0x80);
  *(undefined4 **)(param_1 + 0x4a0) = puVar4;
  *(undefined4 **)(param_1 + 0xc) = puVar4;
  func_001164F4(puVar4,*(int *)(param_1 + 0x10) * 4 + 0x40);
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x18) * 0x288 + 0x20,0x80);
  *(int *)(param_1 + 0x4a4) = iVar3;
  if (iVar3 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)func_00100118(iVar3,DAT_003f770c,0x288,*(int *)(param_1 + 0x18));
  }
  *(int **)(param_1 + 0x14) = piVar9;
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18) & 1;
    if (uVar5 == 1) {
      *piVar9 = param_1;
    }
  }
  if ((int)uVar5 < *(int *)(param_1 + 0x18)) {
    do {
      uVar6 = uVar5 + 2;
      *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 0x288) = param_1;
      *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 0x288 + 0x288) = param_1;
      uVar5 = uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x18));
  }
  uVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x448) * 0x2b0,0x80);
  *(undefined4 *)(param_1 + 800) = uVar7;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x448)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 800) + iVar3 * 0x2b0 + 0xd4) = 0;
      pbVar8 = (byte *)func_003F35A8(auStack_90);
      func_00110D44((undefined4 *)(*(int *)(param_1 + 800) + iVar3 * 0x2b0 + 0x23c),pbVar8,0x60);
      func_003F3600((int)auStack_90);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x448));
  }
  uVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x44c) * 0x158,0x80);
  *(undefined4 *)(param_1 + 0x32c) = uVar7;
  uVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),*piVar12 << 4,0x80);
  *(undefined4 *)(param_1 + 0x334) = uVar7;
  uVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),*piVar12 * 0x18,0x80);
  *(undefined4 *)(param_1 + 0x338) = uVar7;
  iVar3 = 0;
  if (0 < *piVar12) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + iVar3 * 0x158 + 0x138) = 0;
      iVar10 = iVar3 + 1;
      *(int *)(*(int *)(param_1 + 0x32c) + iVar3 * 0x158 + 0x60) =
           *(int *)(param_1 + 0x334) + iVar3 * 0x10;
      *(int *)(*(int *)(param_1 + 0x32c) + iVar3 * 0x158 + 0x6c) =
           *(int *)(param_1 + 0x338) + iVar3 * 0x18;
      iVar3 = iVar10;
    } while (iVar10 < *(int *)(param_1 + 0x44c));
  }
  puVar4 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  uVar2 = DAT_003f7720;
  uVar1 = DAT_003f771c;
  uVar7 = DAT_003f7718;
  uVar5 = DAT_003f7714;
  piVar12 = DAT_003f7710;
  uVar14 = (ulonglong)DAT_003f7714;
  *(undefined4 **)(param_1 + 0x4a8) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar7;
    puVar4[1] = uVar1;
    puVar4[2] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 0x19) = 0;
    puVar4[8] = uVar5;
    *piVar12 = param_1;
    *puVar4 = uVar2;
  }
  *(undefined4 **)(param_1 + 0x494) = puVar4;
  puVar4 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  *(undefined4 **)(param_1 + 0x4ac) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar7;
    uVar2 = DAT_003f7724;
    puVar4[1] = uVar1;
    puVar4[2] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 0x19) = 0;
    puVar4[8] = (int)uVar14;
    *piVar12 = param_1;
    *puVar4 = uVar2;
  }
  *(undefined4 **)(param_1 + 0x498) = puVar4;
  puVar4 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  *(undefined4 **)(param_1 + 0x4b0) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar7;
    puVar4[1] = uVar1;
    puVar4[2] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    uVar7 = DAT_003f7728;
    *(undefined1 *)((int)puVar4 + 0x19) = 0;
    puVar4[8] = (int)uVar14;
    *piVar12 = param_1;
    *puVar4 = uVar7;
  }
  *(undefined4 **)(param_1 + 0x49c) = puVar4;
  func_003ECB98(*(int **)(param_1 + 8));
  uVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x450) * DAT_003f772c,0x80);
  *(undefined4 *)(param_1 + 0x33c) = uVar7;
  iVar3 = DAT_003f7730;
  iVar10 = *local_30;
  if (0 < iVar10) {
    iVar13 = DAT_003f7730 + 0x68;
    iVar11 = 0;
    do {
      iVar10 = iVar10 + -1;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar3 + iVar11 * 0x5880) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar11 * 0x5880 + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar11 * 0x5880 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar13 + iVar11 * 0x5880) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(uint *)(param_1 + 0x4e4) = (uint)*(byte *)(param_3 + 0x1c);
  *(uint *)(param_1 + 0x4e8) = (uint)*(byte *)(param_3 + 0x1d);
  *(uint *)(param_1 + 0x4ec) = (uint)*(byte *)(param_3 + 0x1e);
  piVar12 = DAT_003f7734;
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_3 + 0x20);
  piVar9 = *(int **)(param_1 + 8);
  if ((piVar9 != (int *)0x0 || *piVar12 != 0) && (*piVar12 == 0)) {
    puVar4 = (undefined4 *)(**(code **)(*piVar9 + 8))(piVar9,DAT_003f7738,4);
    iVar3 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = func_003F8660(puVar4 + 4);
      puVar4 = func_003F8660(puVar4 + 3);
      puVar4 = func_003F8660(puVar4 + 3);
      iVar3 = func_00100118((int)(puVar4 + 3),DAT_003f773c,0xc,0x1e);
      *(undefined1 *)(iVar3 + 0x168) = 0;
      *(undefined1 *)(iVar3 + 0x169) = 1;
      *(undefined1 *)(iVar3 + 0x16a) = 0xff;
      *(undefined1 *)(iVar3 + 0x16b) = 0xff;
      *(undefined4 *)(iVar3 + 0x16c) = 0;
      *(undefined1 *)(iVar3 + 0x170) = 0;
      *(undefined1 *)(iVar3 + 0x171) = 1;
      *(undefined1 *)(iVar3 + 0x172) = 0xff;
      *(undefined1 *)(iVar3 + 0x173) = 0xff;
      *(undefined4 *)(iVar3 + 0x174) = 0;
      *(undefined1 *)(iVar3 + 0x178) = 0;
      *(undefined1 *)(iVar3 + 0x179) = 1;
      *(undefined1 *)(iVar3 + 0x17a) = 0xff;
      *(undefined1 *)(iVar3 + 0x17b) = 0xff;
      *(undefined4 *)(iVar3 + 0x17c) = 0;
      iVar3 = func_00100118(iVar3 + 0x2e0,DAT_003f7740,0x70,0xc);
      iVar3 = func_00100118(iVar3 + 0x540,DAT_003f7744,0x14,0xc);
      iVar10 = iVar3 + -0x6a0;
      *(undefined4 *)(iVar3 + -0x6a0) = 0;
      func_00110490((undefined4 *)(iVar3 + -0x69c),0x150);
      uVar5 = 0;
      do {
        *(undefined1 *)(iVar10 + uVar5 + 0x154) = 0;
        func_003CD2EC((undefined4 *)(iVar10 + uVar5 * 0x70 + 0x160));
        uVar6 = uVar5 + 1;
        iVar11 = iVar10 + uVar5 * 0x14;
        *(undefined1 *)(iVar11 + 0x6a0) = 0;
        uVar7 = (undefined4)uVar14;
        *(undefined4 *)(iVar11 + 0x6a4) = uVar7;
        *(undefined4 *)(iVar11 + 0x6a8) = uVar7;
        *(undefined4 *)(iVar11 + 0x6ac) = uVar7;
        *(undefined4 *)(iVar11 + 0x6b0) = uVar7;
        uVar5 = uVar6;
      } while (uVar6 < 0xc);
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0;
      *(undefined1 *)(iVar3 + 0xf8) = 0;
      *(undefined4 *)(iVar3 + 0xfc) = 0;
      *(undefined4 *)(iVar3 + 0x100) = 0;
      puVar4 = func_003F8660((undefined4 *)(iVar3 + 0x104));
      puVar4 = func_003F8660(puVar4 + 3);
      puVar4 = func_003F8660(puVar4 + 3);
      puVar4[3] = 0;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      iVar3 = func_00100118((int)(puVar4 + 0x5e),DAT_003f7740,0x70,0xc);
      iVar3 = func_00100118(iVar3 + 0x540,DAT_003f7744,0x14,0xc);
      iVar10 = iVar3 + -0x6a0;
      *(undefined4 *)(iVar3 + -0x6a0) = 0;
      func_00110490((undefined4 *)(iVar3 + -0x69c),0x150);
      uVar5 = 0;
      do {
        *(undefined1 *)(iVar10 + uVar5 + 0x154) = 0;
        func_003CD2EC((undefined4 *)(iVar10 + uVar5 * 0x70 + 0x160));
        uVar6 = uVar5 + 1;
        iVar11 = iVar10 + uVar5 * 0x14;
        *(undefined1 *)(iVar11 + 0x6a0) = 0;
        uVar7 = (undefined4)uVar14;
        *(undefined4 *)(iVar11 + 0x6a4) = uVar7;
        *(undefined4 *)(iVar11 + 0x6a8) = uVar7;
        *(undefined4 *)(iVar11 + 0x6ac) = uVar7;
        *(undefined4 *)(iVar11 + 0x6b0) = uVar7;
        uVar5 = uVar6;
      } while (uVar6 < 0xc);
      iVar3 = iVar3 + -0x1028;
    }
    *piVar12 = iVar3;
  }
  func_003F3854((int *)*piVar12,*(int **)(param_1 + 8),*(int *)(param_1 + 0x4f0),
                *(uint *)(param_1 + 0x4ec) & 0xff);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

