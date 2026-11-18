#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b728;
extern undefined4 *DAT_0055b72c;
extern undefined4 DAT_0055b730;
extern uint *DAT_0055b734;
extern undefined4 *DAT_0055b738;
extern undefined4 DAT_0055b73c;

// USA 0055B6B4 <- EU 0055B68C (Ghidra, non-matching)
// GLOBAL DAT_0055b728 uint *
// GLOBAL DAT_0055b72c undefined4 *
// GLOBAL DAT_0055b730 undefined4
// GLOBAL DAT_0055b734 uint *
// GLOBAL DAT_0055b738 undefined4 *
// GLOBAL DAT_0055b73c undefined4

undefined4 func_0055B6B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b728), iVar1 != 0)) {
    *DAT_0055b72c = DAT_0055b730;
  }
  if (DAT_0055b72c != param_2) {
    if (((*DAT_0055b734 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b734), iVar1 != 0)) {
      *DAT_0055b738 = DAT_0055b73c;
    }
    if (DAT_0055b738 != param_2) {
      return 0;
    }
  }
  return 1;
}

