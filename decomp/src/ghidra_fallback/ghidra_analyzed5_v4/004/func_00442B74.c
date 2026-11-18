#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00442bd8;

// USA 00442B74 <- EU 00442B54 (Ghidra, non-matching)
// GLOBAL DAT_00442bd8 float

void func_00442B74(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_00442bd8;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x8e) = 9;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 2;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x82) = 5;
  *(undefined2 *)(param_1 + 0x80) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
  return;
}

