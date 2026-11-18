#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004401a4;

// USA 0044015C <- EU 0044013C (Ghidra, non-matching)
// GLOBAL DAT_004401a4 float

undefined4 func_0044015C(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_004401a4;
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x136) = 5;
  *(undefined2 *)(param_1 + 0x134) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x134),fparam_0);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x142) = 6;
  *(undefined2 *)(param_1 + 0x140) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  return func_00231448(param_1 + 0x14c);
}

