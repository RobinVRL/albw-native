#include "ghidra_types.h"

extern int func_001CF1A0(int param_1,undefined4 param_2);
extern float DAT_001cf078;

// USA 001CF044 <- EU 001CF044 (Ghidra, non-matching)
// GLOBAL DAT_001cf078 float

void func_001CF044(int param_1)

{
  func_001CF1A0(param_1,1);
  *(float *)(param_1 + 0x448) =
       DAT_001cf078 / *(float *)(*(int *)(*(int *)(param_1 + 0x434) + 0x14) + 0x14);
  return;
}

