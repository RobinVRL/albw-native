#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003816CC(undefined4 *param_1);
extern uint *DAT_00548b44;
extern undefined4 *DAT_00548b48;
extern undefined4 DAT_00548b4c;

// USA 00548B18 <- EU 00548AF0 (Ghidra, non-matching)
// GLOBAL DAT_00548b44 uint *
// GLOBAL DAT_00548b48 undefined4 *
// GLOBAL DAT_00548b4c undefined4

void func_00548B18(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548b44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548b44), iVar1 != 0)) {
    *DAT_00548b48 = DAT_00548b4c;
  }
  if (DAT_00548b48 != param_2) {
    func_003816CC(param_2);
  }
  return;
}

