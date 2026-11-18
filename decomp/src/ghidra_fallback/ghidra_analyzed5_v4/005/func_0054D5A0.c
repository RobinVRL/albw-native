#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d614;
extern undefined4 *DAT_0054d618;
extern undefined4 DAT_0054d61c;
extern uint *DAT_0054d620;
extern undefined4 *DAT_0054d624;
extern undefined4 DAT_0054d628;

// USA 0054D5A0 <- EU 0054D578 (Ghidra, non-matching)
// GLOBAL DAT_0054d614 uint *
// GLOBAL DAT_0054d618 undefined4 *
// GLOBAL DAT_0054d61c undefined4
// GLOBAL DAT_0054d620 uint *
// GLOBAL DAT_0054d624 undefined4 *
// GLOBAL DAT_0054d628 undefined4

undefined4 func_0054D5A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d614), iVar1 != 0)) {
    *DAT_0054d618 = DAT_0054d61c;
  }
  if (DAT_0054d618 != param_2) {
    if (((*DAT_0054d620 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d620), iVar1 != 0)) {
      *DAT_0054d624 = DAT_0054d628;
    }
    if (DAT_0054d624 != param_2) {
      return 0;
    }
  }
  return 1;
}

