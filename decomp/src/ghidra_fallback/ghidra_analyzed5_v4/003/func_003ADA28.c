#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_003ada18;

// USA 003ADA28 <- EU 003ADA04 (Ghidra, non-matching)
// GLOBAL DAT_003ada18 int

undefined4 func_003ADA28(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_003ada18 + 0x54;
  *param_1 = DAT_003ada18;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

