#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0012c684;

// USA 0012C670 <- EU 0012C670 (Ghidra, non-matching)
// GLOBAL DAT_0012c684 int

undefined4 func_0012C670(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0012c684 + 0x84;
  *param_1 = DAT_0012c684;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

