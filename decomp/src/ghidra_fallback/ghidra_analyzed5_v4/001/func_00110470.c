#include "ghidra_types.h"

extern int func_00110778(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_0011048c;

// USA 00110470 <- EU 00110470 (Ghidra, non-matching)
// GLOBAL DAT_0011048c undefined4

undefined4 func_00110470(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = DAT_0011048c;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  return func_00110778(param_1,0,param_3);
}

