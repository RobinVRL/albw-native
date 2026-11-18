#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003389CC(undefined4 *param_1);
extern uint *DAT_00560298;
extern undefined4 *DAT_0056029c;
extern undefined4 DAT_005602a0;

// USA 0056026C <- EU 00560244 (Ghidra, non-matching)
// GLOBAL DAT_00560298 uint *
// GLOBAL DAT_0056029c undefined4 *
// GLOBAL DAT_005602a0 undefined4

void func_0056026C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560298), iVar1 != 0)) {
    *DAT_0056029c = DAT_005602a0;
  }
  if (DAT_0056029c != param_2) {
    func_003389CC(param_2);
  }
  return;
}

