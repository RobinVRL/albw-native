#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004ccf94;

// USA 004CCFA8 <- EU 004CCF80 (Ghidra, non-matching)
// GLOBAL DAT_004ccf94 int

undefined4 func_004CCFA8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004ccf94 + 0x84;
  *param_1 = DAT_004ccf94;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

