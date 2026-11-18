#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_0058ed74;

// USA 0058ED88 <- EU 0058ED60 (Ghidra, non-matching)
// GLOBAL DAT_0058ed74 int

undefined4 func_0058ED88(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ed74;
  *param_1 = DAT_0058ed74 + 0xac;
  param_1[-0xe] = iVar1;
  return func_0044191C(param_1 + -0xe);
}

