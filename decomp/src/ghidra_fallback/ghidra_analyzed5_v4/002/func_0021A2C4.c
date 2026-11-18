#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0021a2d8;

// USA 0021A2C4 <- EU 0021A2C4 (Ghidra, non-matching)
// GLOBAL DAT_0021a2d8 int

undefined4 func_0021A2C4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0021a2d8 + 0x84;
  *param_1 = DAT_0021a2d8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

