#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_002b559c;
extern int DAT_002b55a0;

// USA 002B5584 <- EU 002B5560 (Ghidra, non-matching)
// GLOBAL DAT_002b559c int
// GLOBAL DAT_002b55a0 int

undefined4 func_002B5584(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002b559c + 0x84;
  *param_1 = DAT_002b559c;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x244);
  iVar1 = DAT_002b55a0;
  *param_1 = DAT_002b55a0;
  param_1[200] = iVar1 + 0x84;
  return func_001510A4(param_1);
}

