#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00214748;

// USA 00214734 <- EU 00214734 (Ghidra, non-matching)
// GLOBAL DAT_00214748 int

undefined4 func_00214734(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00214748 + 0x84;
  *param_1 = DAT_00214748;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

