#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_00488ab8;

// USA 00488AC4 <- EU 00488A9C (Ghidra, non-matching)
// GLOBAL DAT_00488ab8 int

undefined4 func_00488AC4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00488ab8 + 0xac;
  param_1[-0xe] = DAT_00488ab8;
  *param_1 = iVar1;
  return func_0044191C(param_1 + -0xe);
}

