#include "ghidra_types.h"

extern undefined4 DAT_00225320;

// USA 002252F8 <- EU 002252F8 (Ghidra, non-matching)
// GLOBAL DAT_00225320 undefined4

void func_002252F8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x685) = 0;
  *(undefined1 *)(param_1 + 0x74e) = 1;
  uVar1 = DAT_00225320;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x60) = DAT_00225320;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x58) = uVar1;
  return;
}

