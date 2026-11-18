#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00325B1C(undefined4 *param_1);
extern uint *DAT_005245a0;
extern undefined4 *DAT_005245a4;
extern undefined4 DAT_005245a8;

// USA 00524574 <- EU 0052454C (Ghidra, non-matching)
// GLOBAL DAT_005245a0 uint *
// GLOBAL DAT_005245a4 undefined4 *
// GLOBAL DAT_005245a8 undefined4

void func_00524574(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005245a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005245a0), iVar1 != 0)) {
    *DAT_005245a4 = DAT_005245a8;
  }
  if (DAT_005245a4 != param_2) {
    func_00325B1C(param_2);
  }
  return;
}

