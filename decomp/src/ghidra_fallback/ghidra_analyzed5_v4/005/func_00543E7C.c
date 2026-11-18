#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543ef0;
extern undefined4 *DAT_00543ef4;
extern undefined4 DAT_00543ef8;
extern uint *DAT_00543efc;
extern undefined4 *DAT_00543f00;
extern undefined4 DAT_00543f04;

// USA 00543E7C <- EU 00543E54 (Ghidra, non-matching)
// GLOBAL DAT_00543ef0 uint *
// GLOBAL DAT_00543ef4 undefined4 *
// GLOBAL DAT_00543ef8 undefined4
// GLOBAL DAT_00543efc uint *
// GLOBAL DAT_00543f00 undefined4 *
// GLOBAL DAT_00543f04 undefined4

undefined4 func_00543E7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543ef0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543ef0), iVar1 != 0)) {
    *DAT_00543ef4 = DAT_00543ef8;
  }
  if (DAT_00543ef4 != param_2) {
    if (((*DAT_00543efc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543efc), iVar1 != 0)) {
      *DAT_00543f00 = DAT_00543f04;
    }
    if (DAT_00543f00 != param_2) {
      return 0;
    }
  }
  return 1;
}

