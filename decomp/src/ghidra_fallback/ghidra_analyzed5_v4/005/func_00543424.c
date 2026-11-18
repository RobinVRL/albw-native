#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FC030(undefined4 *param_1);
extern uint *DAT_00543450;
extern undefined4 *DAT_00543454;
extern undefined4 DAT_00543458;

// USA 00543424 <- EU 005433FC (Ghidra, non-matching)
// GLOBAL DAT_00543450 uint *
// GLOBAL DAT_00543454 undefined4 *
// GLOBAL DAT_00543458 undefined4

void func_00543424(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543450 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543450), iVar1 != 0)) {
    *DAT_00543454 = DAT_00543458;
  }
  if (DAT_00543454 != param_2) {
    func_002FC030(param_2);
  }
  return;
}

