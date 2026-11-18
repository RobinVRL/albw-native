#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00556608;
extern undefined4 *DAT_0055660c;
extern undefined4 DAT_00556610;
extern uint *DAT_00556614;
extern undefined4 *DAT_00556618;
extern undefined4 DAT_0055661c;
extern uint *DAT_00556620;
extern undefined4 *DAT_00556624;
extern undefined4 DAT_00556628;
extern uint *DAT_0055662c;
extern undefined4 *DAT_00556630;
extern undefined4 DAT_00556634;

// USA 0055650C <- EU 005564E4 (Ghidra, non-matching)
// GLOBAL DAT_00556608 uint *
// GLOBAL DAT_0055660c undefined4 *
// GLOBAL DAT_00556610 undefined4
// GLOBAL DAT_00556614 uint *
// GLOBAL DAT_00556618 undefined4 *
// GLOBAL DAT_0055661c undefined4
// GLOBAL DAT_00556620 uint *
// GLOBAL DAT_00556624 undefined4 *
// GLOBAL DAT_00556628 undefined4
// GLOBAL DAT_0055662c uint *
// GLOBAL DAT_00556630 undefined4 *
// GLOBAL DAT_00556634 undefined4

undefined4 func_0055650C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00556608 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556608), iVar1 != 0)) {
    *DAT_0055660c = DAT_00556610;
  }
  if (DAT_0055660c != param_2) {
    if (((*DAT_00556614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556614), iVar1 != 0)) {
      *DAT_00556618 = DAT_0055661c;
    }
    if (DAT_00556618 != param_2) {
      if (((*DAT_00556620 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556620), iVar1 != 0)) {
        *DAT_00556624 = DAT_00556628;
      }
      if (DAT_00556624 != param_2) {
        if (((*DAT_0055662c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055662c), iVar1 != 0))
        {
          *DAT_00556630 = DAT_00556634;
        }
        if (DAT_00556630 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

