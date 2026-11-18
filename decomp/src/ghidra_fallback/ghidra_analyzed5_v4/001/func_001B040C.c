#include "ghidra_types.h"

extern undefined4 DAT_001b0448;

// USA 001B040C <- EU 001B040C (Ghidra, non-matching)
// GLOBAL DAT_001b0448 undefined4

void func_001B040C(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001b0448;
  if (param_2 != 10) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_001b0448;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  }
  *(undefined1 *)(param_1 + 0x909) = 1;
  *(undefined4 *)(param_1 + 0x8e4) = **(undefined4 **)(param_1 + 0x9b8);
  return;
}

