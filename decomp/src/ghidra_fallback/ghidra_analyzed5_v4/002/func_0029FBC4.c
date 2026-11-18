#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0029fbb4;

// USA 0029FBC4 <- EU 0029FBA0 (Ghidra, non-matching)
// GLOBAL DAT_0029fbb4 int

undefined4 func_0029FBC4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0029fbb4 + 0x84;
  *param_1 = DAT_0029fbb4;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

