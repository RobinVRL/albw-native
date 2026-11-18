#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);

// USA 00461B6C <- EU 00461B44 (Ghidra, non-matching)

void func_00461B6C(int param_1)

{
  *(undefined1 *)(param_1 + 0xf) = 0x69;
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 2;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_00231524(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  return;
}

