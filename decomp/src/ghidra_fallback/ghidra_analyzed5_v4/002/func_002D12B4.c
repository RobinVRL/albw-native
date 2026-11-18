#include "ghidra_types.h"

extern int func_0053F758(int param_1,undefined4 param_2);

// USA 002D12B4 <- EU 002D1290 (Ghidra, non-matching)

void func_002D12B4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x2c);
  uVar1 = func_0053F758(*(int *)(param_1 + 0x10),param_1 + 0x14);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

