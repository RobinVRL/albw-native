#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004895e0;

// USA 004895D0 <- EU 004895A8 (Ghidra, non-matching)
// GLOBAL DAT_004895e0 float

void func_004895D0(int param_1)

{
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 2;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x38),DAT_004895e0);
  return;
}

