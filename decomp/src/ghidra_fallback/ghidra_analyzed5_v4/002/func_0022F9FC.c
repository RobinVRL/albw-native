#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0022fa10;

// USA 0022F9FC <- EU 0022F9FC (Ghidra, non-matching)
// GLOBAL DAT_0022fa10 int

undefined4 func_0022F9FC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0022fa10 + 0x84;
  *param_1 = DAT_0022fa10;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

