#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00471760(int param_1,uint *param_2,int param_3);

// USA 005191CC <- EU 005191A4 (Ghidra, non-matching)

undefined4 func_005191CC(int param_1,uint *param_2,int param_3)

{
  undefined4 extraout_r1;
  int in_r3;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    func_00471760(*(int *)(param_1 + 0xa0),param_2,param_3);
    return func_001B6C2C(*(int **)(param_1 + 0xa0),extraout_r1,param_3,in_r3);
  }
  return 0;
}

