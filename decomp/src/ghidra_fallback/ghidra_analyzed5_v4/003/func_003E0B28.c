#include "ghidra_types.h"

extern int func_0058FAEC(undefined4 *param_1);
extern undefined4 DAT_003e0c04;
extern undefined4 DAT_003e0c08;
extern undefined4 DAT_003e0c0c;

// USA 003E0B28 <- EU 003E0B08 (Ghidra, non-matching)
// GLOBAL DAT_003e0c04 undefined4
// GLOBAL DAT_003e0c08 undefined4
// GLOBAL DAT_003e0c0c undefined4

void func_003E0B28(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  uVar2 = DAT_003e0c08;
  uVar1 = DAT_003e0c04;
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xff80 | 5;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x20) = DAT_003e0c0c;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x22;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0058FAEC((undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}

