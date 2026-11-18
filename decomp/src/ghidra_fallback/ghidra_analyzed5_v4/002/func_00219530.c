#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00219544;

// USA 00219530 <- EU 00219530 (Ghidra, non-matching)
// GLOBAL DAT_00219544 int

undefined4 func_00219530(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00219544 + 0x84;
  *param_1 = DAT_00219544;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

