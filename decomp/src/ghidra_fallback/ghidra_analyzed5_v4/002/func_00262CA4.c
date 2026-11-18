#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00262ce0;

// USA 00262CA4 <- EU 00262CCC (Ghidra, non-matching)
// GLOBAL DAT_00262ce0 int

undefined4 func_00262CA4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00262ce0 + 0x84;
  *param_1 = DAT_00262ce0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

