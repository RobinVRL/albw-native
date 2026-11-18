#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00218688;

// USA 00218674 <- EU 00218674 (Ghidra, non-matching)
// GLOBAL DAT_00218688 int

undefined4 func_00218674(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00218688 + 0x84;
  *param_1 = DAT_00218688;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

