#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0048961c;

// USA 0048960C <- EU 004895E4 (Ghidra, non-matching)
// GLOBAL DAT_0048961c float

void func_0048960C(int param_1)

{
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 1;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x38),DAT_0048961c);
  return;
}

