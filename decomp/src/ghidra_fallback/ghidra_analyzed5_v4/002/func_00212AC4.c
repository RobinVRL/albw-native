#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00212ad8;

// USA 00212AC4 <- EU 00212AC4 (Ghidra, non-matching)
// GLOBAL DAT_00212ad8 int

undefined4 func_00212AC4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00212ad8 + 0x84;
  *param_1 = DAT_00212ad8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

