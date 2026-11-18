#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058eb38;

// USA 0058EB4C <- EU 0058EB24 (Ghidra, non-matching)
// GLOBAL DAT_0058eb38 int

undefined4 func_0058EB4C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058eb38;
  *param_1 = DAT_0058eb38 + 0xac;
  param_1[-0xe] = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

