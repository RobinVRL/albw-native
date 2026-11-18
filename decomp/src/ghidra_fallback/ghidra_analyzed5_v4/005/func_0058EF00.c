#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_0058eeec;

// USA 0058EF00 <- EU 0058EED8 (Ghidra, non-matching)
// GLOBAL DAT_0058eeec int

undefined4 func_0058EF00(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058eeec;
  *param_1 = DAT_0058eeec + 0xac;
  param_1[-0xe] = iVar1;
  return func_0044191C(param_1 + -0xe);
}

