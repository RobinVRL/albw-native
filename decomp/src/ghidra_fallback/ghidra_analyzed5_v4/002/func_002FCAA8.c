#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002fca98;

// USA 002FCAA8 <- EU 002FCA84 (Ghidra, non-matching)
// GLOBAL DAT_002fca98 int

undefined4 func_002FCAA8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002fca98 + 0x84;
  *param_1 = DAT_002fca98;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

