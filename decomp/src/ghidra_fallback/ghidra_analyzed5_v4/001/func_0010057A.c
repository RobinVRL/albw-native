#include "ghidra_types.h"

extern int func_00100340(uint *param_1,int param_2,int param_3);
extern int func_00100A24(uint *param_1,undefined2 *param_2,uint param_3);

// USA 0010057A <- EU 0010057A (Ghidra, function missing from the decomp table)

undefined4 func_0010057A(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[5] == 0) {
    func_00100340(param_1,(int)*param_3,-1);
  }
  else {
    func_00100A24(param_1,(undefined2 *)*param_3,0xffffffff);
  }
  return 1;
}

