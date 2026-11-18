#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_005026d4;

// USA 005026E8 <- EU 005026C0 (Ghidra, non-matching)
// GLOBAL DAT_005026d4 int

undefined4 func_005026E8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_005026d4 + 0x84;
  *param_1 = DAT_005026d4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

