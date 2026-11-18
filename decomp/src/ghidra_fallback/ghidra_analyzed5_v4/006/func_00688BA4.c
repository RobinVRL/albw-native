#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);

// USA 00688BA4 <- EU 00688B7C (Ghidra, non-matching)

undefined4 * func_00688BA4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0010B3EC(param_1,0xa0,(int)(param_1 + 3));
  return param_1;
}

