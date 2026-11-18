#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00205d1c;

// USA 00205D08 <- EU 00205D08 (Ghidra, non-matching)
// GLOBAL DAT_00205d1c int

undefined4 func_00205D08(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00205d1c + 0x84;
  *param_1 = DAT_00205d1c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

