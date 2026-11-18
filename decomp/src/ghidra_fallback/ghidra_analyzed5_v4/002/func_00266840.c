#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0026687c;

// USA 00266840 <- EU 00266868 (Ghidra, non-matching)
// GLOBAL DAT_0026687c int

undefined4 func_00266840(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0026687c + 0x84;
  *param_1 = DAT_0026687c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

