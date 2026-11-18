#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 004C00F4 <- EU 004C00CC (Ghidra, non-matching)

undefined4 func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*(int **)(param_1 + 0x7b4) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x7b4),param_2,param_3,param_4);
    return func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7a0),(int *)0x0);
  }
  return 0;
}

