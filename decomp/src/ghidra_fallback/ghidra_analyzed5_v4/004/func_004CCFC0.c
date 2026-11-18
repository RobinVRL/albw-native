#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004ccfac;

// USA 004CCFC0 <- EU 004CCF98 (Ghidra, non-matching)
// GLOBAL DAT_004ccfac int

undefined4 func_004CCFC0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004ccfac + 0x84;
  *param_1 = DAT_004ccfac;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

