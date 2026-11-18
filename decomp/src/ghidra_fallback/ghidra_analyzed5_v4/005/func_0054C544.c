#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c5fc;
extern undefined4 *DAT_0054c600;
extern undefined4 DAT_0054c604;
extern uint *DAT_0054c608;
extern undefined4 *DAT_0054c60c;
extern undefined4 DAT_0054c610;
extern uint *DAT_0054c614;
extern undefined4 *DAT_0054c618;
extern undefined4 DAT_0054c61c;

// USA 0054C544 <- EU 0054C51C (Ghidra, non-matching)
// GLOBAL DAT_0054c5fc uint *
// GLOBAL DAT_0054c600 undefined4 *
// GLOBAL DAT_0054c604 undefined4
// GLOBAL DAT_0054c608 uint *
// GLOBAL DAT_0054c60c undefined4 *
// GLOBAL DAT_0054c610 undefined4
// GLOBAL DAT_0054c614 uint *
// GLOBAL DAT_0054c618 undefined4 *
// GLOBAL DAT_0054c61c undefined4

undefined4 func_0054C544(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c5fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c5fc), iVar1 != 0)) {
    *DAT_0054c600 = DAT_0054c604;
  }
  if (DAT_0054c600 != param_2) {
    if (((*DAT_0054c608 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c608), iVar1 != 0)) {
      *DAT_0054c60c = DAT_0054c610;
    }
    if (DAT_0054c60c != param_2) {
      if (((*DAT_0054c614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c614), iVar1 != 0)) {
        *DAT_0054c618 = DAT_0054c61c;
      }
      if (DAT_0054c618 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

