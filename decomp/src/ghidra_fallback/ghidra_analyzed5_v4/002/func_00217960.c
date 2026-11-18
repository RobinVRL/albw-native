#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00217974;

// USA 00217960 <- EU 00217960 (Ghidra, non-matching)
// GLOBAL DAT_00217974 int

undefined4 func_00217960(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00217974 + 0x84;
  *param_1 = DAT_00217974;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

