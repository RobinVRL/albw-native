#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001ae2f0;

// USA 001AE2DC <- EU 001AE2DC (Ghidra, non-matching)
// GLOBAL DAT_001ae2f0 int

undefined4 func_001AE2DC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001ae2f0 + 0x84;
  *param_1 = DAT_001ae2f0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

