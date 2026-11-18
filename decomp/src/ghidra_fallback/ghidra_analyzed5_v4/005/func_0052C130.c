#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052c1a8;
extern undefined4 *DAT_0052c1ac;
extern undefined4 DAT_0052c1b0;
extern uint *DAT_0052c1b4;
extern undefined4 *DAT_0052c1b8;
extern undefined4 DAT_0052c1bc;

// USA 0052C130 <- EU 0052C108 (Ghidra, non-matching)
// GLOBAL DAT_0052c1a8 uint *
// GLOBAL DAT_0052c1ac undefined4 *
// GLOBAL DAT_0052c1b0 undefined4
// GLOBAL DAT_0052c1b4 uint *
// GLOBAL DAT_0052c1b8 undefined4 *
// GLOBAL DAT_0052c1bc undefined4

undefined4 func_0052C130(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052c1a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c1a8), iVar1 != 0)) {
    *DAT_0052c1ac = DAT_0052c1b0;
  }
  if (DAT_0052c1ac != param_2) {
    if (((*DAT_0052c1b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c1b4), iVar1 != 0)) {
      *DAT_0052c1b8 = DAT_0052c1bc;
    }
    if (DAT_0052c1b8 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

