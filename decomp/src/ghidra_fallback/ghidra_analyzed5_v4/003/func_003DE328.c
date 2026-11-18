#include "ghidra_types.h"

extern int func_003E0B28(int param_1);
extern int func_0058FAEC(undefined4 *param_1);
extern undefined4 DAT_003de3d8;
extern undefined4 DAT_003de3dc;
extern undefined4 DAT_003de3e0;

// USA 003DE328 <- EU 003DE308 (Ghidra, non-matching)
// GLOBAL DAT_003de3d8 undefined4
// GLOBAL DAT_003de3dc undefined4
// GLOBAL DAT_003de3e0 undefined4

undefined4 func_003DE328(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_003de3dc;
  *(undefined1 *)(param_1 + 4) = 2;
  uVar2 = DAT_003de3d8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  func_0058FAEC((undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar1 = DAT_003de3e0;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return func_003E0B28(*(int *)(param_1 + 0x68));
}

