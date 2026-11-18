#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00264fdc;

// USA 00264FA0 <- EU 00264FC8 (Ghidra, non-matching)
// GLOBAL DAT_00264fdc int

undefined4 func_00264FA0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00264fdc + 0x84;
  *param_1 = DAT_00264fdc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

