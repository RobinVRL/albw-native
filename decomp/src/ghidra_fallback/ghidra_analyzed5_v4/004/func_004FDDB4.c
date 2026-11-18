#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004fdda0;

// USA 004FDDB4 <- EU 004FDD8C (Ghidra, non-matching)
// GLOBAL DAT_004fdda0 int

undefined4 func_004FDDB4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004fdda0 + 0x84;
  *param_1 = DAT_004fdda0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

