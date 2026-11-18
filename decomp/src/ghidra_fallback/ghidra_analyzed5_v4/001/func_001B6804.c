#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001b6818;

// USA 001B6804 <- EU 001B6804 (Ghidra, non-matching)
// GLOBAL DAT_001b6818 int

undefined4 func_001B6804(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001b6818 + 0x84;
  *param_1 = DAT_001b6818;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

