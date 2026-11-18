#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004a49e0;

// USA 004A4980 <- EU 004A4958 (Ghidra, non-matching)
// GLOBAL DAT_004a49e0 float

void func_004A4980(int param_1,uint param_2,float fparam_0)

{
  if ((*(byte *)(param_1 + 0x9d) & 1) == param_2) {
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 9;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 10;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0x68),DAT_004a49e0);
  func_002317C0((undefined2 *)(param_1 + 0x5c),fparam_0);
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 1;
  return;
}

