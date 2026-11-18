#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e554;
extern undefined4 *DAT_0055e558;
extern undefined4 DAT_0055e55c;
extern uint *DAT_0055e560;
extern undefined4 *DAT_0055e564;
extern undefined4 DAT_0055e568;

// USA 0055E4E0 <- EU 0055E4B8 (Ghidra, non-matching)
// GLOBAL DAT_0055e554 uint *
// GLOBAL DAT_0055e558 undefined4 *
// GLOBAL DAT_0055e55c undefined4
// GLOBAL DAT_0055e560 uint *
// GLOBAL DAT_0055e564 undefined4 *
// GLOBAL DAT_0055e568 undefined4

undefined4 func_0055E4E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e554 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e554), iVar1 != 0)) {
    *DAT_0055e558 = DAT_0055e55c;
  }
  if (DAT_0055e558 != param_2) {
    if (((*DAT_0055e560 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e560), iVar1 != 0)) {
      *DAT_0055e564 = DAT_0055e568;
    }
    if (DAT_0055e564 != param_2) {
      return 0;
    }
  }
  return 1;
}

