#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002fca80;

// USA 002FCA90 <- EU 002FCA6C (Ghidra, non-matching)
// GLOBAL DAT_002fca80 int

undefined4 func_002FCA90(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002fca80 + 0x84;
  *param_1 = DAT_002fca80;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

