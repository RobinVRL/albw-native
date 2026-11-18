#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002bc558;

// USA 002BC568 <- EU 002BC544 (Ghidra, non-matching)
// GLOBAL DAT_002bc558 int

undefined4 func_002BC568(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002bc558 + 0x84;
  *param_1 = DAT_002bc558;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

