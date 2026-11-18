#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003A0C98(int param_1,int param_2);
extern float DAT_003a0968;

// USA 003A0960 <- EU 003A093C (Ghidra, non-matching)
// GLOBAL DAT_003a0968 float

void func_003A0960(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x390) + 1;
  *(int *)(param_1 + 0x390) = iVar1;
  func_003A0C98(param_1,iVar1);
  func_002317C0((undefined2 *)(param_1 + 0x3c),DAT_003a0968);
  return;
}

