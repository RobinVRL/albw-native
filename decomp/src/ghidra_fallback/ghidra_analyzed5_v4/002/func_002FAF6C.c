#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002faf5c;

// USA 002FAF6C <- EU 002FAF48 (Ghidra, non-matching)
// GLOBAL DAT_002faf5c int

undefined4 func_002FAF6C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002faf5c + 0x84;
  *param_1 = DAT_002faf5c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

