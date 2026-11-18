#include "ghidra_types.h"

extern int func_00110778(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003D308C(int param_1);
extern undefined4 DAT_0067672c;

// USA 00676730 <- EU 00676708 (Ghidra, non-matching)
// GLOBAL DAT_0067672c undefined4

undefined4 func_00676730(undefined4 *param_1)

{
  undefined4 extraout_r1;
  undefined4 in_r2;
  
  *param_1 = DAT_0067672c;
  func_003D308C((int)param_1);
  return func_00110778(param_1,extraout_r1,in_r2);
}

