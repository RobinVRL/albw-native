#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern undefined4 DAT_001d9e94;

// USA 001D9DDC <- EU 001D9DDC (Ghidra, non-matching)
// GLOBAL DAT_001d9e94 undefined4

void func_001D9DDC(int param_1)

{
  undefined4 uVar1;
  
  if (*(uint *)(param_1 + 0x40c) < *(uint *)(param_1 + 0x410)) {
    *(uint *)(param_1 + 0x40c) = *(uint *)(param_1 + 0x40c) + 1;
    if (*(int *)(param_1 + 0x4e4) != -1) {
      func_003521F0(param_1 + 0x324,*(int *)(param_1 + 0x4e4));
      *(undefined4 *)(param_1 + 0x4e4) = 0xffffffff;
    }
    uVar1 = DAT_001d9e94;
    *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x428);
    *(undefined4 *)(param_1 + 0x4bc) = uVar1;
    *(undefined4 *)(param_1 + 0x4cc) = uVar1;
    *(undefined4 *)(param_1 + 0x4b0) = uVar1;
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x42c);
    *(undefined4 *)(param_1 + 0x4d0) = uVar1;
    *(undefined4 *)(param_1 + 0x4b4) = uVar1;
    *(undefined4 *)(param_1 + 0x4c4) = uVar1;
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x430);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x434);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x43c);
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

