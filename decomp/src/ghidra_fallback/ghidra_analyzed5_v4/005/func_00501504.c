#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_005014f0;

// USA 00501504 <- EU 005014DC (Ghidra, non-matching)
// GLOBAL DAT_005014f0 int

undefined4 func_00501504(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_005014f0 + 0x84;
  *param_1 = DAT_005014f0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

