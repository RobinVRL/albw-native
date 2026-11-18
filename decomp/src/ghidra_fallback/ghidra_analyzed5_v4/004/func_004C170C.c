#include "ghidra_types.h"


// USA 004C170C <- EU 004C16E4 (Ghidra, non-matching)

void func_004C170C(int param_1)

{
  *(undefined1 *)(param_1 + 0x857) = 0;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  return;
}

