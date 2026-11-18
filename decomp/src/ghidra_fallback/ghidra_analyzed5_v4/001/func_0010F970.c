#include "ghidra_types.h"

extern int func_0010FD9C(int *param_1,int param_2,int param_3,int param_4,int param_5);
extern int func_001102AC(int *param_1,uint *param_2);

// USA 0010F970 <- EU 0010F970 (Ghidra, non-matching)

undefined4 func_0010F970(int *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_4 + 0xc) + 0xc);
  iVar1 = func_001102AC(piVar2,param_2);
  return func_0010FD9C(param_1,iVar1,param_3,param_4,(int)piVar2);
}

