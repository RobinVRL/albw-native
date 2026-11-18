#include "ghidra_types.h"

extern undefined4 DAT_004087f8;

// USA 004087E8 <- EU 004087C8 (Ghidra, non-matching)
// GLOBAL DAT_004087f8 undefined4

void func_004087E8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004087f8;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return;
}

