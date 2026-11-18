#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_0058ed8c;

// USA 0058EDA0 <- EU 0058ED78 (Ghidra, non-matching)
// GLOBAL DAT_0058ed8c int

undefined4 func_0058EDA0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ed8c;
  *param_1 = DAT_0058ed8c + 0xac;
  param_1[-0xe] = iVar1;
  return func_0044191C(param_1 + -0xe);
}

