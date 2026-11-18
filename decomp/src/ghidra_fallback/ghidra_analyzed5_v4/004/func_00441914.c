#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_00441910;

// USA 00441914 <- EU 004418F4 (Ghidra, non-matching)
// GLOBAL DAT_00441910 int

undefined4 func_00441914(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00441910 + 0xac;
  param_1[-0xe] = DAT_00441910;
  *param_1 = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

