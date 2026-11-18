#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004feb90;

// USA 004FEBA4 <- EU 004FEB7C (Ghidra, non-matching)
// GLOBAL DAT_004feb90 int

undefined4 func_004FEBA4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004feb90 + 0x84;
  *param_1 = DAT_004feb90;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

