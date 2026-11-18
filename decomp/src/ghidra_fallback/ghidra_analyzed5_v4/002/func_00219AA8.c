#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00219abc;

// USA 00219AA8 <- EU 00219AA8 (Ghidra, non-matching)
// GLOBAL DAT_00219abc int

undefined4 func_00219AA8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00219abc + 0x84;
  *param_1 = DAT_00219abc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

