#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_001B6D40(int param_1);
extern int *DAT_004b9634;

// USA 004B9634 <- EU 004B960C (Ghidra, non-matching)
// GLOBAL DAT_004b9634 int *

undefined4 func_004B9634(int param_1)

{
  func_001B6D40(param_1);
  return func_00166620(*DAT_004b9634,param_1);
}

