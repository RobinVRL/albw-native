#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b5c0;
extern undefined4 *DAT_0055b5c4;
extern undefined4 DAT_0055b5c8;
extern uint *DAT_0055b5cc;
extern undefined4 *DAT_0055b5d0;
extern undefined4 DAT_0055b5d4;

// USA 0055B54C <- EU 0055B524 (Ghidra, non-matching)
// GLOBAL DAT_0055b5c0 uint *
// GLOBAL DAT_0055b5c4 undefined4 *
// GLOBAL DAT_0055b5c8 undefined4
// GLOBAL DAT_0055b5cc uint *
// GLOBAL DAT_0055b5d0 undefined4 *
// GLOBAL DAT_0055b5d4 undefined4

undefined4 func_0055B54C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b5c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b5c0), iVar1 != 0)) {
    *DAT_0055b5c4 = DAT_0055b5c8;
  }
  if (DAT_0055b5c4 != param_2) {
    if (((*DAT_0055b5cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b5cc), iVar1 != 0)) {
      *DAT_0055b5d0 = DAT_0055b5d4;
    }
    if (DAT_0055b5d0 != param_2) {
      return 0;
    }
  }
  return 1;
}

