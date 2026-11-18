#include "ghidra_types.h"


// USA 002C3098 <- EU 002C3074 (Ghidra, non-matching)

void func_002C3098(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x2c) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  return;
}

