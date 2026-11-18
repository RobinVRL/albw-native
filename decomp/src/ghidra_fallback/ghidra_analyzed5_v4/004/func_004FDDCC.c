#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004fddb8;

// USA 004FDDCC <- EU 004FDDA4 (Ghidra, non-matching)
// GLOBAL DAT_004fddb8 int

undefined4 func_004FDDCC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004fddb8 + 0x84;
  *param_1 = DAT_004fddb8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

