#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e3ec;
extern undefined4 *DAT_0068e3f0;
extern undefined4 DAT_0068e3f4;
extern uint *DAT_0068e3f8;
extern undefined4 *DAT_0068e3fc;
extern undefined4 DAT_0068e400;

// USA 0068E374 <- EU 0068E34C (Ghidra, non-matching)
// GLOBAL DAT_0068e3ec uint *
// GLOBAL DAT_0068e3f0 undefined4 *
// GLOBAL DAT_0068e3f4 undefined4
// GLOBAL DAT_0068e3f8 uint *
// GLOBAL DAT_0068e3fc undefined4 *
// GLOBAL DAT_0068e400 undefined4

undefined4 func_0068E374(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e3ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e3ec), iVar1 != 0)) {
    *DAT_0068e3f0 = DAT_0068e3f4;
  }
  if (DAT_0068e3f0 != param_2) {
    if (((*DAT_0068e3f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e3f8), iVar1 != 0)) {
      *DAT_0068e3fc = DAT_0068e400;
    }
    if (DAT_0068e3fc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

