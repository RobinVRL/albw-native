#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d554;
extern undefined4 *DAT_0054d558;
extern undefined4 DAT_0054d55c;
extern uint *DAT_0054d560;
extern undefined4 *DAT_0054d564;
extern undefined4 DAT_0054d568;
extern uint *DAT_0054d56c;
extern undefined4 *DAT_0054d570;
extern undefined4 DAT_0054d574;

// USA 0054D49C <- EU 0054D474 (Ghidra, non-matching)
// GLOBAL DAT_0054d554 uint *
// GLOBAL DAT_0054d558 undefined4 *
// GLOBAL DAT_0054d55c undefined4
// GLOBAL DAT_0054d560 uint *
// GLOBAL DAT_0054d564 undefined4 *
// GLOBAL DAT_0054d568 undefined4
// GLOBAL DAT_0054d56c uint *
// GLOBAL DAT_0054d570 undefined4 *
// GLOBAL DAT_0054d574 undefined4

undefined4 func_0054D49C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d554 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d554), iVar1 != 0)) {
    *DAT_0054d558 = DAT_0054d55c;
  }
  if (DAT_0054d558 != param_2) {
    if (((*DAT_0054d560 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d560), iVar1 != 0)) {
      *DAT_0054d564 = DAT_0054d568;
    }
    if (DAT_0054d564 != param_2) {
      if (((*DAT_0054d56c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d56c), iVar1 != 0)) {
        *DAT_0054d570 = DAT_0054d574;
      }
      if (DAT_0054d570 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

