#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00588cc8;
extern undefined4 *DAT_00588ccc;
extern undefined4 DAT_00588cd0;

// USA 00588CA0 <- EU 00588C78 (Ghidra, non-matching)
// GLOBAL DAT_00588cc8 uint *
// GLOBAL DAT_00588ccc undefined4 *
// GLOBAL DAT_00588cd0 undefined4

bool func_00588CA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00588cc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00588cc8), iVar1 != 0)) {
    *DAT_00588ccc = DAT_00588cd0;
  }
  return DAT_00588ccc == param_2;
}

