#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern float DAT_00423cd8;

// USA 00423CA0 <- EU 00423C80 (Ghidra, non-matching)
// GLOBAL DAT_00423cd8 float

undefined4 func_00423CA0(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  
  *(undefined1 *)(param_1 + 0xf7) = 0;
  func_002C00A8(*(int *)(param_1 + 0x14));
  fparam_0 = DAT_00423cd8;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xffbf;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 9;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  return func_00231448(param_1 + 0xbc);
}

