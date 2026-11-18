#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00240f3c;

// USA 00240F28 <- EU 00240F28 (Ghidra, non-matching)
// GLOBAL DAT_00240f3c int

undefined4 func_00240F28(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00240f3c + 0x54;
  *param_1 = DAT_00240f3c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

