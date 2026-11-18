#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b674;
extern undefined4 *DAT_0055b678;
extern undefined4 DAT_0055b67c;
extern uint *DAT_0055b680;
extern undefined4 *DAT_0055b684;
extern undefined4 DAT_0055b688;

// USA 0055B600 <- EU 0055B5D8 (Ghidra, non-matching)
// GLOBAL DAT_0055b674 uint *
// GLOBAL DAT_0055b678 undefined4 *
// GLOBAL DAT_0055b67c undefined4
// GLOBAL DAT_0055b680 uint *
// GLOBAL DAT_0055b684 undefined4 *
// GLOBAL DAT_0055b688 undefined4

undefined4 func_0055B600(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b674 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b674), iVar1 != 0)) {
    *DAT_0055b678 = DAT_0055b67c;
  }
  if (DAT_0055b678 != param_2) {
    if (((*DAT_0055b680 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b680), iVar1 != 0)) {
      *DAT_0055b684 = DAT_0055b688;
    }
    if (DAT_0055b684 != param_2) {
      return 0;
    }
  }
  return 1;
}

