#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_00525aa8;
extern undefined4 *DAT_00525aac;
extern undefined4 DAT_00525ab0;

// USA 00525A7C <- EU 00525A54 (Ghidra, non-matching)
// GLOBAL DAT_00525aa8 uint *
// GLOBAL DAT_00525aac undefined4 *
// GLOBAL DAT_00525ab0 undefined4

void func_00525A7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00525aa8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525aa8), iVar1 != 0)) {
    *DAT_00525aac = DAT_00525ab0;
  }
  if (DAT_00525aac != param_2) {
    func_001E4908(param_2);
  }
  return;
}

