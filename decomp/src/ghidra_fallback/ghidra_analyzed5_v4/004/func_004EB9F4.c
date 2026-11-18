#include "ghidra_types.h"

extern int func_0041E178(int param_1,int param_2);

// USA 004EB9F4 <- EU 004EB9CC (Ghidra, non-matching)

void func_004EB9F4(int param_1)

{
  func_0041E178(*(int *)(*(int *)(param_1 + 0x24) + 0x144),*(int *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}

