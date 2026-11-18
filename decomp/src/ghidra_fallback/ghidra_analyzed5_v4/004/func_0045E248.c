#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0045e258;

// USA 0045E248 <- EU 0045E220 (Ghidra, non-matching)
// GLOBAL DAT_0045e258 float

void func_0045E248(int param_1)

{
  func_00231448(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xe2) = 2;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xe0),DAT_0045e258);
  return;
}

