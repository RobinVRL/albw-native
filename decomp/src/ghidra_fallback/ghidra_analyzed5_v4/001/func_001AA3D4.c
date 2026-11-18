#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001aa3e8;

// USA 001AA3D4 <- EU 001AA3D4 (Ghidra, non-matching)
// GLOBAL DAT_001aa3e8 int

undefined4 func_001AA3D4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001aa3e8 + 0x84;
  *param_1 = DAT_001aa3e8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

