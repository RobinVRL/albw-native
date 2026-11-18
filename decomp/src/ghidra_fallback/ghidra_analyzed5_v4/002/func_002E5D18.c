#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002e5d08;

// USA 002E5D18 <- EU 002E5CF4 (Ghidra, non-matching)
// GLOBAL DAT_002e5d08 int

undefined4 func_002E5D18(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002e5d08 + 0x84;
  *param_1 = DAT_002e5d08;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

