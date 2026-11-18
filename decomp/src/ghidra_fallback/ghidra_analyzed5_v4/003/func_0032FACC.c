#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0032fabc;

// USA 0032FACC <- EU 0032FAA8 (Ghidra, non-matching)
// GLOBAL DAT_0032fabc int

undefined4 func_0032FACC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0032fabc + 0x84;
  *param_1 = DAT_0032fabc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

