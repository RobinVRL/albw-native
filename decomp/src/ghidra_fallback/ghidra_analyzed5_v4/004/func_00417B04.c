#include "ghidra_types.h"

extern int func_0040FA80(undefined4 *param_1);
extern undefined4 DAT_00417c54;
extern uint DAT_00417c58;

// USA 00417B04 <- EU 00417AE4 (Ghidra, non-matching)
// GLOBAL DAT_00417c54 undefined4
// GLOBAL DAT_00417c58 uint

void func_00417B04(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar4 = DAT_00417c54;
  *(undefined4 *)(param_1 + 8) = DAT_00417c54;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = DAT_00417c58;
  uVar5 = (ulonglong)DAT_00417c58;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  do {
    func_0040FA80((undefined4 *)(param_1 + iVar3 * 0x10 + 0xac));
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0xec) = 0;
  } while (iVar3 < 4);
  uVar4 = (undefined4)uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined1 *)(param_1 + 0x8c) = 0x7f;
  *(undefined1 *)(param_1 + 0x8d) = 0x7f;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0x7f;
  *(undefined1 *)(param_1 + 0x93) = 0x7f;
  *(undefined2 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0x7f;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 2;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0x40;
  *(undefined1 *)(param_1 + 0xf6) = 0x3c;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0xff;
  *(undefined1 *)(param_1 + 0xf9) = 0xff;
  *(undefined1 *)(param_1 + 0xfa) = 0xff;
  *(undefined1 *)(param_1 + 0xfb) = 0xff;
  *(undefined2 *)(param_1 + 0xfc) = 0xff;
  *(undefined1 *)(param_1 + 0xff) = 0x7f;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x104) = uVar4;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  iVar3 = 0;
  do {
    iVar2 = param_1 + iVar3 * 2;
    iVar3 = iVar3 + 2;
    *(undefined2 *)(iVar2 + 0x10c) = 0xffff;
    *(undefined2 *)(iVar2 + 0x10e) = 0xffff;
  } while (iVar3 < 0x10);
  return;
}

