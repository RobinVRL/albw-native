#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);

// USA 00429A78 <- EU 00429A58 (Ghidra, non-matching)

void func_00429A78(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  func_0010F1DC(piVar1,(int *)(param_2 + piVar1[3]));
  piVar1[2] = piVar1[2] + 1;
  return;
}

