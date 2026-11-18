#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001ACF30(undefined4 *param_1);
extern uint *DAT_00584a04;
extern undefined4 *DAT_00584a08;
extern undefined4 DAT_00584a0c;

// USA 005849D8 <- EU 005849B0 (Ghidra, non-matching)
// GLOBAL DAT_00584a04 uint *
// GLOBAL DAT_00584a08 undefined4 *
// GLOBAL DAT_00584a0c undefined4

void func_005849D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584a04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584a04), iVar1 != 0)) {
    *DAT_00584a08 = DAT_00584a0c;
  }
  if (DAT_00584a08 != param_2) {
    func_001ACF30(param_2);
  }
  return;
}

