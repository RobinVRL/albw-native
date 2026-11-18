#include "ghidra_types.h"

extern int func_0040FA80(undefined4 *param_1);
extern int func_00419534(int param_1);
extern undefined4 DAT_00418b70;

// USA 00418B18 <- EU 00418AF8 (Ghidra, non-matching)
// GLOBAL DAT_00418b70 undefined4

void func_00418B18(int param_1)

{
  undefined4 uVar1;
  
  func_00419534(param_1);
  uVar1 = DAT_00418b70;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x5e) = 0x40;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x91) = 0x40;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0x7f;
  func_0040FA80((undefined4 *)(param_1 + 0x78));
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0xff;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}

