#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0015abe8;

// USA 0015ABD0 <- EU 0015ABD4 (Ghidra, non-matching)
// GLOBAL DAT_0015abe8 int

undefined4 func_0015ABD0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0015abe8 + 0x84;
  *param_1 = DAT_0015abe8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

