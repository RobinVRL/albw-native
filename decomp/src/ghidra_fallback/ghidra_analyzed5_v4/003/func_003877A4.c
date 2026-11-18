#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00387794;

// USA 003877A4 <- EU 00387780 (Ghidra, non-matching)
// GLOBAL DAT_00387794 int

undefined4 func_003877A4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00387794 + 0x84;
  *param_1 = DAT_00387794;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

