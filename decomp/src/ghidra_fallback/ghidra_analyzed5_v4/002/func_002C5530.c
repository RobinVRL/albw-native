#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002c5520;

// USA 002C5530 <- EU 002C550C (Ghidra, non-matching)
// GLOBAL DAT_002c5520 int

undefined4 func_002C5530(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002c5520 + 0x84;
  *param_1 = DAT_002c5520;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

