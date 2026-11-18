#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002186b8;

// USA 002186A4 <- EU 002186A4 (Ghidra, non-matching)
// GLOBAL DAT_002186b8 int

undefined4 func_002186A4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002186b8 + 0x84;
  *param_1 = DAT_002186b8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

