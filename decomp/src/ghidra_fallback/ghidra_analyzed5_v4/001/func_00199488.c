#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_001994a8;

// USA 00199488 <- EU 00199488 (Ghidra, non-matching)
// GLOBAL DAT_001994a8 float

void func_00199488(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x46) = 1;
  fparam_0 = DAT_001994a8;
  *(undefined2 *)(param_1 + 0x44) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x44),fparam_0);
  return;
}

