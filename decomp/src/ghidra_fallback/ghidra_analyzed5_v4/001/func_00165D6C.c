#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00165d84;

// USA 00165D6C <- EU 00165D70 (Ghidra, non-matching)
// GLOBAL DAT_00165d84 int

undefined4 func_00165D6C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00165d84 + 0x84;
  *param_1 = DAT_00165d84;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

