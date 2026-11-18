#include "ghidra_types.h"

extern int func_002312F4(int *param_1);
extern int func_0030E0F0(int *param_1);
extern undefined4 DAT_0050335c;

// USA 00503364 <- EU 0050333C (Ghidra, non-matching)
// GLOBAL DAT_0050335c undefined4

undefined4 func_00503364(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_0050335c;
  piVar1 = func_0030E0F0(param_1 + 0x61);
  return func_002312F4(piVar1 + -0x61);
}

