#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0031B348(int param_1,uint param_2);
extern float DAT_0042389c;

// USA 00423868 <- EU 00423848 (Ghidra, non-matching)
// GLOBAL DAT_0042389c float

void func_00423868(int param_1)

{
  ushort *puVar1;
  
  func_002C00A8(*(int *)(param_1 + 0x14));
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xffbf;
  func_0031B348(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 7;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),DAT_0042389c);
  return;
}

