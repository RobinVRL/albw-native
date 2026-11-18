#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0046bbb0;

// GLOBAL DAT_0046bbb0 float
// USA 0046BBA0 <- EU 0046BBA0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_0046BBA0(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_0046bbb0;
  *(undefined2 *)(param_1 + 0x74) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  return;
}

