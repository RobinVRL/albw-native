#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004ffbf4;

// USA 004FFC08 <- EU 004FFBE0 (Ghidra, non-matching)
// GLOBAL DAT_004ffbf4 int

undefined4 func_004FFC08(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004ffbf4 + 0x84;
  *param_1 = DAT_004ffbf4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

