#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00302c94;

// USA 00302CA4 <- EU 00302C80 (Ghidra, non-matching)
// GLOBAL DAT_00302c94 int

undefined4 func_00302CA4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00302c94 + 0x84;
  *param_1 = DAT_00302c94;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

