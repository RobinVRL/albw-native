#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00261EB0(undefined4 *param_1);
extern uint *DAT_0051dcbc;
extern undefined4 *DAT_0051dcc0;
extern undefined4 DAT_0051dcc4;

// USA 0051DC90 <- EU 0051DC68 (Ghidra, non-matching)
// GLOBAL DAT_0051dcbc uint *
// GLOBAL DAT_0051dcc0 undefined4 *
// GLOBAL DAT_0051dcc4 undefined4

void func_0051DC90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051dcbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dcbc), iVar1 != 0)) {
    *DAT_0051dcc0 = DAT_0051dcc4;
  }
  if (DAT_0051dcc0 != param_2) {
    func_00261EB0(param_2);
  }
  return;
}

