#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001ab7e4;

// USA 001AB7D0 <- EU 001AB7D0 (Ghidra, non-matching)
// GLOBAL DAT_001ab7e4 int

undefined4 func_001AB7D0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001ab7e4 + 0x84;
  *param_1 = DAT_001ab7e4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

