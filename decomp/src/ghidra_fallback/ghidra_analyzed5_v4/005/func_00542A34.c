#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001ACF30(undefined4 *param_1);
extern uint *DAT_00542a60;
extern undefined4 *DAT_00542a64;
extern undefined4 DAT_00542a68;

// USA 00542A34 <- EU 00542A0C (Ghidra, non-matching)
// GLOBAL DAT_00542a60 uint *
// GLOBAL DAT_00542a64 undefined4 *
// GLOBAL DAT_00542a68 undefined4

void func_00542A34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542a60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542a60), iVar1 != 0)) {
    *DAT_00542a64 = DAT_00542a68;
  }
  if (DAT_00542a64 != param_2) {
    func_001ACF30(param_2);
  }
  return;
}

