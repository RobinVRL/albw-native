#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_0058edc4;

// USA 0058EDD8 <- EU 0058EDB0 (Ghidra, non-matching)
// GLOBAL DAT_0058edc4 int

undefined4 func_0058EDD8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058edc4;
  *param_1 = DAT_0058edc4 + 0xac;
  param_1[-0xe] = iVar1;
  return func_0044191C(param_1 + -0xe);
}

