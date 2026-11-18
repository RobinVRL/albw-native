#include "ghidra_types.h"

extern int func_0025954C(undefined4 param_1,char *param_2);

// USA 004E9C00 <- EU 004E9BD8 (Ghidra, non-matching)

void func_004E9C00(int param_1,char *param_2)

{
  func_0025954C(*(undefined4 *)(param_1 + 0x50),param_2);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

