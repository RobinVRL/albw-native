#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052c6e8;
extern undefined4 *DAT_0052c6ec;
extern undefined4 DAT_0052c6f0;
extern uint *DAT_0052c6f4;
extern undefined4 *DAT_0052c6f8;
extern undefined4 DAT_0052c6fc;

// USA 0052C670 <- EU 0052C648 (Ghidra, non-matching)
// GLOBAL DAT_0052c6e8 uint *
// GLOBAL DAT_0052c6ec undefined4 *
// GLOBAL DAT_0052c6f0 undefined4
// GLOBAL DAT_0052c6f4 uint *
// GLOBAL DAT_0052c6f8 undefined4 *
// GLOBAL DAT_0052c6fc undefined4

undefined4 func_0052C670(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052c6e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c6e8), iVar1 != 0)) {
    *DAT_0052c6ec = DAT_0052c6f0;
  }
  if (DAT_0052c6ec != param_2) {
    if (((*DAT_0052c6f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c6f4), iVar1 != 0)) {
      *DAT_0052c6f8 = DAT_0052c6fc;
    }
    if (DAT_0052c6f8 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

