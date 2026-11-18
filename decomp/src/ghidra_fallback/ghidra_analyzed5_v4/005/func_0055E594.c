#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e608;
extern undefined4 *DAT_0055e60c;
extern undefined4 DAT_0055e610;
extern uint *DAT_0055e614;
extern undefined4 *DAT_0055e618;
extern undefined4 DAT_0055e61c;

// USA 0055E594 <- EU 0055E56C (Ghidra, non-matching)
// GLOBAL DAT_0055e608 uint *
// GLOBAL DAT_0055e60c undefined4 *
// GLOBAL DAT_0055e610 undefined4
// GLOBAL DAT_0055e614 uint *
// GLOBAL DAT_0055e618 undefined4 *
// GLOBAL DAT_0055e61c undefined4

undefined4 func_0055E594(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e608 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e608), iVar1 != 0)) {
    *DAT_0055e60c = DAT_0055e610;
  }
  if (DAT_0055e60c != param_2) {
    if (((*DAT_0055e614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e614), iVar1 != 0)) {
      *DAT_0055e618 = DAT_0055e61c;
    }
    if (DAT_0055e618 != param_2) {
      return 0;
    }
  }
  return 1;
}

