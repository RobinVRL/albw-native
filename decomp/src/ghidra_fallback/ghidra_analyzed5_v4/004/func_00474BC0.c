#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00474be0;

// USA 00474BC0 <- EU 00474B98 (Ghidra, non-matching)
// GLOBAL DAT_00474be0 float

void func_00474BC0(int param_1)

{
  int iVar1;
  float fparam_0;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  fparam_0 = DAT_00474be0;
  func_002317C0((undefined2 *)(iVar1 + 0x50),DAT_00474be0);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined2 *)(iVar1 + 0x5e) = 2;
  *(undefined2 *)(iVar1 + 0x5c) = 0;
  func_002317C0((undefined2 *)(iVar1 + 0x5c),fparam_0);
  return;
}

