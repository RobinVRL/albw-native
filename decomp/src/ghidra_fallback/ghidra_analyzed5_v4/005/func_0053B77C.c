#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002796B8(undefined4 *param_1);
extern uint *DAT_0053b7a8;
extern undefined4 *DAT_0053b7ac;
extern undefined4 DAT_0053b7b0;

// USA 0053B77C <- EU 0053B754 (Ghidra, non-matching)
// GLOBAL DAT_0053b7a8 uint *
// GLOBAL DAT_0053b7ac undefined4 *
// GLOBAL DAT_0053b7b0 undefined4

void func_0053B77C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053b7a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b7a8), iVar1 != 0)) {
    *DAT_0053b7ac = DAT_0053b7b0;
  }
  if (DAT_0053b7ac != param_2) {
    func_002796B8(param_2);
  }
  return;
}

