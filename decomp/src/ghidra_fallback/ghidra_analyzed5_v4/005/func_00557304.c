#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557378;
extern undefined4 *DAT_0055737c;
extern undefined4 DAT_00557380;
extern uint *DAT_00557384;
extern undefined4 *DAT_00557388;
extern undefined4 DAT_0055738c;

// USA 00557304 <- EU 005572DC (Ghidra, non-matching)
// GLOBAL DAT_00557378 uint *
// GLOBAL DAT_0055737c undefined4 *
// GLOBAL DAT_00557380 undefined4
// GLOBAL DAT_00557384 uint *
// GLOBAL DAT_00557388 undefined4 *
// GLOBAL DAT_0055738c undefined4

undefined4 func_00557304(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557378 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557378), iVar1 != 0)) {
    *DAT_0055737c = DAT_00557380;
  }
  if (DAT_0055737c != param_2) {
    if (((*DAT_00557384 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557384), iVar1 != 0)) {
      *DAT_00557388 = DAT_0055738c;
    }
    if (DAT_00557388 != param_2) {
      return 0;
    }
  }
  return 1;
}

