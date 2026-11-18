#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d58c;
extern undefined4 *DAT_0055d590;
extern undefined4 DAT_0055d594;
extern uint *DAT_0055d598;
extern undefined4 *DAT_0055d59c;
extern undefined4 DAT_0055d5a0;

// USA 0055D518 <- EU 0055D4F0 (Ghidra, non-matching)
// GLOBAL DAT_0055d58c uint *
// GLOBAL DAT_0055d590 undefined4 *
// GLOBAL DAT_0055d594 undefined4
// GLOBAL DAT_0055d598 uint *
// GLOBAL DAT_0055d59c undefined4 *
// GLOBAL DAT_0055d5a0 undefined4

undefined4 func_0055D518(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d58c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d58c), iVar1 != 0)) {
    *DAT_0055d590 = DAT_0055d594;
  }
  if (DAT_0055d590 != param_2) {
    if (((*DAT_0055d598 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d598), iVar1 != 0)) {
      *DAT_0055d59c = DAT_0055d5a0;
    }
    if (DAT_0055d59c != param_2) {
      return 0;
    }
  }
  return 1;
}

