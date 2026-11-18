#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004B964C(int param_1);
extern float DAT_004541ac;

// USA 00454180 <- EU 00454158 (Ghidra, non-matching)
// GLOBAL DAT_004541ac float

undefined4 func_00454180(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 4;
  fparam_0 = DAT_004541ac;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  func_004B964C(param_1);
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x16);
  *puVar1 = *puVar1 | 1;
  return func_0012C718(*(int *)(param_1 + 0x9c));
}

