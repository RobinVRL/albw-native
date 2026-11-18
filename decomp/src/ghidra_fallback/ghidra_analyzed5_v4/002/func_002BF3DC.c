#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_002C00A8(int param_1);

// USA 002BF3DC <- EU 002BF3B8 (Ghidra, non-matching)

void func_002BF3DC(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = 0;
  func_002C00A8(*(int *)(param_1 + 0x14));
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  func_001B6DE0(param_1);
  return;
}

