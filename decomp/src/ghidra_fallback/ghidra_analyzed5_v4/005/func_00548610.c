#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00548684;
extern undefined4 *DAT_00548688;
extern undefined4 DAT_0054868c;
extern uint *DAT_00548690;
extern undefined4 *DAT_00548694;
extern undefined4 DAT_00548698;

// USA 00548610 <- EU 005485E8 (Ghidra, non-matching)
// GLOBAL DAT_00548684 uint *
// GLOBAL DAT_00548688 undefined4 *
// GLOBAL DAT_0054868c undefined4
// GLOBAL DAT_00548690 uint *
// GLOBAL DAT_00548694 undefined4 *
// GLOBAL DAT_00548698 undefined4

undefined4 func_00548610(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548684 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548684), iVar1 != 0)) {
    *DAT_00548688 = DAT_0054868c;
  }
  if (DAT_00548688 != param_2) {
    if (((*DAT_00548690 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548690), iVar1 != 0)) {
      *DAT_00548694 = DAT_00548698;
    }
    if (DAT_00548694 != param_2) {
      return 0;
    }
  }
  return 1;
}

