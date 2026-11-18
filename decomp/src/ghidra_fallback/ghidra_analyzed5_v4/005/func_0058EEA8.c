#include "ghidra_types.h"

extern int func_0031C00C(int *param_1);
extern int func_004B9AA0(int *param_1);
extern int DAT_0058eea4;

// USA 0058EEA8 <- EU 0058EE80 (Ghidra, non-matching)
// GLOBAL DAT_0058eea4 int

undefined4 func_0058EEA8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0058eea4 + 0x54;
  param_1[-0xe] = DAT_0058eea4;
  *param_1 = iVar2;
  piVar1 = func_0031C00C(param_1 + 0xf);
  return func_004B9AA0(piVar1 + -0x1d);
}

