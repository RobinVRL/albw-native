#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001b20e4;

// USA 001B20D0 <- EU 001B20D0 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b20e4 int

undefined4 func_001B20D0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001b20e4 + 0x84;
  *param_1 = DAT_001b20e4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

