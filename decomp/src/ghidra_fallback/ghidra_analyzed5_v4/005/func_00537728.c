#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005377e0;
extern undefined4 *DAT_005377e4;
extern undefined4 DAT_005377e8;
extern uint *DAT_005377ec;
extern undefined4 *DAT_005377f0;
extern undefined4 DAT_005377f4;
extern uint *DAT_005377f8;
extern undefined4 *DAT_005377fc;
extern undefined4 DAT_00537800;

// USA 00537728 <- EU 00537700 (Ghidra, non-matching)
// GLOBAL DAT_005377e0 uint *
// GLOBAL DAT_005377e4 undefined4 *
// GLOBAL DAT_005377e8 undefined4
// GLOBAL DAT_005377ec uint *
// GLOBAL DAT_005377f0 undefined4 *
// GLOBAL DAT_005377f4 undefined4
// GLOBAL DAT_005377f8 uint *
// GLOBAL DAT_005377fc undefined4 *
// GLOBAL DAT_00537800 undefined4

undefined4 func_00537728(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005377e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005377e0), iVar1 != 0)) {
    *DAT_005377e4 = DAT_005377e8;
  }
  if (DAT_005377e4 != param_2) {
    if (((*DAT_005377ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005377ec), iVar1 != 0)) {
      *DAT_005377f0 = DAT_005377f4;
    }
    if (DAT_005377f0 != param_2) {
      if (((*DAT_005377f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005377f8), iVar1 != 0)) {
        *DAT_005377fc = DAT_00537800;
      }
      if (DAT_005377fc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

