#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052f5fc;
extern undefined4 *DAT_0052f600;
extern undefined4 DAT_0052f604;
extern uint *DAT_0052f608;
extern undefined4 *DAT_0052f60c;
extern undefined4 DAT_0052f610;
extern uint *DAT_0052f614;
extern undefined4 *DAT_0052f618;
extern undefined4 DAT_0052f61c;
extern uint *DAT_0052f620;
extern undefined4 *DAT_0052f624;
extern undefined4 DAT_0052f628;

// USA 0052F500 <- EU 0052F4D8 (Ghidra, non-matching)
// GLOBAL DAT_0052f5fc uint *
// GLOBAL DAT_0052f600 undefined4 *
// GLOBAL DAT_0052f604 undefined4
// GLOBAL DAT_0052f608 uint *
// GLOBAL DAT_0052f60c undefined4 *
// GLOBAL DAT_0052f610 undefined4
// GLOBAL DAT_0052f614 uint *
// GLOBAL DAT_0052f618 undefined4 *
// GLOBAL DAT_0052f61c undefined4
// GLOBAL DAT_0052f620 uint *
// GLOBAL DAT_0052f624 undefined4 *
// GLOBAL DAT_0052f628 undefined4

undefined4 func_0052F500(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052f5fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f5fc), iVar1 != 0)) {
    *DAT_0052f600 = DAT_0052f604;
  }
  if (DAT_0052f600 != param_2) {
    if (((*DAT_0052f608 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f608), iVar1 != 0)) {
      *DAT_0052f60c = DAT_0052f610;
    }
    if (DAT_0052f60c != param_2) {
      if (((*DAT_0052f614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f614), iVar1 != 0)) {
        *DAT_0052f618 = DAT_0052f61c;
      }
      if (DAT_0052f618 != param_2) {
        if (((*DAT_0052f620 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f620), iVar1 != 0))
        {
          *DAT_0052f624 = DAT_0052f628;
        }
        if (DAT_0052f624 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

