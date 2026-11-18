#include "ghidra_types.h"

extern int func_002312F4(int *param_1);
extern int func_0030E0F0(int *param_1);
extern undefined4 DAT_0050335c;

// USA 00503368 <- EU 00503340 (Ghidra, non-matching)
// GLOBAL DAT_0050335c undefined4

undefined4 * func_00503368(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_0050335c;
  piVar1 = func_0030E0F0(param_1 + 0x61);
  piVar1 = func_002312F4(piVar1 + -0x61);
  return piVar1;
}

