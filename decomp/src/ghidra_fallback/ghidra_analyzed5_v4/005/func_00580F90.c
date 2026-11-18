#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580fb8;
extern undefined4 *DAT_00580fbc;
extern undefined4 DAT_00580fc0;

// USA 00580F90 <- EU 00580F68 (Ghidra, non-matching)
// GLOBAL DAT_00580fb8 uint *
// GLOBAL DAT_00580fbc undefined4 *
// GLOBAL DAT_00580fc0 undefined4

bool func_00580F90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580fb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580fb8), iVar1 != 0)) {
    *DAT_00580fbc = DAT_00580fc0;
  }
  return DAT_00580fbc == param_2;
}

