#include "ghidra_types.h"

extern undefined4 DAT_0032f54c;
extern undefined4 DAT_0032f550;

// USA 0032F52C <- EU 0032F508 (Ghidra, non-matching)
// GLOBAL DAT_0032f54c undefined4
// GLOBAL DAT_0032f550 undefined4

void func_0032F52C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0032f54c;
  *(undefined4 *)(param_1 + 0x938) = 0x32;
  *(undefined4 *)(param_1 + 0x93c) = uVar1;
  uVar1 = DAT_0032f550;
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x3d4);
  return;
}

