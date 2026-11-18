#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00610AB4(undefined4 *param_1);
extern uint *DAT_0052512c;
extern undefined4 *DAT_00525130;
extern undefined4 DAT_00525134;

// USA 00525100 <- EU 005250D8 (Ghidra, non-matching)
// GLOBAL DAT_0052512c uint *
// GLOBAL DAT_00525130 undefined4 *
// GLOBAL DAT_00525134 undefined4

void func_00525100(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052512c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052512c), iVar1 != 0)) {
    *DAT_00525130 = DAT_00525134;
  }
  if (DAT_00525130 != param_2) {
    func_00610AB4(param_2);
  }
  return;
}

