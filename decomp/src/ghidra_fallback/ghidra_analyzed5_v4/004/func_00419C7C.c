#include "ghidra_types.h"

extern int func_00419534(int param_1);
extern undefined4 DAT_00419d0c;
extern undefined4 DAT_00419d10;

// USA 00419C7C <- EU 00419C5C (Ghidra, non-matching)
// GLOBAL DAT_00419d0c undefined4
// GLOBAL DAT_00419d10 undefined4

void func_00419C7C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  func_00419534(param_1);
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  uVar1 = DAT_00419d0c;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined1 *)(param_1 + 0xf8) = 0x7f;
  uVar2 = DAT_00419d10;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 1;
    iVar3 = param_1 + uVar4 * 0x24;
    *(undefined1 *)(iVar3 + 0x1b04) = 0;
    *(undefined1 *)(iVar3 + 0x1b10) = 0;
    *(undefined1 *)(iVar3 + 0x1b11) = 0x7f;
    *(undefined1 *)(iVar3 + 0x1b12) = 0x40;
    *(undefined4 *)(iVar3 + 0x1b1c) = uVar1;
    *(undefined4 *)(iVar3 + 0x1b20) = uVar2;
    *(undefined4 *)(iVar3 + 0x1b24) = uVar2;
    uVar4 = uVar5;
  } while (uVar5 < 4);
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 1;
    iVar3 = param_1 + uVar4 * 0x340;
    *(undefined4 *)(iVar3 + 0x104) = 0;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    uVar4 = uVar5;
  } while (uVar5 < 8);
  return;
}

