#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001a6e2c;

// USA 001A6E18 <- EU 001A6E18 (Ghidra, non-matching)
// GLOBAL DAT_001a6e2c int

undefined4 func_001A6E18(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a6e2c + 0x84;
  *param_1 = DAT_001a6e2c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

