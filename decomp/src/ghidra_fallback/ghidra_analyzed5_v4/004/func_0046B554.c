#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0046b544;

// USA 0046B554 <- EU 0046B52C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0046b544 float

void func_0046B554(int param_1)

{
  float fparam_0;
  undefined2 *puVar1;
  
  fparam_0 = DAT_0046b544;
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0xf0) + 0x8c);
  *puVar1 = 0;
  func_002317C0(puVar1,fparam_0);
  return;
}

