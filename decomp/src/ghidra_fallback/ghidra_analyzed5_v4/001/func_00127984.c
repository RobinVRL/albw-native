#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00127998;

// USA 00127984 <- EU 00127984 (Ghidra, non-matching)
// GLOBAL DAT_00127998 int

undefined4 func_00127984(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00127998 + 0x84;
  *param_1 = DAT_00127998;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

