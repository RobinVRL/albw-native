#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e1c4;
extern undefined4 *DAT_0068e1c8;
extern undefined4 DAT_0068e1cc;
extern uint *DAT_0068e1d0;
extern undefined4 *DAT_0068e1d4;
extern undefined4 DAT_0068e1d8;

// USA 0068E14C <- EU 0068E124 (Ghidra, non-matching)
// GLOBAL DAT_0068e1c4 uint *
// GLOBAL DAT_0068e1c8 undefined4 *
// GLOBAL DAT_0068e1cc undefined4
// GLOBAL DAT_0068e1d0 uint *
// GLOBAL DAT_0068e1d4 undefined4 *
// GLOBAL DAT_0068e1d8 undefined4

undefined4 func_0068E14C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e1c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e1c4), iVar1 != 0)) {
    *DAT_0068e1c8 = DAT_0068e1cc;
  }
  if (DAT_0068e1c8 != param_2) {
    if (((*DAT_0068e1d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e1d0), iVar1 != 0)) {
      *DAT_0068e1d4 = DAT_0068e1d8;
    }
    if (DAT_0068e1d4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

