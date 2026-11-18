#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00358f90;

// USA 00358FA0 <- EU 00358F7C (Ghidra, non-matching)
// GLOBAL DAT_00358f90 int

undefined4 func_00358FA0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00358f90 + 0x84;
  *param_1 = DAT_00358f90;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

