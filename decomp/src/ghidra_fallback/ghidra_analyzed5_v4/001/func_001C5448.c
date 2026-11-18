#include "ghidra_types.h"

extern undefined4 DAT_001c546c;

// USA 001C5448 <- EU 001C5448 (Ghidra, non-matching)
// GLOBAL DAT_001c546c undefined4

void func_001C5448(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001c546c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b4) + 0x14) + 0x10) = DAT_001c546c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b8) + 0x14) + 0x10) = uVar1;
  return;
}

