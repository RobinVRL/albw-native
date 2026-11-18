#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058eb68;

// USA 0058EB7C <- EU 0058EB54 (Ghidra, non-matching)
// GLOBAL DAT_0058eb68 int

undefined4 func_0058EB7C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058eb68;
  *param_1 = DAT_0058eb68 + 0x54;
  param_1[-0xe] = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

