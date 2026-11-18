#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054edec;
extern undefined4 *DAT_0054edf0;
extern undefined4 DAT_0054edf4;
extern uint *DAT_0054edf8;
extern undefined4 *DAT_0054edfc;
extern undefined4 DAT_0054ee00;
extern uint *DAT_0054ee04;
extern undefined4 *DAT_0054ee08;
extern undefined4 DAT_0054ee0c;

// USA 0054ED34 <- EU 0054ED0C (Ghidra, non-matching)
// GLOBAL DAT_0054edec uint *
// GLOBAL DAT_0054edf0 undefined4 *
// GLOBAL DAT_0054edf4 undefined4
// GLOBAL DAT_0054edf8 uint *
// GLOBAL DAT_0054edfc undefined4 *
// GLOBAL DAT_0054ee00 undefined4
// GLOBAL DAT_0054ee04 uint *
// GLOBAL DAT_0054ee08 undefined4 *
// GLOBAL DAT_0054ee0c undefined4

undefined4 func_0054ED34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054edec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054edec), iVar1 != 0)) {
    *DAT_0054edf0 = DAT_0054edf4;
  }
  if (DAT_0054edf0 != param_2) {
    if (((*DAT_0054edf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054edf8), iVar1 != 0)) {
      *DAT_0054edfc = DAT_0054ee00;
    }
    if (DAT_0054edfc != param_2) {
      if (((*DAT_0054ee04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ee04), iVar1 != 0)) {
        *DAT_0054ee08 = DAT_0054ee0c;
      }
      if (DAT_0054ee08 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

