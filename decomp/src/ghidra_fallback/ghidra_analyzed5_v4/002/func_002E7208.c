#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002e71f8;

// USA 002E7208 <- EU 002E71E4 (Ghidra, non-matching)
// GLOBAL DAT_002e71f8 int

undefined4 func_002E7208(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002e71f8 + 0x84;
  *param_1 = DAT_002e71f8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

