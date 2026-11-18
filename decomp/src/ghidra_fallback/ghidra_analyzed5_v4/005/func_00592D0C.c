#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_001164C4(undefined4 *param_1,uint param_2,uint param_3);
extern int *DAT_005930a0;
extern uint DAT_005930a4;
extern undefined4 DAT_005930a8;
extern undefined4 DAT_005930ac;
extern undefined4 DAT_005930b0;
extern undefined4 DAT_005930b4;
extern uint DAT_005930b8;
extern undefined4 DAT_005930bc;
extern undefined4 DAT_005930c0;
extern undefined4 DAT_005930c4;

// USA 00592D0C <- EU 00592CE4 (Ghidra, non-matching)
// GLOBAL DAT_005930a0 int *
// GLOBAL DAT_005930a4 uint
// GLOBAL DAT_005930a8 undefined4
// GLOBAL DAT_005930ac undefined4
// GLOBAL DAT_005930b0 undefined4
// GLOBAL DAT_005930b4 undefined4
// GLOBAL DAT_005930b8 uint
// GLOBAL DAT_005930bc undefined4
// GLOBAL DAT_005930c0 undefined4
// GLOBAL DAT_005930c4 undefined4

undefined4 func_00592D0C(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar9 = DAT_005930a4;
  piVar1 = DAT_005930a0;
  *DAT_005930a0 = (int)param_1;
  func_00110490(param_1,uVar9);
  iVar5 = *piVar1;
  *(undefined1 *)(iVar5 + 0x18) = 0;
  *(undefined1 *)(iVar5 + 0x19) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 4;
  *(undefined4 *)(iVar5 + 0x14) = 4;
  *(undefined1 *)(iVar5 + 0x1a) = 1;
  *(undefined1 *)(iVar5 + 0x1b) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined1 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  uVar15 = DAT_005930b0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined1 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0x901;
  *(undefined4 *)(iVar5 + 0x38) = uVar15;
  uVar16 = DAT_005930ac;
  uVar15 = DAT_005930a8;
  *(undefined4 *)(iVar5 + 0x40) = DAT_005930a8;
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  *(undefined1 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x4c) = uVar15;
  *(undefined4 *)(iVar5 + 0x50) = uVar16;
  *(undefined4 *)(iVar5 + 0x48) = uVar15;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  *(undefined1 *)(iVar5 + 0x104) = 0;
  *(undefined1 *)(iVar5 + 0x107) = 0;
  *(undefined4 *)(iVar5 + 0xf8) = 0;
  *(undefined4 *)(iVar5 + 0x60) = 0;
  *(undefined4 *)(iVar5 + 0x6c) = 0;
  *(undefined1 *)(iVar5 + 0x105) = 0;
  *(undefined1 *)(iVar5 + 0x108) = 0;
  *(undefined4 *)(iVar5 + 0xfc) = 0;
  *(undefined4 *)(iVar5 + 100) = 0;
  *(undefined4 *)(iVar5 + 0x70) = 0;
  *(undefined1 *)(iVar5 + 0x106) = 0;
  *(undefined1 *)(iVar5 + 0x109) = 0;
  *(undefined4 *)(iVar5 + 0x100) = 0;
  func_00110490((undefined4 *)(iVar5 + 0x74),0x80);
  iVar5 = *piVar1;
  iVar6 = 0;
  iVar7 = 0x10;
  *(undefined4 *)(iVar5 + 0xf4) = 0;
  do {
    iVar8 = iVar5 + iVar6 * 0x10;
    iVar7 = iVar7 + -1;
    *(undefined4 *)(iVar8 + 0x2a0) = uVar15;
    *(undefined4 *)(iVar8 + 0x2a4) = uVar16;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar8 + 0x29c) = uVar15;
    *(undefined4 *)(iVar8 + 0x298) = uVar15;
    iVar8 = 0;
  } while (iVar7 != 0);
  do {
    iVar6 = iVar5 + iVar8 * 0x10;
    uVar11 = *(uint *)(iVar6 + 0x298);
    uVar9 = 0;
    if ((uVar11 & 0x7fffffff) != 0) {
      uVar9 = ((uVar11 << 1) >> 0x18) - 0x40;
    }
    bVar10 = -1 < (int)uVar9;
    if (bVar10) {
      uVar9 = (uVar11 << 9) >> 0x10 | uVar9 << 0x10 | (uVar11 >> 0x1f) << 0x17;
    }
    uVar12 = *(uint *)(iVar6 + 0x29c);
    if (!bVar10) {
      uVar9 = (uVar11 >> 0x1f) << 0x17;
    }
    uVar11 = 0;
    if ((uVar12 & 0x7fffffff) != 0) {
      uVar11 = ((uVar12 << 1) >> 0x18) - 0x40;
    }
    bVar10 = -1 < (int)uVar11;
    if (bVar10) {
      uVar11 = (uVar12 << 9) >> 0x10 | uVar11 << 0x10 | (uVar12 >> 0x1f) << 0x17;
    }
    uVar13 = *(uint *)(iVar6 + 0x2a0);
    if (!bVar10) {
      uVar11 = (uVar12 >> 0x1f) << 0x17;
    }
    uVar12 = 0;
    if ((uVar13 & 0x7fffffff) != 0) {
      uVar12 = ((uVar13 << 1) >> 0x18) - 0x40;
    }
    bVar10 = -1 < (int)uVar12;
    if (bVar10) {
      uVar12 = (uVar13 << 9) >> 0x10 | uVar12 << 0x10 | (uVar13 >> 0x1f) << 0x17;
    }
    uVar14 = *(uint *)(iVar6 + 0x2a4);
    if (!bVar10) {
      uVar12 = (uVar13 >> 0x1f) << 0x17;
    }
    uVar13 = 0;
    if ((uVar14 & 0x7fffffff) != 0) {
      uVar13 = ((uVar14 << 1) >> 0x18) - 0x40;
    }
    bVar10 = -1 < (int)uVar13;
    if (bVar10) {
      uVar13 = (uVar14 << 9) >> 0x10 | uVar13 << 0x10;
    }
    if (bVar10) {
      uVar13 = uVar13 | (uVar14 >> 0x1f) << 0x17;
    }
    else {
      uVar13 = (uVar14 >> 0x1f) << 0x17;
    }
    iVar6 = iVar5 + iVar8 * 0xc;
    iVar8 = iVar8 + 1;
    *(uint *)(iVar6 + 0x398) = uVar12 >> 0x10 | uVar13 << 8;
    *(uint *)(iVar6 + 0x39c) = (uVar11 << 8) >> 0x10 | uVar12 << 0x10;
    *(uint *)(iVar6 + 0x3a0) = uVar9 | uVar11 << 0x18;
    uVar2 = DAT_005930b4;
  } while (iVar8 < 0x10);
  iVar6 = 0;
  iVar7 = 0x10;
  do {
    iVar7 = iVar7 + -1;
    iVar8 = iVar5 + iVar6 * 0x18;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar8 + 0x46d) = 0;
    *(undefined4 *)(iVar8 + 0x468) = 0;
    *(undefined4 *)(iVar8 + 0x45c) = 4;
    *(undefined4 *)(iVar8 + 0x460) = uVar2;
  } while (iVar7 != 0);
  *(undefined4 *)(iVar5 + 0x5d8) = 0;
  *(undefined4 *)(iVar5 + 0x5dc) = 0;
  *(undefined4 *)(iVar5 + 0x5e0) = 0;
  *(undefined1 *)(iVar5 + 0x648) = 0;
  *(undefined4 *)(iVar5 + 0x5e4) = 0;
  uVar9 = DAT_005930b8;
  *(undefined4 *)(iVar5 + 0x5e8) = 0;
  *(undefined4 *)(iVar5 + 0x5ec) = 0;
  *(undefined4 *)(iVar5 + 0x5f0) = 0;
  *(undefined1 *)(iVar5 + 0x649) = 0;
  *(uint *)(iVar5 + 0x5f4) = uVar9;
  *(undefined4 *)(iVar5 + 0x5f8) = uVar15;
  *(undefined1 *)(iVar5 + 0x64a) = 0;
  *(uint *)(iVar5 + 0x5fc) = uVar9;
  *(undefined4 *)(iVar5 + 0x600) = 0;
  *(undefined4 *)(iVar5 + 0x608) = 0x1e00;
  *(undefined4 *)(iVar5 + 0x604) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x60c) = 0x1e00;
  *(undefined4 *)(iVar5 + 0x610) = 0x1e00;
  *(undefined1 *)(iVar5 + 0x64b) = 0;
  *(uint *)(iVar5 + 0x614) = uVar9 & 0xffffffe1;
  *(undefined1 *)(iVar5 + 0x64f) = 0;
  *(uint *)(iVar5 + 0x650) = uVar9 & 0xffffffe1;
  *(undefined1 *)(iVar5 + 0x64c) = 0;
  *(undefined4 *)(iVar5 + 0x618) = 1;
  *(undefined4 *)(iVar5 + 0x61c) = 1;
  uVar2 = DAT_005930bc;
  *(undefined4 *)(iVar5 + 0x620) = 0;
  *(undefined4 *)(iVar5 + 0x624) = 0;
  uVar4 = DAT_005930c4;
  uVar3 = DAT_005930c0;
  *(undefined1 *)(iVar5 + 0x64d) = 0;
  *(undefined4 *)(iVar5 + 0x628) = uVar2;
  *(undefined4 *)(iVar5 + 0x62c) = uVar2;
  *(undefined4 *)(iVar5 + 0x640) = uVar3;
  *(undefined4 *)(iVar5 + 0x644) = uVar4;
  *(undefined4 *)(iVar5 + 0x63c) = uVar15;
  *(undefined4 *)(iVar5 + 0x638) = uVar15;
  *(undefined4 *)(iVar5 + 0x634) = uVar15;
  *(undefined4 *)(iVar5 + 0x630) = uVar15;
  *(undefined1 *)(iVar5 + 0x658) = 1;
  *(undefined4 *)(iVar5 + 0x65c) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x678) = 0;
  *(undefined4 *)(iVar5 + 0x670) = uVar16;
  *(undefined4 *)(iVar5 + 0x67c) = 0xffffff;
  *(undefined4 *)(iVar5 + 0x680) = 0xffff;
  *(undefined4 *)(iVar5 + 0x674) = 0xffffff;
  *(undefined1 *)(iVar5 + 0x657) = 1;
  *(undefined1 *)(iVar5 + 0x656) = 1;
  *(undefined1 *)(iVar5 + 0x655) = 1;
  *(undefined1 *)(iVar5 + 0x654) = 1;
  *(undefined4 *)(iVar5 + 0x66c) = uVar15;
  *(undefined4 *)(iVar5 + 0x668) = uVar15;
  *(undefined4 *)(iVar5 + 0x664) = uVar15;
  *(undefined4 *)(iVar5 + 0x660) = uVar15;
  *(undefined4 *)(iVar5 + 0x684) = 0;
  *(undefined1 *)(iVar5 + 0x690) = 0;
  *(undefined1 *)(iVar5 + 0x691) = 0;
  *(undefined1 *)(iVar5 + 0x692) = 0;
  *(undefined1 *)(iVar5 + 0x693) = 0;
  *(undefined4 *)(iVar5 + 0x698) = 0;
  *(undefined4 *)(iVar5 + 0x69c) = 0;
  *(undefined4 *)(iVar5 + 0x68c) = 3;
  *(undefined4 *)(iVar5 + 0x688) = 0;
  *(undefined4 *)(iVar5 + 0x6a0) = 0;
  *(undefined4 *)(iVar5 + 0x6e8) = 0;
  *(undefined4 *)(iVar5 + 0x6e4) = 0;
  *(undefined4 *)(iVar5 + 0x72c) = 0;
  *(undefined4 *)(iVar5 + 0x730) = 0;
  *(undefined4 *)(iVar5 + 0x734) = 0;
  *(undefined4 *)(iVar5 + 0x738) = 0;
  *(undefined4 *)(iVar5 + 0x73c) = 0;
  *(undefined4 *)(iVar5 + 0x740) = 0;
  *(undefined4 *)(iVar5 + 0x744) = 0;
  *(undefined4 *)(iVar5 + 0x748) = 0;
  *(undefined4 *)(iVar5 + 0x74c) = 0;
  *(undefined4 *)(iVar5 + 0x750) = 0;
  *(undefined4 *)(iVar5 + 0x754) = 0;
  *(undefined4 *)(iVar5 + 0x758) = 0;
  *(undefined4 *)(iVar5 + 0x75c) = 0;
  *(undefined4 *)(iVar5 + 0x760) = 0;
  *(undefined4 *)(iVar5 + 0x764) = 0;
  *(undefined4 *)(iVar5 + 0x768) = 0;
  *(undefined4 *)(iVar5 + 0x6a4) = 0;
  *(undefined4 *)(iVar5 + 0x6a8) = 0;
  *(undefined4 *)(iVar5 + 0x6ac) = 0;
  *(undefined4 *)(iVar5 + 0x6b0) = 0;
  *(undefined4 *)(iVar5 + 0x6b4) = 0;
  *(undefined4 *)(iVar5 + 0x6b8) = 0;
  *(undefined4 *)(iVar5 + 0x6bc) = 0;
  *(undefined4 *)(iVar5 + 0x6c0) = 0;
  *(undefined4 *)(iVar5 + 0x6c4) = 0;
  *(undefined4 *)(iVar5 + 0x6c8) = 0;
  *(undefined4 *)(iVar5 + 0x6cc) = 0;
  *(undefined4 *)(iVar5 + 0x6d0) = 0;
  *(undefined4 *)(iVar5 + 0x6d4) = 0;
  *(undefined4 *)(iVar5 + 0x6d8) = 0;
  *(undefined4 *)(iVar5 + 0x6dc) = 0;
  *(undefined4 *)(iVar5 + 0x6e0) = 0;
  *(undefined4 *)(iVar5 + 0x6ec) = 0;
  *(undefined4 *)(iVar5 + 0x6f0) = 0;
  *(undefined4 *)(iVar5 + 0x6f4) = 0;
  *(undefined4 *)(iVar5 + 0x6f8) = 0;
  *(undefined4 *)(iVar5 + 0x6fc) = 0;
  *(undefined4 *)(iVar5 + 0x700) = 0;
  *(undefined4 *)(iVar5 + 0x704) = 0;
  *(undefined4 *)(iVar5 + 0x708) = 0;
  *(undefined4 *)(iVar5 + 0x70c) = 0;
  *(undefined4 *)(iVar5 + 0x710) = 0;
  *(undefined4 *)(iVar5 + 0x714) = 0;
  *(undefined4 *)(iVar5 + 0x718) = 0;
  *(undefined4 *)(iVar5 + 0x71c) = 0;
  *(undefined4 *)(iVar5 + 0x720) = 0;
  *(undefined4 *)(iVar5 + 0x724) = 0;
  *(undefined4 *)(iVar5 + 0x728) = 0;
  *(undefined4 *)(iVar5 + 0x770) = 0;
  *(undefined1 *)(iVar5 + 0x81c) = 0;
  *(undefined4 *)(iVar5 + 0x820) = 0;
  *(undefined4 *)(iVar5 + 0x824) = 0;
  func_001164C4((undefined4 *)(iVar5 + 0x828),0x40,0xff);
  return 0;
}

