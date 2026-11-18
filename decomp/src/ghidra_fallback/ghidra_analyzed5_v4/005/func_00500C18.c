#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00500c04;

// USA 00500C18 <- EU 00500BF0 (Ghidra, non-matching)
// GLOBAL DAT_00500c04 int

undefined4 func_00500C18(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00500c04 + 0x84;
  *param_1 = DAT_00500c04;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

