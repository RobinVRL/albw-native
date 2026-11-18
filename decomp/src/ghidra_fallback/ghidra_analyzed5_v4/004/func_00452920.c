#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00452930;

// USA 00452920 <- EU 004528F8 (Ghidra, non-matching)
// GLOBAL DAT_00452930 float

void func_00452920(int param_1)

{
  func_00231340((short *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x9a) = 4;
  *(undefined2 *)(param_1 + 0x98) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x98),DAT_00452930);
  return;
}

