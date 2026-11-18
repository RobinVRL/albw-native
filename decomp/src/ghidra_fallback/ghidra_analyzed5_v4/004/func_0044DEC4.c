#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0044dee4;

// USA 0044DEC4 <- EU 0044DE9C (Ghidra, non-matching)
// GLOBAL DAT_0044dee4 float

void func_0044DEC4(int param_1)

{
  func_00231448(param_1 + 0x98);
  func_00231448(param_1 + 0xa4);
  func_00231448(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 6;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),DAT_0044dee4);
  return;
}

