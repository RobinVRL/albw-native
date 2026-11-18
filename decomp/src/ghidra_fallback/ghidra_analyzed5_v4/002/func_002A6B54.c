#include "ghidra_types.h"

extern float func_004FAD90(int param_1);
extern undefined4 DAT_002a6b68;

// USA 002A6B54 <- EU 002A6B30 (Ghidra, non-matching)
// GLOBAL DAT_002a6b68 undefined4

void func_002A6B54(int param_1)

{
  func_004FAD90(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  if (*(int *)(param_1 + 0xb28) < 0x3f800000) {
    *(short *)(*(int *)(param_1 + 0x430) + 0x28) = (short)DAT_002a6b68;
  }
  return;
}

