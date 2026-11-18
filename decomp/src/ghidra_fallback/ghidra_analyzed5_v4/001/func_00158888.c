#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001588a0;

// USA 00158888 <- EU 0015888C (Ghidra, non-matching)
// GLOBAL DAT_001588a0 int

undefined4 func_00158888(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001588a0 + 0x84;
  *param_1 = DAT_001588a0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

