#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d58c;
extern undefined4 *DAT_0068d590;
extern undefined4 DAT_0068d594;
extern uint *DAT_0068d598;
extern undefined4 *DAT_0068d59c;
extern undefined4 DAT_0068d5a0;

// USA 0068D514 <- EU 0068D4EC (Ghidra, non-matching)
// GLOBAL DAT_0068d58c uint *
// GLOBAL DAT_0068d590 undefined4 *
// GLOBAL DAT_0068d594 undefined4
// GLOBAL DAT_0068d598 uint *
// GLOBAL DAT_0068d59c undefined4 *
// GLOBAL DAT_0068d5a0 undefined4

undefined4 func_0068D514(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d58c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d58c), iVar1 != 0)) {
    *DAT_0068d590 = DAT_0068d594;
  }
  if (DAT_0068d590 != param_2) {
    if (((*DAT_0068d598 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d598), iVar1 != 0)) {
      *DAT_0068d59c = DAT_0068d5a0;
    }
    if (DAT_0068d59c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

