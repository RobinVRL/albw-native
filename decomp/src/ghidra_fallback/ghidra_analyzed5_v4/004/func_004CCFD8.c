#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004ccfc4;

// USA 004CCFD8 <- EU 004CCFB0 (Ghidra, non-matching)
// GLOBAL DAT_004ccfc4 int

undefined4 func_004CCFD8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004ccfc4 + 0x84;
  *param_1 = DAT_004ccfc4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

