#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00454130;

// USA 004540F4 <- EU 004540CC (Ghidra, non-matching)
// GLOBAL DAT_00454130 float

void func_004540F4(int param_1)

{
  float fparam_0;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x2e) = 6;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xa6) = 5;
  fparam_0 = DAT_00454130;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xa4),fparam_0);
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}

