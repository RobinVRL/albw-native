#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0032f460;

// USA 0032F470 <- EU 0032F44C (Ghidra, non-matching)
// GLOBAL DAT_0032f460 int

undefined4 func_0032F470(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0032f460 + 0x84;
  *param_1 = DAT_0032f460;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

