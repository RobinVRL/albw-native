#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00652970(undefined4 *param_1);
extern uint *DAT_0053d1b4;
extern undefined4 *DAT_0053d1b8;
extern undefined4 DAT_0053d1bc;

// USA 0053D188 <- EU 0053D160 (Ghidra, non-matching)
// GLOBAL DAT_0053d1b4 uint *
// GLOBAL DAT_0053d1b8 undefined4 *
// GLOBAL DAT_0053d1bc undefined4

void func_0053D188(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053d1b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d1b4), iVar1 != 0)) {
    *DAT_0053d1b8 = DAT_0053d1bc;
  }
  if (DAT_0053d1b8 != param_2) {
    func_00652970(param_2);
  }
  return;
}

