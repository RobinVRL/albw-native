#include "ghidra_types.h"

extern int func_0010168C(int param_1,int param_2);
extern int func_00101D4C(int *param_1,int param_2);
extern int *DAT_00100ea0;

// USA 00100E78 <- EU 00100E78 (Ghidra, non-matching)
// GLOBAL DAT_00100ea0 int *

undefined4 func_00100E78(int param_1)

{
  func_00101D4C(DAT_00100ea0,param_1);
  return func_0010168C(DAT_00100ea0[2],param_1);
}

