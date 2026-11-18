#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00156fa0;

// USA 00156F88 <- EU 00156F8C (Ghidra, non-matching)
// GLOBAL DAT_00156fa0 int

undefined4 func_00156F88(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00156fa0 + 0x84;
  *param_1 = DAT_00156fa0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

