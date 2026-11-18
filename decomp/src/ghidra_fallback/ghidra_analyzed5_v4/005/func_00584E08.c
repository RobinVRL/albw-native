#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00584e30;
extern undefined4 *DAT_00584e34;
extern undefined4 DAT_00584e38;

// USA 00584E08 <- EU 00584DE0 (Ghidra, non-matching)
// GLOBAL DAT_00584e30 uint *
// GLOBAL DAT_00584e34 undefined4 *
// GLOBAL DAT_00584e38 undefined4

bool func_00584E08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584e30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584e30), iVar1 != 0)) {
    *DAT_00584e34 = DAT_00584e38;
  }
  return DAT_00584e34 == param_2;
}

