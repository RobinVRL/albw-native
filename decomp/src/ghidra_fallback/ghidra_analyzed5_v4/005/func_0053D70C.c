#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0053d784;
extern undefined4 *DAT_0053d788;
extern undefined4 DAT_0053d78c;
extern uint *DAT_0053d790;
extern undefined4 *DAT_0053d794;
extern undefined4 DAT_0053d798;

// USA 0053D70C <- EU 0053D6E4 (Ghidra, non-matching)
// GLOBAL DAT_0053d784 uint *
// GLOBAL DAT_0053d788 undefined4 *
// GLOBAL DAT_0053d78c undefined4
// GLOBAL DAT_0053d790 uint *
// GLOBAL DAT_0053d794 undefined4 *
// GLOBAL DAT_0053d798 undefined4

undefined4 func_0053D70C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d784 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d784), iVar1 != 0)) {
    *DAT_0053d788 = DAT_0053d78c;
  }
  if (DAT_0053d788 != param_2) {
    if (((*DAT_0053d790 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d790), iVar1 != 0)) {
      *DAT_0053d794 = DAT_0053d798;
    }
    if (DAT_0053d794 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

