#include "ghidra_types.h"

extern float func_004FAD90(int param_1);
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 002FB980 <- EU 002FB95C (Ghidra, non-matching)

void func_002FB980(int param_1)

{
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffdf;
  func_004FAD90(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  return;
}

