#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00474dc4;

// USA 00474D7C <- EU 00474D54 (Ghidra, non-matching)
// GLOBAL DAT_00474dc4 float

void func_00474D7C(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_00474dc4;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xee) = 8;
  *(undefined2 *)(param_1 + 0xec) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xec),fparam_0);
  iVar1 = *(int *)(param_1 + 0xfc);
  func_002317C0((undefined2 *)(iVar1 + 0x50),fparam_0);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined2 *)(iVar1 + 0x5e) = 2;
  *(undefined2 *)(iVar1 + 0x5c) = 0;
  func_002317C0((undefined2 *)(iVar1 + 0x5c),fparam_0);
  return;
}

