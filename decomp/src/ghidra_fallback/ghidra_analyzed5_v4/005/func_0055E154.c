#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e1c8;
extern undefined4 *DAT_0055e1cc;
extern undefined4 DAT_0055e1d0;
extern uint *DAT_0055e1d4;
extern undefined4 *DAT_0055e1d8;
extern undefined4 DAT_0055e1dc;

// USA 0055E154 <- EU 0055E12C (Ghidra, non-matching)
// GLOBAL DAT_0055e1c8 uint *
// GLOBAL DAT_0055e1cc undefined4 *
// GLOBAL DAT_0055e1d0 undefined4
// GLOBAL DAT_0055e1d4 uint *
// GLOBAL DAT_0055e1d8 undefined4 *
// GLOBAL DAT_0055e1dc undefined4

undefined4 func_0055E154(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e1c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e1c8), iVar1 != 0)) {
    *DAT_0055e1cc = DAT_0055e1d0;
  }
  if (DAT_0055e1cc != param_2) {
    if (((*DAT_0055e1d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e1d4), iVar1 != 0)) {
      *DAT_0055e1d8 = DAT_0055e1dc;
    }
    if (DAT_0055e1d8 != param_2) {
      return 0;
    }
  }
  return 1;
}

