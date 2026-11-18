#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e3ec;
extern undefined4 *DAT_0055e3f0;
extern undefined4 DAT_0055e3f4;
extern uint *DAT_0055e3f8;
extern undefined4 *DAT_0055e3fc;
extern undefined4 DAT_0055e400;

// USA 0055E378 <- EU 0055E350 (Ghidra, non-matching)
// GLOBAL DAT_0055e3ec uint *
// GLOBAL DAT_0055e3f0 undefined4 *
// GLOBAL DAT_0055e3f4 undefined4
// GLOBAL DAT_0055e3f8 uint *
// GLOBAL DAT_0055e3fc undefined4 *
// GLOBAL DAT_0055e400 undefined4

undefined4 func_0055E378(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e3ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e3ec), iVar1 != 0)) {
    *DAT_0055e3f0 = DAT_0055e3f4;
  }
  if (DAT_0055e3f0 != param_2) {
    if (((*DAT_0055e3f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e3f8), iVar1 != 0)) {
      *DAT_0055e3fc = DAT_0055e400;
    }
    if (DAT_0055e3fc != param_2) {
      return 0;
    }
  }
  return 1;
}

