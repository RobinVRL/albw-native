#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0053d148;
extern undefined4 *DAT_0053d14c;
extern undefined4 DAT_0053d150;
extern uint *DAT_0053d154;
extern undefined4 *DAT_0053d158;
extern undefined4 DAT_0053d15c;

// USA 0053D0D0 <- EU 0053D0A8 (Ghidra, non-matching)
// GLOBAL DAT_0053d148 uint *
// GLOBAL DAT_0053d14c undefined4 *
// GLOBAL DAT_0053d150 undefined4
// GLOBAL DAT_0053d154 uint *
// GLOBAL DAT_0053d158 undefined4 *
// GLOBAL DAT_0053d15c undefined4

undefined4 func_0053D0D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d148), iVar1 != 0)) {
    *DAT_0053d14c = DAT_0053d150;
  }
  if (DAT_0053d14c != param_2) {
    if (((*DAT_0053d154 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d154), iVar1 != 0)) {
      *DAT_0053d158 = DAT_0053d15c;
    }
    if (DAT_0053d158 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

