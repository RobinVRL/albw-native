#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001D8BF4(int param_1);
extern int func_001D8E70(int param_1,uint param_2);
extern int func_001D8F9C(int param_1);

// USA 001D88C4 <- EU 001D88C4 (Ghidra, non-matching)

undefined4 func_001D88C4(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint extraout_r1;
  
  func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  func_001D8BF4(param_1);
  func_001D8F9C(param_1);
  func_001D8E70(param_1,extraout_r1);
  return func_0014E138(param_1,param_2);
}

