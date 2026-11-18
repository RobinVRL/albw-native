#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00123ddc;

// USA 00123DC8 <- EU 00123DC8 (Ghidra, non-matching)
// GLOBAL DAT_00123ddc int

undefined4 func_00123DC8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00123ddc + 0x84;
  *param_1 = DAT_00123ddc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

