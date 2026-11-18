#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00548360;
extern undefined4 *DAT_00548364;
extern undefined4 DAT_00548368;
extern uint *DAT_0054836c;
extern undefined4 *DAT_00548370;
extern undefined4 DAT_00548374;
extern uint *DAT_00548378;
extern undefined4 *DAT_0054837c;
extern undefined4 DAT_00548380;
extern uint *DAT_00548384;
extern undefined4 *DAT_00548388;
extern undefined4 DAT_0054838c;

// USA 00548264 <- EU 0054823C (Ghidra, non-matching)
// GLOBAL DAT_00548360 uint *
// GLOBAL DAT_00548364 undefined4 *
// GLOBAL DAT_00548368 undefined4
// GLOBAL DAT_0054836c uint *
// GLOBAL DAT_00548370 undefined4 *
// GLOBAL DAT_00548374 undefined4
// GLOBAL DAT_00548378 uint *
// GLOBAL DAT_0054837c undefined4 *
// GLOBAL DAT_00548380 undefined4
// GLOBAL DAT_00548384 uint *
// GLOBAL DAT_00548388 undefined4 *
// GLOBAL DAT_0054838c undefined4

undefined4 func_00548264(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548360), iVar1 != 0)) {
    *DAT_00548364 = DAT_00548368;
  }
  if (DAT_00548364 != param_2) {
    if (((*DAT_0054836c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054836c), iVar1 != 0)) {
      *DAT_00548370 = DAT_00548374;
    }
    if (DAT_00548370 != param_2) {
      if (((*DAT_00548378 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548378), iVar1 != 0)) {
        *DAT_0054837c = DAT_00548380;
      }
      if (DAT_0054837c != param_2) {
        if (((*DAT_00548384 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548384), iVar1 != 0))
        {
          *DAT_00548388 = DAT_0054838c;
        }
        if (DAT_00548388 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

