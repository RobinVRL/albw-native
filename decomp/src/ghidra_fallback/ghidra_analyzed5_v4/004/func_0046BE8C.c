#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0046bec4;

// GLOBAL DAT_0046bec4 float
// USA 0046BE8C <- EU 0046BE8C (Ghidra, function missing from the decomp table)

void func_0046BE8C(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_0046bec4;
  *(undefined2 *)(param_1 + 0x74) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  *(undefined2 *)(param_1 + 0x80) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
  return;
}

