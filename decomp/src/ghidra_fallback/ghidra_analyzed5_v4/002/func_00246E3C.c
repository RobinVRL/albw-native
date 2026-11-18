#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00194D78(int param_1);
extern int func_004CEAF0(int param_1);

// USA 00246E3C <- EU 00246E3C (Ghidra, non-matching)

undefined4 func_00246E3C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 extraout_r1;
  
  func_00194D78(param_1);
  func_004CEAF0(*(int *)(param_1 + 0x480));
  func_00169A80(*(int **)(param_1 + 0x4d0),extraout_r1,param_3,param_4);
  return func_00168E9C(*(int **)(param_1 + 0x4d0),*(int *)(param_1 + 0x480),(int *)0x0);
}

