#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058ebf8;

// USA 0058EC0C <- EU 0058EBE4 (Ghidra, non-matching)
// GLOBAL DAT_0058ebf8 int

undefined4 func_0058EC0C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ebf8;
  *param_1 = DAT_0058ebf8 + 0x54;
  param_1[-0xe] = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

