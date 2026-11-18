#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00123dc4;

// USA 00123DB0 <- EU 00123DB0 (Ghidra, non-matching)
// GLOBAL DAT_00123dc4 int

undefined4 func_00123DB0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00123dc4 + 0x84;
  *param_1 = DAT_00123dc4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

