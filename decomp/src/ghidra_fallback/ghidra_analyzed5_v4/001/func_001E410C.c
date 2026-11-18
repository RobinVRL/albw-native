#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E4158(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 001E410C <- EU 001E410C (Ghidra, non-matching)

undefined4 func_001E410C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 extraout_r1;
  
  func_001E4158(param_1,param_2,param_3,param_4);
  if (*(int **)(param_1 + 0x490) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x490),extraout_r1,param_3,param_4);
    return func_00168E9C(*(int **)(param_1 + 0x490),*(int *)(param_1 + 0x47c),(int *)0x0);
  }
  return 0;
}

