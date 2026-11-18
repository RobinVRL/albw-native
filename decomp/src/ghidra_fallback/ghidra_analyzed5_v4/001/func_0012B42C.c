#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0012b440;

// USA 0012B42C <- EU 0012B42C (Ghidra, non-matching)
// GLOBAL DAT_0012b440 int

undefined4 func_0012B42C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0012b440 + 0x84;
  *param_1 = DAT_0012b440;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

