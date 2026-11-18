#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern float DAT_0046a184;

// USA 0046A168 <- EU 0046A140 (Ghidra, non-matching)
// GLOBAL DAT_0046a184 float

undefined4 func_0046A168(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 1;
  fparam_0 = DAT_0046a184;
  *(undefined2 *)(param_1 + 0x38) = 1;
  func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 | 0x40;
  return func_002C00A8(*(int *)(param_1 + 0x14));
}

