#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0032faa4;

// USA 0032FAB4 <- EU 0032FA90 (Ghidra, non-matching)
// GLOBAL DAT_0032faa4 int

undefined4 func_0032FAB4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0032faa4 + 0x84;
  *param_1 = DAT_0032faa4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

