#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0012c69c;

// USA 0012C688 <- EU 0012C688 (Ghidra, non-matching)
// GLOBAL DAT_0012c69c int

undefined4 func_0012C688(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0012c69c + 0x84;
  *param_1 = DAT_0012c69c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

