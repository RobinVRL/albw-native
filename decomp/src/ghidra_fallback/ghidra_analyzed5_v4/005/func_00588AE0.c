#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00588b98;
extern undefined4 *DAT_00588b9c;
extern undefined4 DAT_00588ba0;
extern uint *DAT_00588ba4;
extern undefined4 *DAT_00588ba8;
extern undefined4 DAT_00588bac;
extern uint *DAT_00588bb0;
extern undefined4 *DAT_00588bb4;
extern undefined4 DAT_00588bb8;

// USA 00588AE0 <- EU 00588AB8 (Ghidra, non-matching)
// GLOBAL DAT_00588b98 uint *
// GLOBAL DAT_00588b9c undefined4 *
// GLOBAL DAT_00588ba0 undefined4
// GLOBAL DAT_00588ba4 uint *
// GLOBAL DAT_00588ba8 undefined4 *
// GLOBAL DAT_00588bac undefined4
// GLOBAL DAT_00588bb0 uint *
// GLOBAL DAT_00588bb4 undefined4 *
// GLOBAL DAT_00588bb8 undefined4

undefined4 func_00588AE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00588b98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00588b98), iVar1 != 0)) {
    *DAT_00588b9c = DAT_00588ba0;
  }
  if (DAT_00588b9c != param_2) {
    if (((*DAT_00588ba4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00588ba4), iVar1 != 0)) {
      *DAT_00588ba8 = DAT_00588bac;
    }
    if (DAT_00588ba8 != param_2) {
      if (((*DAT_00588bb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00588bb0), iVar1 != 0)) {
        *DAT_00588bb4 = DAT_00588bb8;
      }
      if (DAT_00588bb4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

