#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0053d614;
extern undefined4 *DAT_0053d618;
extern undefined4 DAT_0053d61c;
extern uint *DAT_0053d620;
extern undefined4 *DAT_0053d624;
extern undefined4 DAT_0053d628;

// USA 0053D59C <- EU 0053D574 (Ghidra, non-matching)
// GLOBAL DAT_0053d614 uint *
// GLOBAL DAT_0053d618 undefined4 *
// GLOBAL DAT_0053d61c undefined4
// GLOBAL DAT_0053d620 uint *
// GLOBAL DAT_0053d624 undefined4 *
// GLOBAL DAT_0053d628 undefined4

undefined4 func_0053D59C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d614), iVar1 != 0)) {
    *DAT_0053d618 = DAT_0053d61c;
  }
  if (DAT_0053d618 != param_2) {
    if (((*DAT_0053d620 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d620), iVar1 != 0)) {
      *DAT_0053d624 = DAT_0053d628;
    }
    if (DAT_0053d624 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

