#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00261cc0;

// USA 00261C84 <- EU 00261CAC (Ghidra, non-matching)
// GLOBAL DAT_00261cc0 int

undefined4 func_00261C84(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00261cc0 + 0x84;
  *param_1 = DAT_00261cc0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

