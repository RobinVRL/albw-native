#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00203f30;

// USA 00203F1C <- EU 00203F1C (Ghidra, non-matching)
// GLOBAL DAT_00203f30 int

undefined4 func_00203F1C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00203f30 + 0x84;
  *param_1 = DAT_00203f30;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

