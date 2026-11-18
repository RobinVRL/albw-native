#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00232468(int param_1);
extern float DAT_00254ef0;

// USA 00254E90 <- EU 00254EB8 (Ghidra, non-matching)
// GLOBAL DAT_00254ef0 float

void func_00254E90(int param_1)

{
  ushort uVar1;
  float fparam_0;
  ushort *puVar2;
  
  func_00232468(param_1);
  fparam_0 = DAT_00254ef0;
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  uVar1 = *puVar2;
  *puVar2 = uVar1 | 0x40;
  *(ushort *)(*(int *)(param_1 + 0x14) + 0x16) = uVar1 | 0x42;
  func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
  return;
}

