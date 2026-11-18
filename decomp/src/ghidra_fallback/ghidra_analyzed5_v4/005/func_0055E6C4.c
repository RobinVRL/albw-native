#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e738;
extern undefined4 *DAT_0055e73c;
extern undefined4 DAT_0055e740;
extern uint *DAT_0055e744;
extern undefined4 *DAT_0055e748;
extern undefined4 DAT_0055e74c;

// USA 0055E6C4 <- EU 0055E69C (Ghidra, non-matching)
// GLOBAL DAT_0055e738 uint *
// GLOBAL DAT_0055e73c undefined4 *
// GLOBAL DAT_0055e740 undefined4
// GLOBAL DAT_0055e744 uint *
// GLOBAL DAT_0055e748 undefined4 *
// GLOBAL DAT_0055e74c undefined4

undefined4 func_0055E6C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e738 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e738), iVar1 != 0)) {
    *DAT_0055e73c = DAT_0055e740;
  }
  if (DAT_0055e73c != param_2) {
    if (((*DAT_0055e744 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e744), iVar1 != 0)) {
      *DAT_0055e748 = DAT_0055e74c;
    }
    if (DAT_0055e748 != param_2) {
      return 0;
    }
  }
  return 1;
}

