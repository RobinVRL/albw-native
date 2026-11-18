#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0032fad4;

// USA 0032FAE4 <- EU 0032FAC0 (Ghidra, non-matching)
// GLOBAL DAT_0032fad4 int

undefined4 func_0032FAE4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0032fad4 + 0x84;
  *param_1 = DAT_0032fad4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

