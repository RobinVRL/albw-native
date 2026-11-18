#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fcb4;
extern undefined4 *DAT_0057fcb8;
extern undefined4 DAT_0057fcbc;

// USA 0057FC8C <- EU 0057FC64 (Ghidra, non-matching)
// GLOBAL DAT_0057fcb4 uint *
// GLOBAL DAT_0057fcb8 undefined4 *
// GLOBAL DAT_0057fcbc undefined4

bool func_0057FC8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fcb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fcb4), iVar1 != 0)) {
    *DAT_0057fcb8 = DAT_0057fcbc;
  }
  return DAT_0057fcb8 == param_2;
}

