#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0019ebec;

// USA 0019EBD8 <- EU 0019EBD8 (Ghidra, non-matching)
// GLOBAL DAT_0019ebec int

undefined4 func_0019EBD8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0019ebec + 0x84;
  *param_1 = DAT_0019ebec;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

