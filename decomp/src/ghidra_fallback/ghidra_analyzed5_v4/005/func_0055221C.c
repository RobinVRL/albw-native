#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00552248;
extern undefined4 *DAT_0055224c;
extern undefined4 DAT_00552250;

// USA 0055221C <- EU 005521F4 (Ghidra, non-matching)
// GLOBAL DAT_00552248 uint *
// GLOBAL DAT_0055224c undefined4 *
// GLOBAL DAT_00552250 undefined4

void func_0055221C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552248 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552248), iVar1 != 0)) {
    *DAT_0055224c = DAT_00552250;
  }
  if (DAT_0055224c != param_2) {
    func_00628810(param_2);
  }
  return;
}

