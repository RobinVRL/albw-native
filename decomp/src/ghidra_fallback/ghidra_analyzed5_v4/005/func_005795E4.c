#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00579610;
extern undefined4 *DAT_00579614;
extern undefined4 DAT_00579618;

// USA 005795E4 <- EU 005795BC (Ghidra, non-matching)
// GLOBAL DAT_00579610 uint *
// GLOBAL DAT_00579614 undefined4 *
// GLOBAL DAT_00579618 undefined4

void func_005795E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579610 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579610), iVar1 != 0)) {
    *DAT_00579614 = DAT_00579618;
  }
  if (DAT_00579614 != param_2) {
    func_004B9748(param_2);
  }
  return;
}

