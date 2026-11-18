#include "ghidra_types.h"

extern undefined4 DAT_001c2158;

// USA 001C2128 <- EU 001C2128 (Ghidra, non-matching)
// GLOBAL DAT_001c2158 undefined4

void func_001C2128(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001c2158;
  *(undefined4 *)(param_1 + 0x444) = 0xb4;
  *(undefined4 *)(param_1 + 0x448) = uVar1;
  *(undefined4 *)(param_1 + 0x440) = 0;
  if (*(int *)(param_1 + 0x450) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x450) + 0x44) = 0;
  }
  return;
}

