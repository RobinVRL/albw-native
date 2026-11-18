#include "ghidra_types.h"

extern int func_0012ED38(int param_1,int param_2);
extern int func_004B964C(int param_1);
extern int *DAT_004b9980;

// USA 004B9980 <- EU 004B9958 (Ghidra, non-matching)
// GLOBAL DAT_004b9980 int *

undefined4 func_004B9980(int param_1)

{
  func_004B964C(param_1);
  return func_0012ED38(*DAT_004b9980,param_1);
}

