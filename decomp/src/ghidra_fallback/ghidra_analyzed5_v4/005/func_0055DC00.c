#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003816CC(undefined4 *param_1);
extern uint *DAT_0055dc2c;
extern undefined4 *DAT_0055dc30;
extern undefined4 DAT_0055dc34;

// USA 0055DC00 <- EU 0055DBD8 (Ghidra, non-matching)
// GLOBAL DAT_0055dc2c uint *
// GLOBAL DAT_0055dc30 undefined4 *
// GLOBAL DAT_0055dc34 undefined4

void func_0055DC00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055dc2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055dc2c), iVar1 != 0)) {
    *DAT_0055dc30 = DAT_0055dc34;
  }
  if (DAT_0055dc30 != param_2) {
    func_003816CC(param_2);
  }
  return;
}

