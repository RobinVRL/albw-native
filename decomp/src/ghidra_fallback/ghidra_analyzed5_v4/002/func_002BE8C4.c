#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002be8b4;

// USA 002BE8C4 <- EU 002BE8A0 (Ghidra, non-matching)
// GLOBAL DAT_002be8b4 int

undefined4 func_002BE8C4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002be8b4 + 0x84;
  *param_1 = DAT_002be8b4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

