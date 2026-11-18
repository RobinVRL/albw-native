#include "ghidra_types.h"

extern int func_002312F4(int *param_1);
extern int func_0030D010(int *param_1);
extern undefined4 DAT_002be9f8;

// USA 002BE9FC <- EU 002BE9D8 (Ghidra, non-matching)
// GLOBAL DAT_002be9f8 undefined4

undefined4 func_002BE9FC(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_002be9f8;
  piVar1 = func_0030D010(param_1 + 0x61);
  return func_002312F4(piVar1 + -0x61);
}

