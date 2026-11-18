#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0054a670;
extern undefined4 *DAT_0054a674;
extern undefined4 DAT_0054a678;

// USA 0054A644 <- EU 0054A61C (Ghidra, non-matching)
// GLOBAL DAT_0054a670 uint *
// GLOBAL DAT_0054a674 undefined4 *
// GLOBAL DAT_0054a678 undefined4

void func_0054A644(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a670 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a670), iVar1 != 0)) {
    *DAT_0054a674 = DAT_0054a678;
  }
  if (DAT_0054a674 != param_2) {
    func_001E41C4(param_2);
  }
  return;
}

