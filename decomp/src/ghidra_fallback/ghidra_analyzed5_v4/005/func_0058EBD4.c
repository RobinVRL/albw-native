#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058ebc0;

// USA 0058EBD4 <- EU 0058EBAC (Ghidra, non-matching)
// GLOBAL DAT_0058ebc0 int

undefined4 func_0058EBD4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ebc0;
  *param_1 = DAT_0058ebc0 + 0x54;
  param_1[-0xe] = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

