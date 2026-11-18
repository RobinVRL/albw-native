#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0031c5bc;

// USA 0031C590 <- EU 0031C56C (Ghidra, non-matching)
// GLOBAL DAT_0031c5bc float

void func_0031C590(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_0031c5bc;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xca) = 9;
  *(undefined2 *)(param_1 + 200) = 0;
  func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 0xd4),fparam_0);
  *(undefined1 *)(param_1 + 0xe9) = 1;
  return;
}

